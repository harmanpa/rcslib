/* 
The NIST RCS (Real-time Control Systems) 
 library is public domain software, however it is preferred
 that the following disclaimers be attached.

Software Copywrite/Warranty Disclaimer

   This software was developed at the National Institute of Standards and
Technology by employees of the Federal Government in the course of their
official duties. Pursuant to title 17 Section 105 of the United States
Code this software is not subject to copyright protection and is in the
public domain. NIST Real-Time Control System software is an experimental
system. NIST assumes no responsibility whatsoever for its use by other
parties, and makes no guarantees, expressed or implied, about its
quality, reliability, or any other characteristic. We would appreciate
acknowledgement if the software is used. This software can be
redistributed and/or modified freely provided that any derivative works
bear some notice that they are derived from it, and any modified
versions bear some notice that they have been modified.



*/ 

/*
*       New Java File starts here.
*       This file should be named PmRotationMatrix.java
*/


// Set Package Name
package rcs.posemath;

// Import all NML, CMS, and RCS classes and interfaces
import rcs.nml.NMLFormatConverter;

/*
*       Class definition for PmRotationMatrix
*       Automatically generated by RCS Java Diagnostics Tool.
*       on Wed Jan 07 10:53:45 EST 1998
*/
public class PmRotationMatrix
{
  public PmCartesian x = new PmCartesian();
  public PmCartesian y = new PmCartesian();
  public PmCartesian z = new PmCartesian();

  public void update(NMLFormatConverter nml_fc)
  {
      nml_fc.beginClass("PmRotationMatrix",null);
      nml_fc.beginClassVar("x");
      x.update(nml_fc);
      nml_fc.endClassVar("x");
      nml_fc.beginClassVar("y");
      y.update(nml_fc);
      nml_fc.endClassVar("y");
      nml_fc.beginClassVar("z");
      z.update(nml_fc);
      nml_fc.endClassVar("z");
      nml_fc.endClass("PmRotationMatrix",null);
  }

  public PmRotationMatrix(PmCartesian startx, PmCartesian starty, PmCartesian startz)
  {
    x = startx;
    y = starty;
    z = startz;
  }

  public PmRotationMatrix()
  {
  }

  public PmRotationMatrix(
                                double xx, double xy, double xz,
                                double yx, double yy, double yz,
                                double zx, double zy, double zz)
  {
    x = new PmCartesian(xx,xy,xz);
    y = new PmCartesian(yx,yy,yz);
    z = new PmCartesian(zx,zy,zz);
  }

  public String toString()
  {
    return " { \n\tx = "+x+",\n\ty ="+y+",\n\tz = "+z+"\n } ";
  }

  public PmRotationMatrix inv() throws PmException {
      PmRotationMatrix mi = new PmRotationMatrix();
      Posemath.pmMatInv(this, mi);
      return mi;
  }
  
  public PmRotationMatrix multiply(PmRotationMatrix other) throws PmException {
      PmRotationMatrix product = new PmRotationMatrix();
      Posemath.pmMatMatMult(this, other, product);
      return product;
  }
  
  public PmCartesian multiply(PmCartesian cart) throws PmException {
      PmCartesian out = new PmCartesian();
      Posemath.pmMatCartMult(this, cart, out);
      return out;
  }
  
}
