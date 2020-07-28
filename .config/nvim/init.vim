" Show line numbers
set number relativenumber

" Set line number color
highlight LineNr ctermfg=darkgrey

" Highlight all tabs and trailing whitespace characters
highlight ExtraWhitespace ctermbg=darkcyan
match ExtraWhitespace /\s\+$\|\t/

" Keep undo history between sessions
set undofile

" Handle plugins with vim-plug
call plug#begin('~/.config/nvim/plugged')
Plug 'editorconfig/editorconfig-vim'
call plug#end()
