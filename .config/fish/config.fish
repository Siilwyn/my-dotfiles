set fish_greeting

set -x XDG_DATA_HOME ~/.local/share
set -x XDG_CONFIG_HOME ~/.config

# XDG list of shame
set -x RUSTUP_HOME ~/.cache/rustup
set -x CARGO_HOME ~/.cache/cargo
set -x NODE_REPL_HISTORY ~/.cache/.node-repl
set -x NPM_CONFIG_CACHE ~/.cache/npm
set -x NPM_CONFIG_USERCONFIG ~/.config/npmrc
set -x LESSHISTFILE ~/.config/.lesshst
set -x GOPATH $XDG_DATA_HOME/go

# Disable silly update notifications
set -x NPM_CONFIG_UPDATE_NOTIFIER false
set -x GH_NO_UPDATE_NOTIFIER true

set -x EDITOR hx
set -x PATH $CARGO_HOME/bin $RUSTUP_HOME/toolchains/*/bin $GOPATH/bin $PATH
mise activate fish --shims | source
# Manage my dotfiles
alias mydotfiles='git --git-dir=$HOME/.my-dotfiles/ --work-tree=$HOME'

# General
alias doh='commandline -i "sudo $history[1]"; history delete --exact --case-sensitive doh'
alias ll='ls -l --almost-all --human-readable'
alias listapps='dnf list --installed | grep @@commandline; flatpak list --app; mise list --global; cargo install --list'

# npm
alias nps='npm start'
alias npi='npm install'
alias npt='npm test'
alias npr='npm run'
