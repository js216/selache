// SPDX-License-Identifier: MIT
// cctest_csmith_d5a13331.c --- cctest case csmith_d5a13331 (csmith seed 3584111409)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x166b9b78 */

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

// Options:   -s 3584111409 -o /tmp/csmith_gen_frt0qhdy/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   int8_t  f1;
   uint16_t  f2;
   uint16_t  f3;
   int16_t  f4;
   uint32_t  f5;
};

struct S1 {
   uint32_t  f0;
   const int32_t  f1;
   uint64_t  f2;
};

union U2 {
   uint32_t  f0;
   uint32_t  f1;
};


static uint16_t g_10 = 0x3888L;
static union U2 g_24 = {1UL};
static uint32_t g_45 = 18446744073709551615UL;
static uint32_t g_64[4] = {0x81FA89BFL,0x81FA89BFL,0x81FA89BFL,0x81FA89BFL};
static uint32_t g_70 = 18446744073709551610UL;
static struct S1 g_80 = {0xF8011003L,0xB8604885L,0xD16D00E5BD8EBBB0LL};
static struct S0 g_81[2][3] = {{{0xD091L,-6L,0x2F4DL,65527UL,0x491DL,0xAB3BAA24L},{0xD091L,-6L,0x2F4DL,65527UL,0x491DL,0xAB3BAA24L},{0xD091L,-6L,0x2F4DL,65527UL,0x491DL,0xAB3BAA24L}},{{0xD091L,-6L,0x2F4DL,65527UL,0x491DL,0xAB3BAA24L},{0xD091L,-6L,0x2F4DL,65527UL,0x491DL,0xAB3BAA24L},{0xD091L,-6L,0x2F4DL,65527UL,0x491DL,0xAB3BAA24L}}};
static uint32_t g_91 = 0x2AA9168FL;
static uint8_t g_118 = 0xDBL;
static uint16_t g_120 = 0xDDC6L;
static uint32_t g_126 = 4294967293UL;
static uint64_t g_127 = 0x604849EAACEA8682LL;
static uint8_t g_143 = 2UL;
static const uint8_t g_155 = 0UL;
static uint64_t g_160 = 18446744073709551615UL;
static int32_t g_183 = 0x890EE7B7L;
static int16_t g_186 = 0x87D7L;



static uint8_t  func_1(void);
static uint8_t  func_4(int64_t  p_5, uint32_t  p_6, struct S0  p_7);
static int64_t  func_8(int32_t  p_9);
static uint8_t  func_15(const uint8_t  p_16, union U2  p_17, uint8_t  p_18, uint8_t  p_19, union U2  p_20);




static uint8_t  func_1(void)
{ 
    int8_t l_116 = (-4L);
    int32_t l_117 = 0xF5EF5A3CL;
    g_186 ^= (safe_mul_func_uint8_t_u_u(func_4((g_118 = (l_117 = ((func_8(g_10) > l_116) > 0xBBF11896133E8A83LL))), g_80.f2, g_81[1][2]), l_116));
    for (g_160 = 27; (g_160 != 27); g_160 = safe_add_func_uint32_t_u_u(g_160, 3))
    { 
        uint8_t l_189 = 0x9CL;
        l_189--;
    }
    return g_10;
}



static uint8_t  func_4(int64_t  p_5, uint32_t  p_6, struct S0  p_7)
{ 
    uint16_t l_123 = 7UL;
    union U2 l_146 = {1UL};
    int32_t l_156[4][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
    const uint64_t l_179 = 5UL;
    int32_t l_180 = 7L;
    int i, j;
    g_120 |= (+(p_5 && 1UL));
    if (((safe_lshift_func_uint16_t_u_s((l_123 <= ((safe_lshift_func_int16_t_s_s((((g_126 != (g_127 = (0xD2562CEEL >= (l_123 || 0UL)))) && 18446744073709551615UL) < p_7.f1), l_123)) , l_123)), 1)) || 0x7659CEB6L))
    { 
        int8_t l_138 = 1L;
        for (p_6 = 3; (p_6 >= 11); p_6++)
        { 
            int64_t l_130 = (-3L);
            if (((l_130 >= (safe_rshift_func_int16_t_s_u(((safe_add_func_uint64_t_u_u((l_138 = (((!((safe_add_func_int16_t_s_s(l_130, 0xC9F7L)) & ((((l_130 || p_7.f0) != g_120) | 4294967295UL) < l_130))) ^ p_7.f3) != l_130)), g_80.f0)) <= g_80.f1), 6))) ^ l_130))
            { 
                g_81[0][2] = g_81[0][0];
            }
            else
            { 
                if (p_7.f2)
                    break;
                g_143 = ((safe_add_func_uint64_t_u_u((((safe_lshift_func_int8_t_s_u(((((l_123 & 9UL) ^ l_130) > g_10) != 0x1ADA0F0CF8135127LL), p_7.f1)) | l_130) > g_120), p_7.f4)) != 0x8BL);
                g_81[0][2] = g_81[0][1];
            }
        }
        return g_120;
    }
    else
    { 
        int64_t l_153 = 0x6BB7620F8F325711LL;
        int32_t l_154 = (-1L);
        const union U2 l_165 = {0UL};
        l_156[0][1] = ((safe_rshift_func_int16_t_s_u(((l_146 , (safe_mul_func_uint16_t_u_u(0x40B4L, (+(l_154 = ((safe_mul_func_int8_t_s_s((g_81[0][2].f1 |= ((safe_unary_minus_func_int32_t_s(6L)) , l_153)), 0x96L)) <= l_123)))))) <= l_146.f0), g_155)) , p_5);
        for (g_70 = (-11); (g_70 <= 24); g_70++)
        { 
            uint8_t l_159 = 0x45L;
            int32_t l_184 = (-1L);
            uint16_t l_185 = 0UL;
            if ((p_7.f5 , l_159))
            { 
                g_160++;
                l_156[0][1] = ((0xA68E686CL || ((((safe_mul_func_int8_t_s_s(((l_165 , (0L >= (safe_mul_func_uint8_t_u_u(0x80L, g_120)))) == g_155), p_7.f4)) ^ g_24.f0) || l_156[0][1]) >= 0x0889L)) | g_127);
            }
            else
            { 
                uint8_t l_177[3][3] = {{7UL,7UL,7UL},{0x9AL,0xA6L,0x9AL},{7UL,7UL,7UL}};
                int32_t l_178 = 0xEA9CB02FL;
                int i, j;
                l_180 = ((safe_sub_func_int32_t_s_s((((p_7.f5 | (safe_sub_func_uint32_t_u_u(((l_156[0][1] &= ((((l_165.f1 < (p_5 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((l_177[1][2] = (!1L)) < (((l_178 && g_80.f0) , 18446744073709551614UL) , 0x9311L)), g_24.f1)), l_178)))) & l_146.f0) > p_7.f2) , l_159)) > 0xB3E3A31E12F6A2ACLL), 1UL))) & g_143) >= p_7.f1), l_179)) || p_7.f5);
                l_180 |= (l_178 = ((l_156[2][1] = (((p_5 = p_7.f5) | (l_159 && ((safe_mul_func_int64_t_s_s((g_183 ^= p_6), (0x6A30DE6A78DC8BCBLL <= g_10))) && l_177[1][2]))) || g_183)) , 0x47B01587L));
                if (l_159)
                    continue;
            }
            l_184 = (p_6 != 0x71A7L);
            l_184 = l_185;
        }
    }
    return g_183;
}



static int64_t  func_8(int32_t  p_9)
{ 
    int64_t l_66 = 1L;
    int32_t l_67 = 0xDBD2431EL;
    struct S0 l_82 = {0x649AL,0x46L,0x7568L,0UL,0x7E8FL,0xB0EADF19L};
    if (g_10)
    { 
        uint8_t l_21 = 6UL;
        union U2 l_26[2][3] = {{{3UL},{3UL},{3UL}},{{0x0B56CEF3L},{0x0B56CEF3L},{0x0B56CEF3L}}};
        struct S0 l_79 = {65535UL,-3L,1UL,7UL,0L,0xA2E2E988L};
        int i, j;
        for (g_10 = (-1); (g_10 <= 8); g_10 = safe_add_func_int16_t_s_s(g_10, 8))
        { 
            uint16_t l_25 = 8UL;
            l_67 |= (safe_mul_func_uint8_t_u_u((func_15((p_9 >= l_21), ((p_9 > (safe_add_func_uint64_t_u_u((((p_9 | p_9) && l_21) < p_9), g_10))) , g_24), p_9, l_25, l_26[0][2]) & l_66), p_9));
            l_67 &= (safe_rshift_func_int8_t_s_s(((p_9 && ((((--g_70) <= ((safe_mod_func_int16_t_s_s((((((safe_rshift_func_uint8_t_u_s(g_10, (l_25 ^ (safe_add_func_uint8_t_u_u((l_79 , p_9), g_24.f1))))) < 2L) | (-1L)) , 0xCBDB463C3EAA4BB8LL) | (-8L)), g_64[1])) ^ l_25)) , g_80) , p_9)) > p_9), 0));
        }
        l_82 = g_81[0][2];
        for (l_79.f5 = 0; (l_79.f5 <= 1); l_79.f5 += 1)
        { 
            const int32_t l_89 = 0xA015B29DL;
            struct S0 l_92 = {0UL,-10L,0xB6A5L,65535UL,-8L,0UL};
            if ((l_67 = (safe_lshift_func_int16_t_s_u((l_82.f3 > 0x73EBL), (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((g_80.f2 == ((-9L) != p_9)), 7)), l_89)) , l_82.f0) , g_80.f0)))))
            { 
                g_91 &= (((p_9 && ((+0x7FB9E8BDL) || p_9)) > (l_67 = 0x3DL)) , 0xF9F99068L);
                return g_80.f0;
            }
            else
            { 
                l_92 = l_92;
            }
            for (l_92.f3 = 0; (l_92.f3 <= 1); l_92.f3 += 1)
            { 
                if (l_92.f3)
                    break;
            }
        }
    }
    else
    { 
        uint32_t l_93[2][1];
        int32_t l_110 = (-1L);
        int64_t l_111[5][4][2];
        uint16_t l_112 = 65532UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_93[i][j] = 4294967292UL;
        }
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 2; k++)
                    l_111[i][j][k] = 0x4FFD0F064999BD31LL;
            }
        }
        l_93[0][0] = (-6L);
        if ((l_67 = (0x67C9850C21D3621ALL && 0x220935DC34743BD4LL)))
        { 
            int16_t l_109 = (-3L);
            int32_t l_113 = 0xECA23E10L;
            l_67 = (l_113 = (safe_add_func_int32_t_s_s(((((g_70 >= (safe_div_func_uint8_t_u_u((((l_110 = (safe_mod_func_int64_t_s_s((-10L), (safe_unary_minus_func_uint32_t_u((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(1L, (safe_mul_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u((p_9 != g_64[3]), g_81[0][2].f4)) < g_81[0][2].f4) <= g_45), l_109)))), g_10))))))) || l_93[0][0]) > p_9), l_111[2][1][0]))) & p_9) < l_112) != p_9), g_81[0][2].f4)));
            for (g_80.f0 = 0; (g_80.f0 > 53); ++g_80.f0)
            { 
                if (p_9)
                    break;
            }
        }
        else
        { 
            for (l_82.f5 = 0; (l_82.f5 <= 1); l_82.f5 += 1)
            { 
                int i;
                if (g_64[(l_82.f5 + 1)])
                    break;
                return l_82.f0;
            }
        }
    }
    return g_81[0][2].f3;
}



static uint8_t  func_15(const uint8_t  p_16, union U2  p_17, uint8_t  p_18, uint8_t  p_19, union U2  p_20)
{ 
    int32_t l_37 = 0L;
    union U2 l_43 = {0xF3ADCFECL};
    struct S0 l_47[5] = {{0xC458L,1L,0x651EL,0x224BL,0x4D7AL,6UL},{0xC458L,1L,0x651EL,0x224BL,0x4D7AL,6UL},{0xC458L,1L,0x651EL,0x224BL,0x4D7AL,6UL},{0xC458L,1L,0x651EL,0x224BL,0x4D7AL,6UL},{0xC458L,1L,0x651EL,0x224BL,0x4D7AL,6UL}};
    int32_t l_53[4] = {0xF595C982L,0xF595C982L,0xF595C982L,0xF595C982L};
    int8_t l_62 = (-2L);
    struct S1 l_63[4] = {{9UL,0xCB69ACB3L,0x36F303358B4D4649LL},{9UL,0xCB69ACB3L,0x36F303358B4D4649LL},{9UL,0xCB69ACB3L,0x36F303358B4D4649LL},{9UL,0xCB69ACB3L,0x36F303358B4D4649LL}};
    int32_t l_65[2];
    int i;
    for (i = 0; i < 2; i++)
        l_65[i] = 6L;
    for (p_20.f0 = 0; (p_20.f0 != 46); p_20.f0 = safe_add_func_uint32_t_u_u(p_20.f0, 1))
    { 
        int64_t l_44 = 0x04E266BC59458D81LL;
        struct S0 l_46 = {0x978CL,0x64L,65529UL,0x1B23L,1L,1UL};
        for (p_19 = 0; (p_19 == 32); p_19 = safe_add_func_uint8_t_u_u(p_19, 9))
        { 
            int32_t l_38 = 0xED997831L;
            l_38 = ((0x83E731E7BF5CBF79LL | (((0x90L > ((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(p_16, ((safe_rshift_func_int16_t_s_u((4UL & g_24.f0), 13)) != p_17.f1))) != 0x83L), l_37)) && 1UL)) , g_10) == 0xC844FC37L)) || 1UL);
            g_45 = (safe_mul_func_uint8_t_u_u(g_24.f0, (((((l_38 == (safe_rshift_func_int16_t_s_u(p_18, (l_43 , p_20.f0)))) < 0x4FA7L) <= l_44) , p_19) > l_38)));
            l_47[4] = l_46;
        }
    }
    l_53[2] = ((safe_unary_minus_func_int16_t_s(p_16)) <= (safe_sub_func_int16_t_s_s((((safe_div_func_int32_t_s_s(((l_47[4].f4 != ((g_24.f1 >= (((g_45 = p_16) , 0xF4L) , g_24.f0)) > (-2L))) != l_43.f1), l_47[4].f0)) , 0xBB399D6DB78960BDLL) ^ 0x1B70F82EDDAAD19DLL), g_24.f1)));
    l_65[1] = ((p_20.f1 && (g_64[1] |= (((safe_div_func_int16_t_s_s((((l_53[0] = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(l_43.f0, l_62)), 6)), g_45))) , l_63[0]) , (-10L)), l_62)) >= 0x862D4500L) , l_47[4].f0))) >= 0x6E73BF60C7DC1DF7LL);
    return g_10;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);

    }
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_80.f1, "g_80.f1", print_hash_value);
    transparent_crc(g_80.f2, "g_80.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_81[i][j].f0, "g_81[i][j].f0", print_hash_value);
            transparent_crc(g_81[i][j].f1, "g_81[i][j].f1", print_hash_value);
            transparent_crc(g_81[i][j].f2, "g_81[i][j].f2", print_hash_value);
            transparent_crc(g_81[i][j].f3, "g_81[i][j].f3", print_hash_value);
            transparent_crc(g_81[i][j].f4, "g_81[i][j].f4", print_hash_value);
            transparent_crc(g_81[i][j].f5, "g_81[i][j].f5", print_hash_value);

        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
