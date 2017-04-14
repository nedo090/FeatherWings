--TODO add tray bar
local awful = require('awful')
local wibox = require('wibox')
local beautiful = require('beautiful')
local bindings = require('bindings')
local lain = require('lain')
local gears = require('gears')

local widgets = { tags = {}, prompt = {}, tasklist = {}, mpd = { ctl = {}, now_playing = {} }}

function widgets.setup()
    awful.screen.connect_for_each_screen(function(s)
        s.widgets = widgets

        -- Define the wiboxes
        s.widgets.tags.wibox = wibox { height = 25, width = 200, visible = true, bg = '#00', fg=beautiful.taglist.fg.normal, type = 'dock', }
        s.widgets.prompt.wibox = wibox { height = 25, width = 512, visible = false, ontop = true, bg = beautiful.prompt.bg, fg = beautiful.prompt.fg, type = 'dock', shape = gears.shape.hexagon}
        s.widgets.tasklist.wibox = wibox { height = 25, width = 1280, visible = true, bg = '#00', type = 'dock'}
        s.widgets.mpd.ctl.wibox = wibox { height = 25, width = 116, visible = true, bg = beautiful.mpd.ctl.bg, fg = beautiful.mpd.ctl.fg, type = 'dock', }
        s.widgets.mpd.now_playing.wibox = wibox { height = 25, width = 640, visible = false, bg = beautiful.mpd.now_playing.bg, fg = beautiful.mpd.now_playing.fg,  type = 'dock', shape = gears.shape.hexagon}

        -- Define the widgets
        s.widgets.tags.widget = awful.widget.taglist(s, awful.widget.taglist.filter.all, bindings.taglist(), {})
        s.widgets.prompt.widget = awful.widget.prompt()
        s.widgets.tasklist.widget = awful.widget.tasklist(s, awful.widget.tasklist.filter.currenttags, bindings.tasklist(), { shape = gears.shape.hexagon })
        s.widgets.mpd.ctl.play = wibox.widget.textbox(beautiful.mpd.icons.play)
        s.widgets.mpd.ctl.stop = wibox.widget.textbox(beautiful.mpd.icons.stop)
        s.widgets.mpd.ctl.prev = wibox.widget.textbox(beautiful.mpd.icons.prev)
        s.widgets.mpd.ctl.nxt = wibox.widget.textbox(beautiful.mpd.icons.nxt)
        s.widgets.mpd.ctl.plr = wibox.widget.textbox(beautiful.mpd.icons.plr)
        mpd = lain.widget.mpd({
            timeout = 1,
            settings = function ()
                if mpd_now.state == "play" then
                    mpd_now.artist = mpd_now.artist:upper():gsub("&.-;", string.lower)
                    mpd_now.title = mpd_now.title:upper():gsub("&.-;", string.lower)
                    widget:set_markup(" " .. " " .. mpd_now.elapsed .. " " .. mpd_now.artist
                    .. " - " .. mpd_now.title)
                    s.widgets.mpd.ctl.play:set_markup(beautiful.mpd.icons.pause)
                    s.widgets.mpd.now_playing.wibox.visible = true
                elseif mpd_now.state == "pause" then
                    s.widgets.mpd.ctl.play:set_markup(beautiful.mpd.icons.play)
                    s.widgets.mpd.now_playing.wibox.visible = false
                else
                    s.widgets.mpd.ctl.play:set_markup(beautiful.mpd.icons.play)
                    s.widgets.mpd.now_playing.wibox.visible = false
                end
            end
        })
        local musicbg = wibox.container.background(mpd.widget, '#00', gears.shape.rectangle)
        local musicwidget = wibox.container.margin(musicbg, 0, 0, 5, 5)

        musicwidget:buttons(awful.util.table.join(awful.button({  }, 1,
        function() awful.spawn("termite --name ncmpcpp -e ncmpcpp")end)))
        s.widgets.mpd.ctl.play:buttons(awful.util.table.join(awful.button({  }, 1,
        function()
            awful.spawn.with_shell("mpc toggle")
        end)))
        s.widgets.mpd.ctl.stop:buttons(awful.util.table.join(awful.button({  }, 1,
        function()
            s.widgets.mpd.ctl.play:set_markup(beautiful.mpd.icons.play)
            awful.spawn.with_shell("mpc stop")
        end)))
        s.widgets.mpd.ctl.nxt:buttons(awful.util.table.join(awful.button({ }, 1,
        function()
            awful.spawn.with_shell("mpc next")
            mpd.update()
        end)))
        s.widgets.mpd.ctl.prev:buttons(awful.util.table.join(awful.button({ }, 1,
        function()
            awful.spawn.with_shell("mpc prev")
            mpd.update()
        end)))
        s.widgets.mpd.ctl.plr:buttons(awful.util.table.join(awful.button({ }, 1,
        function()
            awful.spawn("termite --name ncmpcpp -e ncmpcpp")
        end)))

        -- Add widgets to containers
        -- Add reserved space for widgets that need it
        s.widgets.tags.wibox:struts{ top = s.widgets.tags.wibox.height + 2*s.widgets.tags.wibox.border_width}
        s.widgets.tasklist.wibox:struts{ bottom = s.widgets.tasklist.wibox.height }

        -- Be sure the widgets are were they belong
        awful.placement.centered(s.widgets.prompt.wibox)
        awful.placement.bottom(s.widgets.tasklist.wibox)
        awful.placement.top_right(s.widgets.mpd.ctl.wibox)
        awful.placement.top(s.widgets.mpd.now_playing.wibox)

        -- Bring the widgets together
        s.widgets.tags.wibox:setup{
            layout  = wibox.layout.align.horizontal,
            nil,
            {
                layout  = wibox.layout.fixed.horizontal,
                s.widgets.tags.widget,
            }
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
                layout  = wibox.layout.fixed.horizontal,
                nil,
                {
                    layout  = wibox.layout.fixed.horizontal,
                    s.widgets.mpd.ctl.plr,
                    s.widgets.mpd.ctl.play,
                    s.widgets.mpd.ctl.stop,
                    s.widgets.mpd.ctl.prev,
                    s.widgets.mpd.ctl.nxt,
                },
            },
        }
        s.widgets.mpd.now_playing.wibox:setup{
            layout  = wibox.layout.align.horizontal,
            nil,
            {
                layout  = wibox.layout.align.horizontal,
                musicwidget,
            }
        }
    end)
end

return widgets
