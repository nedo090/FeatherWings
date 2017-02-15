local colors 		= {
    zero             		= os.getenv('color0'),
    one              		= os.getenv('color1'),
    two              		= os.getenv('color2'),
    three            		= os.getenv('color3'),
    four             		= os.getenv('color4'),
    five             		= os.getenv('color5'),
    six              		= os.getenv('color6'),
    seven            		= os.getenv('color7'),
    eight            		= os.getenv('color8'),
    nine             		= os.getenv('color9'),
    ten              		= os.getenv('color10'),
    eleven           		= os.getenv('color11'),
    twelve           		= os.getenv('color12'),
    thirteen         		= os.getenv('color13'),
    fourteen         		= os.getenv('color14'),
    fifteen          		= os.getenv('color15'),
}


local theme 		= {
    font        = 'Monospace 10',
    wallpaper   = os.getenv('HOME') .. '/.dotfiles/awesome/themes/fire&ice/wallpaper.png',
}
icons               = {}

theme.bg            = {
    normal  = '#' .. colors.zero,
}

theme.fg            = {
    normal  = '#' .. colors.fifteen,
}
theme.border        = {
    width   = 2,
    normal  = '#' .. colors.fourteen,
    focus   = '#' .. colors.five,
}

theme.taglist       = {
    bg      = {
        focus       = theme.fg.normal,
        urgent      = '#' .. colors.one,
        occupied    = '#' .. colors.four,
        empty       = '#' .. colors.four,
    },
    fg      = {
        focus       = theme.bg.normal,
        urgent      = '#' .. colors.eleven,
    },
    border  = '',
}

theme.tasklist      = {
    bg      = {
        normal      = theme.border.normal,
        focus       = theme.border.focus,
        urgent      = theme.taglist.bg.urgent,
    },
    fg      = {
        normal      = theme.fg_normal,
        focus       = '#' .. colors.zero,
        urgent      = theme.taglist.fg.urgent,
    },
    border  = '',
    disable_icon = 'true',
    align = 'center',
}
theme.mpd           = {
    ctl     = {
        bg      = '#' .. colors.thirteen .. '80',
        fg      = '',
        border  = '',
    },
    now_playing = {
        bg = '#' .. colors.two .. '80',
        fg = '',
        border = '',
    }
}
theme.prompt        = {
    bg      = '#' .. colors.four,
    fg      = '#' .. colors.twelve,
    border  = '#' .. colors.twelve,
}
theme.tray          = {
    bg      = '#' .. colors.two .. 'b3',
    fg      = '#',
    border  = '#' .. colors.ten,
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

