" function: SynStack {{{1
function! SynStack()
	if !exists('*synstack')
		return
	endif
	echo map(synstack(line('.'), col('.')),'synIDattr(v:val,"name")')
endfunc

" function: Compile {{{1
function! Compile(ft)
	:w
	:echo "\n"
	:echo 'compiling...'

	if a:ft == 'cpp'
		:silent !g++ -v -std=c++11 -o $(echo % | tr -d .cpp) %
	elseif a:ft == 'tex' || a:ft == 'plaintex'
		:silent !pdflatex %
		:silent !pdflatex %
	else
		:echo "there's nothing to compile!"
	endif
endfunc

" function: Programming {{{1
function! Programming()
	nnoremap <leader>c :call Compile(&ft)<cr>
	set ts=8 sts=8 sw=8 expandtab
	set cc=80 
	set cursorcolumn
	set relativenumber number
        set textwidth=80
endfunc

" function: Writing {{{1
function! Writing()

endfunc

" function: ChangeTabBindings {{{1
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
