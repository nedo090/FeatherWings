local awful = require('awful')

local layouts = {}

function layouts.layouts()
    awful.layout.layouts = {
        awful.layout.suit.tile,
        awful.layout.suit.tile.left,
        awful.layout.suit.tile.bottom,
        awful.layout.suit.tile.top,
        awful.layout.suit.floating,
    }
end

return layouts
