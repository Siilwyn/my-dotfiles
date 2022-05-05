set fish_greeting

# Set environment variables
set -x NODE_REPL_HISTORY ~/.cache/.node-repl
set -x NPM_CONFIG_CACHE ~/.cache/npm
set -x NPM_CONFIG_USERCONFIG ~/.config/npmrc

# Disable silly update notifications
set -x NPM_CONFIG_UPDATE_NOTIFIER false
set -x GH_NO_UPDATE_NOTIFIER true

set -x CARGO_HOME ~/.cache/cargo
set -x RUSTUP_HOME ~/.cache/rustup
set -x VOLTA_HOME ~/.cache/volta

set -x EDITOR vi
set -x LESSHISTFILE ~/.config/.lesshst
set -x PATH $VOLTA_HOME/bin $CARGO_HOME/bin $RUSTUP_HOME/toolchains/*/bin /opt/homebrew/bin /opt/homebrew/opt $PATH

# Manage my dotfiles
alias mydotfiles='git --git-dir=$HOME/.my-dotfiles/ --work-tree=$HOME'

# General
alias doh='commandline -i "sudo $history[1]"; history delete --exact --case-sensitive doh'
alias vi='nvim'
alias ll='ls -hAl'
alias listapps='brew leaves; volta list; cargo install --list'

# npm
alias nps='npm start'
alias npi='npm install'
alias npt='npm test'
alias npr='npm run'
