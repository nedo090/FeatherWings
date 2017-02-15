set nocompatible
filetype off

set rtp+=$XDG_CONFIG_HOME/nvim/bundle/vundle.vim
call vundle#begin()

Plugin 'VundleVim/Vundle.vim'
Plugin 'Shougo/deoplete.nvim'
Plugin 'airblade/vim-gitgutter'
Plugin 'airodactyl/neovim-ranger'
Plugin 'timeyyy/orchestra.nvim'
Plugin 'neomake/neomake'
call vundle#end()
filetype plugin indent on
