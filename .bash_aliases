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
alias nps='npm start'
alias npi='npm install'
alias npl='npm ls --depth 0'
