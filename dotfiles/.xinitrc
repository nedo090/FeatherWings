#!/bin/sh

intern=eDP1
extern=HDMI1

xrandr --setprovideroutputsource modesetting NVIDIA-0

if xrandr | grep "$extern disconnected"; then
        xrandr --output "$extern" --off --output "$intern" --auto        
else
        xrandr --output "$intern" --off --output "$extern" --mode auto --primary
fi

# {{{1
if [ -d /etc/X11/xinit/xinitrc.d ]; then
  for f in /etc/X11/xinit/xinitrc.d/*; do
    [ -x "$f" ] && . "$f"
  done
  unset f
fi
# Input Settings {{{1
#
# Keyboard control, repeat delay and repeat rate
xset r rate 200 30

# Resource and keymap settings {{{1
#
# Merge system and user resources and keymaps
usermodmap="${XDG_CONFIG_HOME}/.Xmodmap"
userresources="${XDG_CONFIG_HOME}/.Xresources"
sysmodmap="/etc/X11/xinit/.Xmodmap"
sysresources="/etc/X11/xinit/.Xresources"

[[ -r "${sysresources}" ]]  && xrdb -merge "${sysresources}"
[[ -r "${sysmodmap}" ]]     && xmodmap "${sysmodmap}"
[[ -r "${userresources}" ]] && xrdb -merge "${userresources}"
[[ -r "${usermodmap}" ]]    && xmodmap "${usermodmap}"

#  Log settings {{{1
#
# Always start X11 with a clean log file
errorlog="${HOME}/.logs/xerrors"

if (cp /dev/null "${errorlog}"); then
  chmod 600 "${errorlog}"
  exec >"${errorlog}" 2>&1
  break
fi
# AutoStart {{{1
#
numlockx &
# MPD
( ( sleep 10 && mpd ) & )

# compton
( ( sleep 10 && compton ) & )

#numlockx
# Window Manager {{{1
exec awesome
# vim:foldmethod=marker:foldcolumn=3:foldlevel=0
