if [[ -n "$BASH_VERSION" && -x "$HOME/.local/bin/zsh" ]]; then
    export SHELL="$HOME/.local/bin/zsh"
    exec "$HOME/.local/bin/zsh" -l
fi
