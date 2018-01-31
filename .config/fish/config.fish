set fish_greeting

# Set environment variables
set -x CARGO_HOME ~/.cache/cargo
set -x NODE_ENV development
set -x NODE_REPL_HISTORY ~/.cache/.node-repl
set -x NPM_CONFIG_CACHE ~/.cache/npm
set -x NPM_CONFIG_USERCONFIG ~/.config/npmrc
set -x RUSTUP_HOME ~/.cache/rustup

set -x PATH $PATH ~/.local/bin $CARGO_HOME/bin

# Manage my dotfiles
alias mydotfiles='git --git-dir=$HOME/.my-dotfiles/ --work-tree=$HOME'

# General
alias at='atom .'
alias doh='commandline -i "sudo $history[1]"; history delete --exact --case-sensitive "$history[1]"'
alias ll='ls -l --almost-all --human-readable'

# List contents after moving to given directory
function cs
  cd $argv
  ls -A
end

# npm
alias nps='npm start'
alias npi='npm install'
alias npt='npm test'
alias npl='npm ls --depth 0'
