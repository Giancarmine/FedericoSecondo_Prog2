/*------------------------------------------------------------------------------
Questa sub, permette di creare i tag di chiusura di un documento HTML.

Autore               : Martin De Luca
Data Ultima Modifica : 21 Settembre 2012 
==============================================================================*/

void ChiudiHTML (FILE *Pf)
{
    fprintf("<HR><BR>");
    fprintf("Pagina Web creata da Martin De Luca , l'uso prolungato pu� ");
    fprintf("provocare allucinazioni, diarrea,disturbi della psiche...");
    fprintf("consultare il medico di famiglia o un esorcista nei acsi pi� gravi");
    fprintf("L'autore non si assume la responsabilit� di ci� che potrebbe accadervi");
    fprintf("visitate questa pagina web a vostro rischio e pericolo!!!!");
    fprintf("</BODY>");
    fprintf("</HTML>");
    
    fclose(Pf);
}
