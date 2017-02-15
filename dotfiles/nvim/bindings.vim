let mapleader   = ','

inoremap    <leader><leader>    <c-o>
inoremap    <up>            	<nop>
inoremap    <down>          	<nop>
inoremap    <left>          	<nop>
inoremap    <right>     		<nop>
nnoremap    B                   ^
nnoremap    E                   $
nnoremap    ^           		<nop>
nnoremap    $           		<nop>
nnoremap    <left>          	<nop>
nnoremap    <right>     		<nop>
nnoremap    <up>            	<nop>
nnoremap    <down>          	<nop>
nnoremap    <leader><space> 	:nohlsearch<cr>
nnoremap    <leader>q       	:q<cr>
nnoremap    <leader>qf      	:q!<cr>
nnoremap    <leader>w       	:w
nnoremap    <leader>ww      	:w<cr>
nnoremap    <leader>wf      	:w!
nnoremap    <leader>wa          :wall
nnoremap    <leader>e       	:e
nnoremap    <leader>ee      	:e<cr>
nnoremap    <leader>ef      	:e!
nnoremap    <leader>h           h
nnoremap    <leader>l           l
nnoremap    <leader>j           gj
nnoremap    <leader>k           gk
nnoremap    h           		<nop>
nnoremap    l           		<nop>
nnoremap    j           		<nop>
nnoremap    k           		<nop>
nnoremap    <leader>s       	:s /
nnoremap    <leader>sa      	:%s /
nnoremap    <leader>s<space>    :%s /\s\+$//e<cr>
nnoremap    <leader>b       	:ls<cr>:buffer<space>
nnoremap    <F5>            	:grep <cr><c-w> *<cr>
nnoremap    <leader>ez      	:vsp $ZDOTDIR/.zshrc<cr>
nnoremap    <leader>eza     	:vsp $ZDOTDIR/zsh_aliases<cr>
nnoremap    <leader>eze     	:vsp $HOME/.zshenv<cr>
nnoremap    <leader>ezv     	:vsp $ZDOTDIR/zsh_var<cr>
nnoremap    <leader>enr     	:vsp $XDG_CONFIG_HOME/nvim/init.vim<cr>
nnoremap    <leader>enb     	:vsp $XDG_CONFIG_HOME/nvim/bindings.vim<cr>
nnoremap    <leader>enbs    	:vsp $XDG_CONFIG_HOME/nvim/backstage.vim<cr>
nnoremap    <leader>enp     	:vsp $XDG_CONFIG_HOME/nvim/plugins.vim<cr>
nnoremap    <leader>ls      	:set list!<cr>
nnoremap    <leader>d       	:e .<cr>
inoremap    <expr><tab>         pumvisible() ? "\<c-n>" : "\<tab>"
