set number
syntax enable
set cursorline
filetype indent on
set showmatch
set incsearch
set hlsearch
set tabstop=4
set softtabstop=4
set shiftwidth=4
set expandtab
set listchars=tab:¬\ ,eol:▸
set linebreak

nmap <c-s-p> :call <SID>SynStack()<cr>
function! <SID>SynStack()
        if !exists('*synstack')
                return
        endif
        echo map(synstack(line('.'), col('.')),'synIDattr(v:val,"name")')
endfunc

let g:deoplete#enable_at_startup = 1
let g:deoplete#enable_smart_case = 1

let g:deoplete#enable_at_startup = 1
let g:deoplete#enable_smart_case = 1
