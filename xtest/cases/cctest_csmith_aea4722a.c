// SPDX-License-Identifier: MIT
// cctest_csmith_aea4722a.c --- cctest case csmith_aea4722a (csmith seed 2930012714)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2fa89ed1 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 2930012714 -o /tmp/csmith_gen_p7t6enw0/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   uint32_t  f1;
};

union U1 {
   int16_t  f0;
};

union U2 {
   const int64_t  f0;
   int32_t  f1;
   int16_t  f2;
};

union U3 {
   uint32_t  f0;
   int32_t  f1;
   uint16_t  f2;
   const uint32_t  f3;
};


static int32_t g_2 = (-9L);
static int64_t g_40 = 0x45BEAC3EFC167656LL;
static int16_t g_61 = 0L;
static uint16_t g_62 = 7UL;
static uint32_t g_71 = 4294967295UL;
static uint32_t g_75[3][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
static uint8_t g_84 = 0xC8L;
static uint8_t g_94[5] = {252UL,252UL,252UL,252UL,252UL};
static struct S0 g_95 = {0x2F289490L,0xA58E0DE0L};
static uint32_t g_103 = 18446744073709551614UL;
static union U3 g_146 = {4294967286UL};
static uint16_t g_216 = 1UL;
static int32_t g_218 = (-5L);
static int8_t g_243[2][5] = {{0xC1L,0L,0xC1L,0L,0xC1L},{0x95L,0x95L,0x95L,0x95L,0x95L}};
static int8_t g_246 = (-1L);
static struct S0 g_263 = {1UL,0xF404DFAAL};
static int32_t g_280 = (-9L);
static union U2 g_282 = {1L};
static int32_t g_336 = 0xFE583E03L;
static union U1 g_346 = {0x318DL};



static uint8_t  func_1(void);
static int16_t  func_10(uint32_t  p_11, int8_t  p_12, uint32_t  p_13);
static union U2  func_18(uint32_t  p_19, uint32_t  p_20, const struct S0  p_21);
static uint8_t  func_28(int64_t  p_29);




static uint8_t  func_1(void)
{ 
    uint16_t l_9 = 1UL;
    int32_t l_222 = (-5L);
    int16_t l_254 = 0L;
    uint64_t l_279 = 18446744073709551615UL;
    const union U1 l_291 = {0x0C94L};
    struct S0 l_297 = {18446744073709551615UL,0x213B6CCCL};
    uint16_t l_301 = 65535UL;
    for (g_2 = 0; (g_2 >= (-19)); g_2--)
    { 
        uint16_t l_86[3];
        const struct S0 l_87 = {1UL,0x31AC0EF1L};
        uint32_t l_106 = 0UL;
        int32_t l_219 = 0x0F3CD203L;
        union U3 l_225 = {4294967295UL};
        int i;
        for (i = 0; i < 3; i++)
            l_86[i] = 2UL;
        l_219 &= ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(l_9, 3)), 1)) < func_10((((safe_sub_func_uint32_t_u_u(0x7A7525D2L, (safe_mul_func_uint16_t_u_u((func_18((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(0x874DL, ((safe_mul_func_int16_t_s_s((func_28(g_2) || 255UL), g_61)) & g_61))), g_61)), l_86[0], l_87) , g_95.f0), g_2)))) & 0x999AA20CL) , g_75[0][0]), l_106, g_95.f0));
        if ((safe_mul_func_uint16_t_u_u(((((l_219 |= l_222) <= (l_9 != (4294967290UL >= 1UL))) == (-8L)) < 0x8D22D332A9F6D975LL), 0xB212L)))
        { 
            uint64_t l_242 = 0x2381DE4584C0B326LL;
            g_243[0][0] = (g_146.f1 = (l_225 , (safe_lshift_func_uint16_t_u_s((((+(255UL && (+((safe_rshift_func_int8_t_s_u(((safe_mod_func_int64_t_s_s((g_146.f1 < (safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(2UL, g_94[1])) && g_103), 0x4AC4L)) < g_75[0][2]) , g_61), 0xFDD9FC75L)), g_216))), g_146.f0)) != l_9), l_86[0])) || l_242)))) && 0x9734L) ^ g_95.f0), 14))));
        }
        else
        { 
            return g_94[3];
        }
    }
    if ((safe_rshift_func_int8_t_s_s(g_243[0][3], 6)))
    { 
        uint8_t l_247 = 0x95L;
        l_247--;
        return g_95.f0;
    }
    else
    { 
        uint8_t l_255 = 0xD3L;
        int32_t l_281 = 0x3132CC53L;
        struct S0 l_303 = {18446744073709551608UL,4294967287UL};
        for (l_9 = 0; (l_9 > 3); l_9 = safe_add_func_int8_t_s_s(l_9, 9))
        { 
            uint32_t l_258 = 1UL;
            for (g_95.f0 = 0; (g_95.f0 >= 38); g_95.f0 = safe_add_func_uint64_t_u_u(g_95.f0, 4))
            { 
                l_255--;
                l_258--;
            }
            for (g_95.f0 = 24; (g_95.f0 > 18); g_95.f0 = safe_sub_func_int8_t_s_s(g_95.f0, 9))
            { 
                g_263 = g_95;
            }
        }
        l_281 ^= (((safe_sub_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((!(l_254 > (g_280 &= (g_61 ^= ((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(g_103, (safe_div_func_uint16_t_u_u((0x40A8872AL >= (l_254 , g_40)), (-1L))))) >= 1UL), l_279)) , l_255))))) > 0UL), l_255)), l_279)), g_75[2][0])) , g_95.f1), l_9)) , l_222) != g_95.f1);
        if ((g_282 , (-5L)))
        { 
            uint16_t l_294[2][5][3] = {{{0x3A74L,0x3A74L,65535UL},{5UL,65535UL,0xE7F7L},{0xE7F7L,65535UL,5UL},{65535UL,0x3A74L,0x3A74L},{65534UL,0xE7F7L,5UL}},{{65526UL,0x7E94L,0xE7F7L},{65526UL,65535UL,0x3A74L},{0x6C36L,0x36BCL,0x6C36L},{0x3A74L,65535UL,65534UL},{0x586DL,5UL,65534UL}}};
            int64_t l_300[3][2][2] = {{{0xB6C887C8462C5719LL,0x020795C423A20F63LL},{0x020795C423A20F63LL,0xB6C887C8462C5719LL}},{{0x020795C423A20F63LL,0x020795C423A20F63LL},{0xB6C887C8462C5719LL,0x020795C423A20F63LL}},{{0x020795C423A20F63LL,0xB6C887C8462C5719LL},{0x020795C423A20F63LL,0x020795C423A20F63LL}}};
            int i, j, k;
            if (((g_71 &= (((safe_div_func_uint8_t_u_u((((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((g_146 , (0UL >= (safe_sub_func_int64_t_s_s((l_291 , (safe_rshift_func_uint8_t_u_u(g_146.f3, 3))), l_255)))), l_222)), g_282.f2)) ^ g_146.f2) == l_255), l_281)) ^ l_255) < g_84)) < g_263.f1))
            { 
                l_281 &= g_218;
                ++l_294[1][1][0];
                l_222 = l_294[1][1][0];
            }
            else
            { 
                int16_t l_302[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_302[i] = 0x70FDL;
                l_297 = g_263;
                g_280 = (g_263.f0 , (l_302[1] = (safe_div_func_uint16_t_u_u((g_146.f2 = ((g_61 = 0xF34EL) == ((((l_255 <= (g_246 = (l_281 | l_300[2][1][0]))) & l_300[0][1][0]) & l_300[2][1][0]) | 0UL))), l_301))));
                l_303 = g_95;
            }
            return g_95.f0;
        }
        else
        { 
            int16_t l_310 = 0x3669L;
            int32_t l_311 = 1L;
            if ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((g_282.f1 <= ((l_303.f0 & (func_18(g_243[0][2], (safe_mul_func_uint8_t_u_u((g_62 > g_216), l_222)), g_95) , 0xB8L)) || (-1L))) >= l_281), g_75[0][2])), l_303.f1)))
            { 
                uint64_t l_312 = 0xE6E98DB74E30DE83LL;
                g_146.f1 = (l_311 = (l_310 == 0x6F9F128CL));
                g_2 = l_312;
            }
            else
            { 
                uint32_t l_326 = 0x0AE59654L;
                int32_t l_327 = 6L;
                l_327 = (safe_mod_func_uint32_t_u_u((((safe_sub_func_int64_t_s_s((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((((safe_add_func_uint8_t_u_u(l_297.f1, (safe_mul_func_int16_t_s_s(((0xDAL < ((g_263.f1 != ((246UL <= g_103) & 0UL)) > l_255)) && g_95.f0), g_263.f1)))) == 0xA3L) > g_282.f0))), 255UL)), 0xFEL)), 0x47660EA5D856827ALL)) , g_146.f0) | l_326), l_301));
                l_327 = (safe_mod_func_int8_t_s_s((l_222 &= (g_216 & (l_297 , (g_243[0][0] = (safe_mul_func_uint16_t_u_u(g_94[2], (safe_sub_func_uint32_t_u_u((g_71 = (safe_lshift_func_int8_t_s_s((((g_336 = (l_311 >= g_71)) | 0x45FE1D2F55BAFC07LL) > g_84), 3))), 0x79EB5DBAL)))))))), 7UL));
                return l_311;
            }
        }
    }
    for (g_280 = 7; (g_280 != 11); g_280 = safe_add_func_uint8_t_u_u(g_280, 1))
    { 
        uint32_t l_341 = 0x0DDCE62AL;
        int32_t l_349 = 0x8418D95EL;
        int32_t l_350 = (-10L);
        int32_t l_351 = 0x4B1F9F82L;
        for (g_218 = (-26); (g_218 == 15); g_218++)
        { 
            l_341++;
            g_282.f1 = (safe_div_func_uint16_t_u_u(((((g_95.f0 , (g_75[1][2] != (g_94[1] ^ (g_346 , 0xC0L)))) != l_301) ^ g_84) != g_103), l_341));
            for (g_146.f1 = 0; (g_146.f1 > 15); g_146.f1 = safe_add_func_int8_t_s_s(g_146.f1, 8))
            { 
                uint8_t l_352 = 255UL;
                l_352--;
            }
        }
    }
    return g_216;
}



static int16_t  func_10(uint32_t  p_11, int8_t  p_12, uint32_t  p_13)
{ 
    uint32_t l_115[1];
    int32_t l_177 = 1L;
    int32_t l_178 = 0x7BDA2250L;
    const uint32_t l_199 = 0x694B4B0CL;
    int32_t l_209 = 0x17F3F7D6L;
    const struct S0 l_217 = {1UL,0x07840EC1L};
    int i;
    for (i = 0; i < 1; i++)
        l_115[i] = 0xE41F4A39L;
    for (p_11 = 0; (p_11 == 19); p_11 = safe_add_func_uint8_t_u_u(p_11, 4))
    { 
        int32_t l_118 = 0xDA5B0066L;
        if (g_62)
        { 
            uint32_t l_116 = 0UL;
            int32_t l_117 = 0xEF314FBCL;
            l_117 = ((+p_12) || (safe_mul_func_int16_t_s_s(((p_12 < p_11) == (safe_mod_func_int32_t_s_s(((((((((safe_unary_minus_func_int32_t_s(((l_115[0] = (1UL && g_2)) < 6UL))) & 0xA91FL) <= 0xC7L) & g_75[1][1]) , g_84) || l_116) == 6L) >= 0x85L), g_75[0][2]))), p_13)));
            l_118 = p_13;
        }
        else
        { 
            uint16_t l_119 = 0UL;
            l_119++;
        }
    }
    for (g_84 = 0; (g_84 < 7); g_84 = safe_add_func_int16_t_s_s(g_84, 7))
    { 
        const int64_t l_124[3] = {0x5ABB530338E40FFFLL,0x5ABB530338E40FFFLL,0x5ABB530338E40FFFLL};
        const struct S0 l_162 = {18446744073709551613UL,0UL};
        int32_t l_166 = 0x2FDDFC4CL;
        int i;
        if (((l_124[0] & (g_71 > ((((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u((g_95.f1 = 4294967295UL), (~((((safe_lshift_func_int8_t_s_u(((g_40 < l_115[0]) <= p_11), 0)) , l_115[0]) >= p_11) , g_94[1])))), l_115[0])) && 1UL), 0xF8L)), l_115[0])) , g_75[2][2]) > g_95.f0) && g_75[0][2]))) ^ (-10L)))
        { 
            int64_t l_147 = 0x86D4A0BDBF62E6A6LL;
            for (p_12 = 10; (p_12 != 16); p_12++)
            { 
                uint8_t l_148 = 0xF5L;
                int32_t l_161 = 0x25C912EAL;
                l_147 = ((g_94[1] = (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(65528UL, (g_61 ^= ((p_13 < (safe_mul_func_uint8_t_u_u((g_146 , ((l_124[0] != 0xE4L) == p_13)), 0L))) == g_71)))), p_12))) <= g_146.f2);
                if (l_148)
                    continue;
                l_161 &= ((safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((p_13 <= ((p_13 || ((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(255UL, p_11)) > g_61), g_146.f2)) && l_124[0])) == g_95.f1)), (-6L))), 7L)), p_11)) == g_94[1]);
            }
            if (l_147)
                break;
        }
        else
        { 
            struct S0 l_163 = {0x012404B1L,0x4155BC6DL};
            l_163 = l_162;
        }
        for (g_40 = 0; (g_40 >= 0); g_40 -= 1)
        { 
            const union U2 l_170 = {-7L};
            struct S0 l_183[1] = {{18446744073709551615UL,0x96E21E60L}};
            int i, j;
            if (((safe_rshift_func_int16_t_s_s((0x39L || 8L), 1)) < g_75[g_40][g_40]))
            { 
                int32_t l_179 = (-1L);
                int i, j;
                l_166 &= 0x78AC6A97L;
                l_179 = (!((((l_178 &= ((((safe_add_func_uint8_t_u_u((l_170 , (safe_lshift_func_int16_t_s_s(g_75[g_40][(g_40 + 2)], (safe_div_func_int32_t_s_s((((safe_mod_func_int16_t_s_s(g_146.f3, 0xFDB4L)) ^ 0xE9FAL) & g_146.f2), 0x22C6A011L))))), 0L)) || (-1L)) >= p_12) || l_177)) > p_13) == 3L) , 0xA43AFDC6L));
                if (l_124[0])
                    break;
            }
            else
            { 
                uint16_t l_180 = 0x7B03L;
                ++l_180;
                l_183[0] = g_95;
            }
            return g_62;
        }
        if ((0xDAE4FB37L > g_94[3]))
        { 
            int32_t l_190 = 0x2668A2AEL;
            l_178 = (l_162 , (safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((g_94[4] = 0x8BL), 0x3BL)), (g_95.f0 ^ 0x775F8867L))), 0L)));
            return l_190;
        }
        else
        { 
            int64_t l_195[5];
            int32_t l_198 = 0x624CAB1FL;
            int i;
            for (i = 0; i < 5; i++)
                l_195[i] = 0x552DC662D5AFF6A5LL;
            g_146.f1 = (safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((((l_166 = l_195[0]) > g_146.f1) < ((l_198 ^= (l_178 = ((((g_146.f2 , (((safe_add_func_uint16_t_u_u((l_195[0] | g_103), 0xF7B5L)) && 8UL) >= l_178)) , l_195[0]) , p_13) , 7UL))) > 1L)) > 0UL) , g_2), g_75[1][2])), l_162.f0));
            l_178 = l_199;
            l_209 = (safe_mul_func_int8_t_s_s(((l_178 = g_61) , (l_115[0] > ((g_95.f1 >= ((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((l_198 |= (safe_unary_minus_func_int32_t_s((g_94[0] , 0x5B72AD15L)))), l_195[0])), 8)) <= 0x6F27L)) < l_195[0]))), p_11));
        }
    }
    g_218 &= (((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(0x3B4EL, 13)), l_178)) , (safe_sub_func_uint64_t_u_u((func_18(g_146.f0, (((g_216 = p_13) | g_94[1]) ^ l_177), l_217) , p_12), p_11))) || 0UL);
    return p_11;
}



static union U2  func_18(uint32_t  p_19, uint32_t  p_20, const struct S0  p_21)
{ 
    struct S0 l_96 = {18446744073709551615UL,0xB5F75703L};
    int32_t l_104[3][2] = {{0x30F0864FL,0x30F0864FL},{0x30F0864FL,0x30F0864FL},{0x30F0864FL,0x30F0864FL}};
    union U2 l_105 = {0L};
    int i, j;
    for (g_62 = 0; (g_62 >= 57); g_62 = safe_add_func_int16_t_s_s(g_62, 1))
    { 
        for (p_19 = 0; (p_19 <= 2); p_19 += 1)
        { 
            g_94[1] = (safe_lshift_func_uint8_t_u_u(0xE6L, (safe_add_func_uint32_t_u_u(0xC22C9C81L, 0x75F92796L))));
        }
    }
    l_96 = g_95;
    l_104[1][0] &= ((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(l_96.f0, 0)), p_21.f1)), (g_103 = 0x5721BA6C3C0C8864LL))) >= g_40);
    return l_105;
}



static uint8_t  func_28(int64_t  p_29)
{ 
    uint32_t l_34 = 0x016488A9L;
    const uint16_t l_39 = 65526UL;
    int32_t l_41 = 0xED423CB8L;
    int32_t l_60[4][4][2] = {{{1L,(-8L)},{0x171B3FE7L,(-8L)},{1L,2L},{1L,(-8L)}},{{0x171B3FE7L,(-8L)},{1L,2L},{1L,(-8L)},{0x171B3FE7L,(-8L)}},{{1L,2L},{1L,(-8L)},{0x171B3FE7L,(-8L)},{1L,2L}},{{1L,(-8L)},{0x171B3FE7L,(-8L)},{1L,2L},{1L,(-8L)}}};
    int8_t l_74[2][4];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_74[i][j] = 0x8AL;
    }
    l_41 |= (safe_add_func_uint16_t_u_u((g_40 = ((safe_rshift_func_int8_t_s_u(l_34, 3)) , (safe_div_func_uint16_t_u_u(((p_29 >= (0UL & (safe_mul_func_int16_t_s_s((l_39 == l_34), 0x78E1L)))) >= g_2), g_2)))), g_2));
    if (g_2)
    { 
        uint16_t l_52[1];
        struct S0 l_53 = {18446744073709551612UL,0x883CE717L};
        int32_t l_55[3];
        int i;
        for (i = 0; i < 1; i++)
            l_52[i] = 65534UL;
        for (i = 0; i < 3; i++)
            l_55[i] = 0xAFD71021L;
        for (l_34 = 25; (l_34 >= 15); l_34--)
        { 
            struct S0 l_54 = {18446744073709551615UL,0xE478DFCEL};
            l_41 = (safe_mod_func_int8_t_s_s(0x43L, ((safe_div_func_int64_t_s_s(((((l_52[0] = (((safe_sub_func_uint64_t_u_u(1UL, (safe_div_func_int32_t_s_s((l_34 == l_34), 0xF3E4C996L)))) == g_2) > (-4L))) ^ g_40) < p_29) < p_29), g_40)) , l_52[0])));
            l_54 = l_53;
            l_55[2] = g_2;
        }
        l_41 ^= (g_71 = ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((g_62--) & (safe_lshift_func_int8_t_s_u(p_29, ((safe_add_func_uint16_t_u_u(g_40, ((p_29 & ((((safe_mod_func_int64_t_s_s(g_61, g_2)) & g_40) && p_29) ^ p_29)) >= g_61))) , g_2)))), g_40)), 7)) , p_29));
    }
    else
    { 
        int32_t l_72 = 0x61D90BCCL;
        int32_t l_73 = 0x42286E0DL;
        int8_t l_82 = 0x01L;
        int32_t l_85 = 0x056EFF52L;
        ++g_75[0][2];
        l_85 &= (safe_div_func_uint16_t_u_u(0x5D18L, ((l_73 = (g_84 = ((safe_mul_func_uint8_t_u_u(g_40, (((l_82 &= l_72) >= (~(((l_34 | 0x1529ABC0L) & 0x7A3BL) < (-6L)))) ^ l_73))) & 0xE9472023L))) | 6UL)));
    }
    return g_84;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_75[i][j], "g_75[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);

    }
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    transparent_crc(g_95.f1, "g_95.f1", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_146.f2, "g_146.f2", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_243[i][j], "g_243[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_263.f0, "g_263.f0", print_hash_value);
    transparent_crc(g_263.f1, "g_263.f1", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_282.f1, "g_282.f1", print_hash_value);
    transparent_crc(g_282.f2, "g_282.f2", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_346.f0, "g_346.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
