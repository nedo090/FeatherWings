let g:plug_threads = 8
let g:plug_timeout = 30

call plug#begin('$HOME/.cerium/nvim/plugged')

Plug 'Shougo/deoplete.nvim', { 'do': ':UpdateRemotePlugins' }
Plug 'neomake/neomake', { 'do': ':UpdateRemotePlugins' }
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'airblade/vim-gitgutter'
Plug 'jiangmiao/auto-pairs'
Plug 'Yggdroot/indentLine'
Plug 'SirVer/ultisnips'
Plug 'honza/vim-snippets'
Plug 'ctrlpvim/ctrlp.vim'
Plug 'kassio/neoterm'
Plug 'tpope/vim-surround'
Plug 'scrooloose/nerdtree'
Plug 'dhruvasagar/vim-table-mode'

call plug#end()


