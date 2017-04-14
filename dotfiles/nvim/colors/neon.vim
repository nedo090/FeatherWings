set background=dark
highlight clear
if exists("syntax_on")
    syntax reset
endif

let g:colors_name   = "neon"
let g:airline_theme = "raven"

highlight normal                        ctermfg=white           ctermbg=none            cterm=none
highlight comment                       ctermfg=238             ctermbg=none            cterm=italic
highlight constant                      ctermfg=202             ctermbg=none            cterm=none
highlight operator                      ctermfg=214             ctermbg=none            cterm=none
highlight statement                     ctermfg=204             ctermbg=none            cterm=none


highlight cursorline                    ctermfg=none            ctermbg=darkgrey        cterm=underline
highlight cursorcolumn                  ctermfg=none            ctermbg=darkgrey        cterm=none
highlight pmenu                         ctermfg=none            ctermbg=none            cterm=none
highlight pmenusel                      ctermfg=81              ctermbg=none            cterm=underline,bold
highlight visual                        ctermfg=none            ctermbg=darkgrey        cterm=bold
highlight search                        ctermfg=none            ctermbg=darkgrey        cterm=bold
highlight folded                        ctermfg=darkgrey        ctermbg=none            cterm=italic,bold
highlight foldcolumn                    ctermfg=grey            ctermbg=none            cterm=none
highlight vimhighlight                  ctermfg=215             ctermbg=none            cterm=none
highlight tablinesel                    cterm=none              ctermbg=grey            ctermfg=black
highlight tablinefill                   cterm=none              ctermbg=none            ctermfg=none
highlight tabline                       cterm=none              ctermbg=none            ctermfg=none
highlight cUserCont                     ctermfg=208             ctermbg=none            cterm=none
highlight TODO                          ctermfg=226             ctermbg=none            cterm=bold,underline
highlight error	                        ctermfg=1		ctermbg=none 	        cterm=none
highlight errormsg                      ctermfg=1               ctermbg=none            cterm=none
highlight colorcolumn                   ctermfg=none		ctermbg=244	        cterm=bold
highlight neomakeerrordefault           ctermfg=160             ctermbg=none            cterm=bold,underline
highlight neomakeerrorsigndefault       ctermfg=160             ctermbg=none            cterm=none
highlight neomakewarningsigndefault     ctermfg=220             ctermbg=none            cterm=none
highlight neomakewarningdefault         ctermfg=220             ctermbg=none            cterm=underline

highlight link                          cUserLabel              cUserCont
