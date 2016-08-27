" Source files {{{
source $HOME/.config/nvim/config/keepitclean.vimrc
source $HOME/.config/nvim/config/visual.vimrc
source $HOME/.config/nvim/config/backstage.vimrc
source $HOME/.config/nvim/config/keys.vimrc
source $HOME/.config/nvim/config/plugins.vimrc
" }}}
"Plugins {{{
call plug#begin()
Plug 'https://github.com/rking/ag.vim'
Plug 'https://github.com/ctrlpvim/ctrlp.vim.git'    

call plug#end()
"}}}

" vim:foldmethod=marker:foldlevel=0
