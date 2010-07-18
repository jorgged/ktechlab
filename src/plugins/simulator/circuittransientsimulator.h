/***************************************************************************
 *    KTechLab Circuit Simulator in Transient Analysis                     *
 *       Simulates circuit documents in time domain                        *
 *    Copyright (c) 2010 Zoltan Padrah                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/

#ifndef CIRCUITTRANSIENTSIMULATOR_H
#define CIRCUITTRANSIENTSIMULATOR_H

#include "interfaces/isimulator.h"

namespace KTechLab {

class CircuitTransientSimulator : public ISimulator
{
   virtual void start();

    /**
     * pause the simulation. if it's paused, do nothing
     */
    virtual void pause();

    /**
     * change the state of paused/running of the simulator
     */
    virtual void tooglePause();

    /**
     * @return the IElement associated with a component
     */
    virtual IElement *getModelForComponent(QVariantMap *component);
//
public slots:
    /**
     * Slot activate in case of the document structure has changed.
     * The simulator should rebuild its data structures.
     */
    virtual void documentStructureChanged();

    /**
     * Slot to be activated my the document in case of the parameters
     * of one model changes. (for example, a resistance).
     *
     * The optional parameter indicates the model for which the change
     * occured. It is 0 (NULL) in case of the component is not specified.
     */
    virtual void componentParameterChanged(QVariantMap * component = NULL);

};

}

#endif // CIRCUITTRANSIENTSIMULATOR_H