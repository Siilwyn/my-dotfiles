set fish_greeting

# Set environment variables
set -x NODE_REPL_HISTORY ~/.cache/.node-repl
set -x NPM_CONFIG_CACHE ~/.cache/npm
set -x NPM_CONFIG_USERCONFIG ~/.config/npmrc
set -x NPM_CONFIG_UPDATE_NOTIFIER false

set -x CARGO_HOME ~/.cache/cargo
set -x RUSTUP_HOME ~/.cache/rustup
set -x VOLTA_HOME ~/.cache/volta

set -x EDITOR vi
set -x LESSHISTFILE ~/.config/.lesshst
set -x PATH $VOLTA_HOME/bin $CARGO_HOME/bin $PATH

# Manage my dotfiles
alias mydotfiles='git --git-dir=$HOME/.my-dotfiles/ --work-tree=$HOME'

# General
alias doh='commandline -i "sudo $history[1]"; history delete --exact --case-sensitive doh'
alias ll='ls -l --almost-all --human-readable'
alias listapps='dnf list --installed | grep @@commandline; flatpak list --app; volta list; cargo install --list'
alias vi='nvim'

# npm
alias nps='npm start'
alias npi='npm install'
alias npt='npm test'
alias npr='npm run'
