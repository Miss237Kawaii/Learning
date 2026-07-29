#choix du nombre pour gagner
NUMBER =30
while True:
#saisie de l'utilisateur
  valeur = int (input ("Entrer un nombre :"))
#condition
  if valeur == NUMBER :
    print("Félicitations ! Vous avez trouvé le nombre !")
    break
    #quitte la boucle
  elif valeur < NUMBER :
        print("Trouver un nombre plus grand")
  else :
        print("Trouver un nombre plus petit")

