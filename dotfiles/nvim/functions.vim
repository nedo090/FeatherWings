function! SynStack()
        if !exists('*synstack')
                return
        endif
        echo map(synstack(line('.'), col('.')),'synIDattr(v:val,"name")')
endfunc

function! CompileTex()
    :silent !pdflatex %
    :silent !pdflatex %
endfunc

function! CompileCPP()
    :w
    :echo "\n"
    :echo "compiling...\n"
    :silent !g++ -v -std=c++11 -o $(echo % | tr -d .cpp) %
    :echo "\n"
    :echo "compiled"
endfunc

function! ChangeTabBindings()
    if tabpagenr('$') > 1
        nnoremap <tab> gt
        nnoremap <s-tab> gT
    elseif bufnr('$') > 1
        nnoremap <tab> :bn<cr>
        nnoremap <s-tab> :bp<cr>
    else
        nnoremap <tab> <nop>
        nnoremap <s-tab> <nop>
    endif
endfunc
