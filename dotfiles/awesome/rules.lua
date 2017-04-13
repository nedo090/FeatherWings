local awful = require("awful")
local beautiful = require("beautiful")
local gears = require("gears")

local rules = {}

function rules.set()
    awful.rules.rules = {
        -- All clients will match this rule.
        { rule = { },
        properties = { border_width = beautiful.border_width,
        border_color = beautiful.border_normal,
        focus = awful.client.focus.filter,
        raise = true,
        keys = require('bindings').client(),
        buttons = clientbuttons,
        screen = awful.screen.preferred,
        placement = awful.placement.no_overlap+awful.placement.no_offscreen,
        sticky = false,
        switchtotag = true,
        tag = awful.screen.focused().tags[6],
    },
},

-- Floating clients.
{ rule_any = {
    instance = {
        "DTA",  -- Firefox addon DownThemAll.
        "copyq",  -- Includes session name in class.
    },
    class = {
        "Arandr",
        "Gpick",
        "Kruler",

        "MessageWin",  -- kalarm.
        "Sxiv",
        "Wpa_gui",
        "pinentry",
        "veromix",
        "xtightvncviewer"},

        name = {
            "Event Tester",  -- xev.
        },
        role = {
            "AlarmWindow",  -- Thunderbird's calendar.
            "pop-up",       -- e.g. Google Chrome's (detached) Developer Tools.
        }
}, properties = { floating = true, switchtotag = false }},

    { rule_any = { class = {'Termite'} },
    properties = { tag = awful.screen.focused().tags[1],},
    callback = function(c) awful.client.setslave(c) end},

    { rule = { class = 'mpv' },
    properties = { sticky = true, switchtotag = false, skip_taskbar = true},
    callback = function(c)
        awful.spawn.with_shell("mpc pause")
        awful.client.setslave(c)
        c:connect_signal('unmanage', function()
        end)
    end},

    { rule_any = { class = { 'qutebrowser', 'Chromium-browser' }, role = { 'browser' }},
    properties = { tag = awful.screen.focused().tags[2] }},

    { rule_any = { instance = {'www.bloomberg.com__africa', 'thestockmarketwatch.com__markets_today.aspx', 'www.etoro.com__portfolio'} },
    properties = { tag = awful.screen.focused().tags[3], floating = false },
    callback = function(c) awful.client.setslave(c) end},

    {rule_any = { instance = {'stock-watch'} },
    properties = { tag = awful.screen.focused().tags[3], floating = false, border_width = 0, focusable = false, skip_taskbar = true},
    callback = function(c)
        awful.client.setmaster(c)
    end},

    { rule_any = { instance = {'book'} },
    properties = { tag = awful.screen.focused().tags[4] }},

    { rule = { instance = 'coding' },
    properties = { tag = awful.screen.focused().tags[5] }},

    { rule = { instance = 'wyrd' },
    callback = function(c) awful.client.setmaster(c) end}
}
end

return rules
