# Custom user defined aliases

# Manage my dotfiles
alias mydotfiles='git --git-dir=$HOME/.my-dotfiles/ --work-tree=$HOME'

# General
alias cl='clear'
alias doh='sudo $(history -p !!)'
alias prune-branches='git branch --merged | grep -v "\*" | xargs -n 1 git branch -d'
alias ll='ls -l --almost-all --human-readable'
alias naut='nautilus .'

# npm
alias ns='npm start'
alias ni='npm install'
