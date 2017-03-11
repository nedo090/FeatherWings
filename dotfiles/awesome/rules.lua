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
    properties = { tag = awful.screen.focused().tags[1],} },

    { rule = { class = 'mpv' },
    properties = { sticky = true, switchtotag = false },
    callback = function(c)
        awful.spawn.with_shell("mpc pause")
        awful.client.setslave(c)
        c:connect_signal('unmanage', function() 
        end)
    end},

    { rule_any = { class = { 'qutebrowser' }, role = { 'browser' }},
    properties = { tag = awful.screen.focused().tags[2], floating = false }},

    { rule_any = { instance = {'stock-watch', 'www.investopedia.com__simulator', 'www.wallstreetsurvivor.com', 'www.howthemarketworks.com', 'thestockmarketwatch.com__markets_today.aspx'} },
    properties = { tag = awful.screen.focused().tags[3], floating = false }},

    {rule_any = { instance = {'stock-watch'} },
    callback = function(c)
        awful.client.setmaster(c)
    end},

    { rule_any = { instance = {'book'} },
    properties = { tag = awful.screen.focused().tags[4] }},

    { rule = { instance = 'coding' },
    properties = { tag = awful.screen.focused().tags[5] }},
}
end

return rules
