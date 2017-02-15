--TODO add media widgets
--TODO add tray bar

local awful = require('awful')
local wibox = require('wibox')
local beautiful = require('beautiful')
local bindings = require('bindings')
local lain = require('lain')

local widgets = { tags = {}, prompt = {}, tasklist = {}, mpd = { ctl = {}, now_playing = {} }}

function widgets.setup()
    awful.screen.connect_for_each_screen(function(s)
        s.widgets = widgets

        -- Define the widgets
        s.widgets.tags.widget = awful.widget.taglist(s, awful.widget.taglist.filter.all, bindings.taglist())
        s.widgets.prompt.widget = awful.widget.prompt()
        s.widgets.tasklist.widget = awful.widget.tasklist(s, awful.widget.tasklist.filter.currenttags, bindings.tasklist())
        s.widgets.mpd.ctl.play = wibox.widget.textbox(' pl ')
        s.widgets.mpd.ctl.stop = wibox.widget.textbox('stop ')
        s.widgets.mpd.ctl.prev = wibox.widget.textbox('prev')
        s.widgets.mpd.ctl.next = wibox.widget.textbox('next')

        -- Define the wiboxes
        s.widgets.tags.wibox = wibox { height = 25, width = 160, visible = true }
        s.widgets.prompt.wibox = wibox { height = 25, width = 512, visible = false, ontop = true, bg = beautiful.prompt.bg, fg = beautiful.prompt.fg }
        s.widgets.tasklist.wibox = wibox { height = 25, width = 1280, visible = true, bg = '#00' }
        s.widgets.mpd.ctl.wibox = wibox { height = 25, width = 256, visible = true, bg = beautiful.mpd.ctl.bg }
        s.widgets.mpd.now_playing.wibox = wibox { height = 25, width = 512, visible = false, bg = beautiful.mpd.now_playing.bg}

        -- Add reserved space for widgets that need it
        s.widgets.tags.wibox:struts{ top = s.widgets.tags.wibox.height }
        s.widgets.tasklist.wibox:struts{ bottom = s.widgets.tasklist.wibox.height }

        -- Be sure the widgets are were they belong
        awful.placement.centered(s.widgets.prompt.wibox)
        awful.placement.bottom(s.widgets.tasklist.wibox)
        awful.placement.top_right(s.widgets.mpd.ctl.wibox)
        awful.placement.top(s.widgets.mpd.now_playing.wibox)

        -- Bring the widgets together
        s.widgets.tags.wibox:setup{
            layout  = wibox.layout.fixed.horizontal,
            s.widgets.tags.widget,
        }
        s.widgets.prompt.wibox:setup{
            layout  = wibox.layout.fixed.horizontal,
            s.widgets.prompt.widget,
        }
        s.widgets.tasklist.wibox:setup{
            layout  = wibox.layout.align.horizontal,
            nil,
            s.widgets.tasklist.widget,
        }
        s.widgets.mpd.ctl.wibox:setup{
            layout  = wibox.layout.fixed.horizontal,
            {
                layout  = wibox.layout.align.horizontal,
                s.widgets.mpd.ctl.play,
                s.widgets.mpd.ctl.stop,
                s.widgets.mpd.ctl.prev,
                s.widgets.mpd.ctl.next
            },
            nil,

        }
        s.widgets.mpd.now_playing.wibox:setup{
            layout  = wibox.layout.align.horizontal,
        }
    end)
end

return widgets
