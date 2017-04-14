" vim: foldmethod=marker: foldcolumn=2
let mapleader   = ','

"all modes {{{1
noremap     ;                       :
noremap     :                       ;
noremap     <up>                    <nop>
noremap     <down>                  <nop>
noremap     <left>                  <nop>
noremap     <right>                 <nop>
noremap         <ESC><ESC>              :w<cr>
"Insert mode {{{1
inoremap    <leader><leader>        <c-o>
inoremap    <c-o>                   <nop>
inoremap    <up>                    <nop>
inoremap    <down>                  <nop>
inoremap    <left>                  <nop>
inoremap    <right>                 <nop>
inoremap    <expr><tab>             pumvisible() ? "\<c-n>" : "\<tab>"
inoremap    <expr><leader><tab>     pumvisible() ? "\<c-p>" : "\<leader><tab>"
"Normal mode {{{1
nnoremap    <leader>?               :call SynStack()<cr>
nnoremap    k                       gk
nnoremap    j                       gj
nnoremap    h                       b
nnoremap    l                       w
nnoremap    -                       <nop>
nnoremap    +                       <nop>
nnoremap    b                       <nop>
nnoremap    <space>                 za
nnoremap    za                      <nop>
nnoremap    w                       <nop>
nnoremap    <leader><space>         :nohlsearch<cr>
nnoremap    <leader>s<space>        ma:%s/\s\+$//e<cr>:nohlsearch<cr>`a
nnoremap    .                       ma.`a
nnoremap    <leader>l               :set list!<cr>
nnoremap    <c-s-p>                 :call SynStack()<cr>
nnoremap    vv                      <s-v>
nnoremap    <leader>v               <c-v>
nnoremap    <s-v>                   <nop>
nnoremap    <c-v>                   <nop>
nnoremap    <leader>p               :CtrlPMixed<cr>
nnoremap    <leader>o               :NERDTreeToggle<cr>
"Tab control {{{2
nnoremap    <leader>t               :tabnew<cr>
nnoremap    <leader>tq              :tabclose<cr>
nnoremap    <leader>to              :tabonly<cr>

"Window control {{{2
nnoremap    wv                      :vsp<cr>
nnoremap    wve                     :vsp 
nnoremap    ws                      :sp<cr>
nnoremap    wse                     :sp 
nnoremap    wh                      <c-w>h
nnoremap    wl                      <c-w>l
nnoremap    wj                      <c-w>j
nnoremap    wk                      <c-w>k
nnoremap    ww                      <c-w>w
nnoremap    wr                      <c-w>r
nnoremap    wR                      <c-w>R
nnoremap    wx                      <c-w>x
nnoremap    wH                      <c-w>H
nnoremap    wL                      <c-w>L
nnoremap    wJ                      <c-w>J
nnoremap    wK                      <c-w>K
nnoremap    wT                      <c-w>T
nnoremap    w=                      <c-w>=
nnoremap    <c-w>h                  <nop> 
nnoremap    <c-w>l                  <nop> 
nnoremap    <c-w>j                  <nop> 
nnoremap    <c-w>k                  <nop> 
nnoremap    <c-w>w                  <nop> 
nnoremap    <c-w>r                  <nop> 
nnoremap    <c-w>R                  <nop> 
nnoremap    <c-w>x                  <nop> 
nnoremap    <c-w>H                  <nop> 
nnoremap    <c-w>L                  <nop> 
nnoremap    <c-w>J                  <nop> 
nnoremap    <c-w>K                  <nop> 
nnoremap    <c-w>T                  <nop> 

"Buffer control {{{2
nnoremap    bp                      :bp<cr>
nnoremap    bn                      :bn<cr>
nnoremap    bl                      :ls<cr>
nnoremap    b<tab>                  <c-^>
nnoremap    <c-^>                   <nop>

"Visual mode {{{1
vnoremap    i                       <s-i>
" }}}
