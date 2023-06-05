#include "lecteur_modele.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlField>

LecteurModele::LecteurModele()
{
    _dataBase = new Database;
}

void LecteurModele::avancer()
{
    _posImageCourante = _posImageCourante == nbImages()-1 ? 0 : _posImageCourante +1;
}

void LecteurModele::reculer()
{
    _posImageCourante = _posImageCourante == 0 ? nbImages()-1 : _posImageCourante -1;
}

void LecteurModele::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // charge le diaporama courant
    }

}

unsigned int LecteurModele::positionDuMax(unsigned int deb, unsigned int fin)
{
    unsigned int posMax = deb;
    for (unsigned int i=deb+1; i <= fin; i++)
    {
        if (_diaporama[i]->getRang() > _diaporama[posMax]->getRang())
        {
            posMax = i;
        }
    }
    return posMax;
}

void LecteurModele::triDiaporama()
{
    unsigned int pos;
    Image* valAux;
    for (unsigned int i=nbImages()-1; i>0; i--)
    {
        pos = (*this).positionDuMax(0,i);
        valAux = _diaporama[pos];
        _diaporama[pos] = _diaporama[i];
        _diaporama[i] = valAux;
    }
}

QStringList LecteurModele::getNomDiapo()
{
    QSqlQuery query;
    QStringList nomsDiapo;
    query.exec("Select * From Diaporamas");
    for (int i=0; query.next(); i++)
    {
        qDebug() << query.value(1).toString();
        nomsDiapo.append(query.value(1).toString());
    }
    return nomsDiapo;
}

void LecteurModele::chargerDiaporama()
{
    Image* imageACharger;
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    QSqlQuery query;
    query.prepare("SELECT DDD.rang, Ds.titrePhoto, Ds.uriPhoto, F.nomFamille FROM DiaposDansDiaporama DDD JOIN Diaporamas Dps ON DDD.idDiaporama = Dps.idDiaporama JOIN Diapos Ds ON DDD.idDiapo = Ds.idphoto JOIN Familles F ON Ds.idFam = F.idFamille WHERE DDD.idDiaporama = :id");
    query.bindValue(":id", _numDiaporamaCourant);
    query.exec();
    for (int i = 0; query.next(); i++) {
        imageACharger = new Image(query.value(0).toInt(),
                                  query.value(3).toString().toStdString(),
                                  query.value(1).toString().toStdString(),
                                  ":"+query.value(2).toString().toStdString());
        _diaporama.push_back(imageACharger);
    }

     // trie du contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
    (*this).triDiaporama();

     _posImageCourante = 0;
}

void LecteurModele::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back(); /* Removes the last element in the vector,
                                      effectively reducing the container size by one.
                                      AND deletes the removed element */
        }
     _posImageCourante = 0;
    }
    //cout << nbImages() << " images restantes dans le diaporama." << endl;

}

unsigned int LecteurModele::nbImages()
{
    return _diaporama.size();
}

Image *LecteurModele::imageCourante()
{
    return _diaporama[_posImageCourante];
}

unsigned int LecteurModele::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}
