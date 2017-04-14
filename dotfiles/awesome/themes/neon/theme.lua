local gears = require("gears")
local colors 		= {
    zero             	= '#000808',
    one          		= '#f8f8f8',
}


local theme 		= {
    font        = 'Monospace 10',
    wallpaper   = os.getenv('HOME') .. '/.dotfiles/awesome/themes/neon/wallpaper.jpeg',
}
icons               = {}

theme.bg            = {
    normal  = colors.zero,
}

theme.fg            = {
    normal  = colors.one,
}
theme.border        = {
    width   = 1,
    normal  = colors.one,
    focus   = colors.one,
}

theme.taglist       = {
    bg      = {
        focus       = colors.one,
        urgent      = colors.one..'60',
        occupied    = '#a8a8a826',
        empty       = '#00',
    },
    fg      = {
        normal      = colors.one,
        focus       = colors.zero,
        urgent      = colors.one,
    },
    border  = colors.one,
    icons = {
        one = '  ',
        two = '  ',
        three = '  ',
        four = '  ',
        five = '  ',
        six = '  ',
    },
    gap = 6,
}

theme.tasklist      = {
    bg      = {
        normal      = '#a8a8a826',
        focus       = colors.one,
        urgent      = theme.taglist.bg.urgent,
    },
    fg      = {
        normal      = theme.fg_normal,
        focus       = colors.zero,
        urgent      = theme.taglist.fg.urgent,
    },
    border  = colors.one,
    disable_icon = 'true',
    align = 'center',
}

theme.mpd           = {
    ctl     = {
        bg      = '#a8a8a826',
        fg      = colors.one,
        border  = colors.one,
    },

    now_playing = {
        bg = '#a8a8a826',
        fg = colors.one,
        border = colors.one,
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
    bg      = '#a8a8a826',
    fg      = colors.one,
    border  = colors.one,
}

theme.tray          = {
    bg      = colors.one .. 'b3',
    fg      = '',
    border  = colors.one,
}

theme.bg_normal         		= theme.bg.normal
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
