ZSH=$ZDOTDIR/.oh-my-zsh

if [ "$TERM" != "linux" ]; then
    ZSH_THEME="imp"
    source $ZSH/oh-my-zsh.sh
fi

clear
