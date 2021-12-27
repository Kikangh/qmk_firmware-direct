#TODO : Vérifier si la ligne ci-dessous est toujours nécessaire.
# BOOTLOADER = atmel-dfu  #nécessaire pour que le soft RESET fonctionne. Plus nécessaire d’ouvrir le clavier pour mettre à jour le firmware
VPATH += keyboards/gboards
TAP_DANCE_ENABLE = no
COMBO_ENABLE = yes
BOOTLOADER = atmel-dfu