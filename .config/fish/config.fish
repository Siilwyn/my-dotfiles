# Manage my dotfiles
alias mydotfiles='git --git-dir=$HOME/.my-dotfiles/ --work-tree=$HOME'

# General
alias at='atom .'
alias doh='commandline -i "sudo $history[1]"; history --delete "$history[1]"'
alias ll='ls -l --almost-all --human-readable'

# List contents after moving to given directory
function cs
  cd $argv
  ls -A
end

# npm
alias nps='npm start'
alias npi='npm install'
alias npl='npm ls --depth 0'
