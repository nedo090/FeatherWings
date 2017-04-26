# vim: set filetype=sh :

cast() {
        $HOME/git/screenkey/screenkey -f Monospace -s medium --bg-color '#080000' --font-color '#f8e830' --mods-mode emacs --opacity 0.45 --no-detach --no-systray &
        ffmpeg -v fatal -f x11grab -s 1920x1080 -i :0 -r 24 $1;
        kill -s QUIT %\$HOME/git/screenkey/screenkey
}

alias q="exit"
alias c="clear"
alias su="su ${} -"
alias dir="ls"
alias gdr="cd ~/git"
alias in="sudo emerge -av ${}"
alias uin="sudo emerge -ac ${}"
alias mus="ncmpcpp"
alias kill="kill -s QUIT ${}"
alias com="g++ -std=c++11 $1 -o $2"
alias gcl="git clone"
alias gad="git add"
alias gcom="git commit"
alias gp="git push"

if [ "$DISPLAY" ]; then
        alias qut="qutebrowser --backend webengine"
fi

if [ "$TMUX" ]; then
        alias q="tmux detach"
        alias qq="exit"
        alias selp="tmux selectp -t"
        alias selw="tmux selectw -t"
        alias brkp="tmux breakp -t"
        alias kilw="tmux killw"
        alias rens="tmux rename"
        alias renw="tmux renamew"
        alias splh="tmux splitw -h"
        alias splv="tmux splitw -v"
        alias sync="tmux setw synchronize-panes"
        alias newc="tmux neww \; splitw -h -l124 \; splitw -v -d -l12 \; selectp -t1"
fi
