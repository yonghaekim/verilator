set wrap
set textwidth=79
set formatoptions=tcqrn1
set tabstop=2
set shiftwidth=2
set softtabstop=2
set expandtab
set noshiftround
set number
set nowrap
set scrolloff=3
set backspace=indent,eol,start

set laststatus=2
set showmode
set showcmd

set hlsearch
hi Search ctermbg=LightYellow
hi Search ctermfg=Red

set tags=/home/yonghae/workspace/gem5/src/tags
autocmd BufEnter *.sm :setlocal filetype=cpp
autocmd BufEnter *.td :setlocal filetype=cpp
autocmd BufEnter *.isa :setlocal filetype=cpp
autocmd BufEnter *.scala :setlocal filetype=cpp

set textwidth=0 wrapmargin=0
