" Show line numbers
set number

" Set line number color
highlight LineNr ctermfg=darkgrey

" Highlight all tabs and trailing whitespace characters
highlight ExtraWhitespace ctermbg=darkcyan
match ExtraWhitespace /\s\+$\|\t/
