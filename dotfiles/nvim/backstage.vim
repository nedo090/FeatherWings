set clipboard+=unnamedplus
set hidden
set nocompatible
set showmatch
set incsearch
set hlsearch
set cursorline
set linebreak
set listchars=tab:¬\ ,eol:▸
set foldmethod=marker

let g:deoplete#enable_at_startup = 1
let g:deoplete#enable_smart_case = 1

let g:UltiSnipsEditSplit = "vertical"
let g:UltiSnipsExpandTrigger = '<leader>ue'
let g:UltiSnipsJumpForwardTrigger = '<leader>uf'
let g:UltiSnipsJumpBackwardTrigger = '<leader>ub'

let g:neomake_error_sign  = {
                        \ 'text': '',
                        \ 'texthl': 'NeomakeErrorSign',
                        \ }
let g:neomake_warning_sign  = {
                        \ 'text': '',
                        \ 'texthl': 'NeomakeWarningSign',
                        \ }

let g:neomake_cpp_clang_maker = {
                        \ 'args': ['-std=c++11'],
                        \ }

let g:neomake_cpp_gcc_maker = {
                        \ 'args': ['-std=c++11'],
                        \ }

if has("autocmd")
        augroup setup
                au!
                autocmd! filetype cpp,tex,vim :call Programming()
                autocmd! tabnew,tabclosed,bufread,bufdelete,bufadd,bufnewfile *
                                        \ :call ChangeTabBindings()
                autocmd! bufwritepost * :Neomake
        augroup END
endif
