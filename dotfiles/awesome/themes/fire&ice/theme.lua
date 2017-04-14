local gears = require("gears")
local colors 		= {
    zero             		= "#080000",
    one              		= "#803000",
    two              		= "#402810",
    three            		= "#322507",
    four             		= "#1b2638",
    five             		= "#d08010",
    six              		= "#68a8c8",
    seven            		= "#282828",
    eight            		= "#23262b",
    nine             		= "#d09020",
    ten              		= "#b08050",
    eleven           		= "#e7ab09",
    twelve           		= "#386888",
    thirteen         		= "#f0a800",
    fourteen         		= "#73abca",
    fifteen          		= "#f8e830",
}


local theme 		= {
    font        = 'Monospace 10',
    wallpaper   = os.getenv('HOME') .. '/.dotfiles/awesome/themes/fire&ice/wallpaper.png',
}
icons               = {}

theme.bg            = {
    normal  = colors.zero,
}

theme.fg            = {
    normal  = colors.fifteen,
}
theme.border        = {
    width   = 2,
    normal  = colors.fourteen,
    focus   = colors.five,
}

theme.taglist       = {
    bg      = {
        focus       = colors.fifteen .. "B0",
        urgent      = colors.one, --occupied    = colors.four,
        --empty       = colors.four,
    },
    fg      = {
        normal      = colors.fifteen,
        focus       = colors.four,
        urgent      = colors.eleven,
    },
    border  = '',
    icons = {
        one = '  ',
        two = '  ',
        three = '  ',
        four = '  ',
        five = '  ',
        six = '  ',
    },
    gap = 10,
}

theme.tasklist      = {
    bg      = {
        normal      = colors.four .. "80",
        focus       = colors.eleven .. "B0",
        urgent      = theme.taglist.bg.urgent,
    },
    fg      = {
        normal      = theme.fg_normal,
        focus       = colors.four,
        urgent      = theme.taglist.fg.urgent,
    },
    border  = '',
    disable_icon = 'true',
    align = 'center',
}

theme.mpd           = {
    ctl     = {
        bg      = colors.thirteen .. '00',
        fg      = colors.four,
        border  = '',
    },

    now_playing = {
        bg = gears.color{
            type = "linear",
            from = { 0, 0 },
            to   = {640, 0 } ,
            stops = {{0, colors.five.."99"}, {0.5, colors.zero..'99'}, {1, colors.twelve.."99"}, }
        },
        fg = gears.color{
            type = 'linear',
            from = {0,0},
            to = {640,0},
            stops = {{0, colors.six},{1, colors.fifteen}},
        },
        border = '',
    },

    icons   = {
        play = '  ',
        pause = '  ',
        stop = '  ',
        prev = '  ',
        nxt = '  ',
        plr = '  ',
    }
}

theme.prompt        = {
    bg      = gears.color{
        type = "linear",
        from = { 0, 32 },
        to   = { 480, 0 } ,
        stops = {{0, colors.one..'bf'}, {1, colors.four..'bf'}, }
    },
    fg      = colors.twelve,
    border  = colors.twelve,
}

theme.tray          = {
    bg      = colors.two .. 'b3',
    fg      = '#',
    border  = colors.ten,
}

theme.bg_normal         		= theme.bg.normal .. '#00'
theme.fg_normal         		= theme.fg.normal

theme.border_width      		= theme.border.width
theme.border_normal     		= theme.border.normal
theme.border_focus      		= theme.border.focus

theme.taglist_bg_focus  		= theme.taglist.bg.focus
theme.taglist_bg_urgent 		= theme.taglist.bg.urgent
theme.taglist_bg_occupied 		= theme.taglist.bg.occupied
theme.taglist_bg_empty  		= theme.taglist.bg.empty
theme.taglist_fg_focus  		= theme.taglist.fg.focus
theme.taglist_fg_urgent 		= theme.taglist.fg.urgent

theme.tasklist_bg_normal        = theme.tasklist.bg.normal
theme.tasklist_bg_focus         = theme.tasklist.bg.focus
theme.tasklist_bg_urgent        = theme.tasklist.bg.urgent
theme.tasklist_fg_normal        = theme.tasklist.fg.normal
theme.tasklist_fg_focus         = theme.tasklist.fg.focus
theme.tasklist_fg_urgent        = theme.tasklist.fg.urgent
theme.tasklist_disable_icon     = theme.tasklist.disable_icon
theme.tasklist_align            = theme.tasklist.align

return theme

