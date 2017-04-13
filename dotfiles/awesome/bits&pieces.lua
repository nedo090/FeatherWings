local naughty = require("naughty")
local beautiful = require("beautiful")

local bits = {}

function bits.error_handling()
    -- {{{ Error handling
    -- Check if awesome encountered an error during startup and fell back to
    -- another config (This code will only ever execute for the fallback config)
    if awesome.startup_errors then
        naughty.notify({ preset = naughty.config.presets.critical,
        title = "Oops, there were errors during startup!",
        text = awesome.startup_errors })
    end

    -- Handle runtime errors after startup
    do
        local in_error = false
        awesome.connect_signal("debug::error", function (err)
            -- Make sure we don't go into an endless error loop
            if in_error then return end
            in_error = true

            naughty.notify({ preset = naughty.config.presets.critical,
            title = "Oops, an error happened!",
            text = tostring(err) })
            in_error = false
        end)
    end
end

function bits.set()
    theme = "neon"
    beautiful.init('/home/professoroptics/.dotfiles/awesome/themes/'..theme..'/theme.lua')
    terminal = "termite"
    editor = os.getenv("EDITOR") or "nano"
    editor_cmd = terminal .. " -e " .. editor
    --
    -- Enable sloppy focus, so that focus follows mouse.
    client.connect_signal("mouse::enter", function(c)
            if require("awful").layout.get(c.screen) ~= require("awful").layout.suit.magnifier
                    and require("awful").client.focus.filter(c) then
                    client.focus = c
            end
    end)
end

return bits
