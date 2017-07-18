//
//  Copyright (c) 2012 Artyom Beilis (Tonkikh)
//
//  Distributed under the Boost Software License, Version 1.0. (See
//  accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef BOOST_NOWIDE_NO_EXCEPTIONS_SUPPORT_H_INCLUDED
#define BOOST_NOWIDE_NO_EXCEPTIONS_SUPPORT_H_INCLUDED

#if !defined(_HAS_EXCEPTIONS) && !(__cpp_exceptions)
#   define BOOST_NO_EXCEPTIONS 1
#endif

#if !defined(BOOST_NO_EXCEPTIONS)
#    define BOOST_TRY { try
#    define BOOST_CATCH(x) catch(x)
#    define BOOST_RETHROW throw;
#    define BOOST_CATCH_END }
#else
#    define BOOST_TRY { if (true)
#    define BOOST_CATCH(x) if (false)
#    define BOOST_RETHROW
#    define BOOST_CATCH_END }
#endif

#endif
  ///
  // vim: tabstop=4 expandtab shiftwidth=4 softtabstop=4