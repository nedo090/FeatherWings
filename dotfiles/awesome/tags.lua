local awful = require("awful")
local beautiful = require("beautiful")
local gears = require("gears")

local tags = {}

local function set_wallpaper(s)
    -- Wallpaper
    if beautiful.wallpaper then
        local wallpaper = beautiful.wallpaper
        -- If wallpaper is a function, call it with the screen
        if type(wallpaper) == "function" then
            wallpaper = wallpaper(s)
        end
        gears.wallpaper.maximized(wallpaper, s, true)
    end
end

function tags.setup()
    awful.screen.connect_for_each_screen(function(s)
        set_wallpaper(s)

        local gap = 10

        awful.tag.add(' 1 ', {
            layout = awful.layout.suit.tile,
            gap = gap,
            screen = s,
        })

        awful.tag.add(' 2 ', {
            layout = awful.layout.suit.tile,
            gap = gap,
            screen = s,
        })

        awful.tag.add(' 3 ', {
            layout = awful.layout.suit.tile,
            gap = gap,
            screen = s,
        })

        awful.tag.add(' 4 ', {
            layout = awful.layout.suit.tile,
            gap = gap,
            screen = s,

        })

        awful.tag.add(' 5 ', {
            layout = awful.layout.suit.tile,
            gap = gap,
            screen = s,
        })

    end)
    screen.connect_signal("property::geometry", set_wallpaper)
end

return tags
