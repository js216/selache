// SPDX-License-Identifier: MIT
// cctest_csmith_b80f150c.c --- cctest case csmith_b80f150c (csmith seed 3087996172)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xef9ff29c */
/* @exp_ticks 0x5fc5 */

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

// Options:   -s 3087996172 -o /tmp/csmith_gen_qlibmop5/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   int32_t  f1;
   const int32_t  f2;
   const uint32_t  f3;
   const uint64_t  f4;
   const int8_t  f5;
   const uint32_t  f6;
};

union U1 {
   const uint32_t  f0;
   int8_t * f1;
};


static uint16_t g_2 = 0xFE04L;
static int8_t g_48 = 9L;
static int8_t *g_47 = &g_48;
static int32_t g_59 = 0xA0585C2CL;
static int64_t g_82 = (-1L);
static const int32_t *g_87[2] = {(void*)0,(void*)0};
static const int32_t **g_86 = &g_87[0];
static int32_t *g_89 = (void*)0;
static int32_t **g_88 = &g_89;
static uint64_t g_100 = 7UL;
static int32_t g_106 = 0x0B3E519BL;
static int8_t g_110[7] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
static int16_t g_125 = 0x7CDBL;
static int16_t g_176[4] = {0xF323L,0xF323L,0xF323L,0xF323L};
static uint8_t g_180 = 2UL;
static int64_t g_200 = 0x87346C39F9920B58LL;
static struct S0 g_206 = {4294967295UL,0x8527E746L,-2L,0UL,0UL,0x3CL,0UL};
static uint16_t g_218[2] = {65535UL,65535UL};
static uint64_t g_241 = 0xAAB16F6D4199CF0CLL;
static uint64_t *g_240 = &g_241;
static uint16_t g_282[5] = {0x5BE3L,0x5BE3L,0x5BE3L,0x5BE3L,0x5BE3L};
static union U1 *g_284 = (void*)0;
static union U1 g_288 = {5UL};
static uint8_t g_315 = 1UL;
static uint64_t g_316 = 0x711149BCCB01B5B1LL;
static struct S0 * const *g_334 = (void*)0;
static int64_t g_337[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int32_t g_339 = 0xFBAA2C01L;
static uint8_t g_366 = 1UL;
static uint8_t g_372 = 5UL;
static const union U1 g_380 = {2UL};
static const union U1 g_382 = {0xD652D0F0L};
static uint64_t g_391[5] = {1UL,1UL,1UL,1UL,1UL};
static uint8_t *g_395 = &g_315;
static uint8_t **g_394 = &g_395;
static int32_t g_459 = 0x98F05BC6L;
static const int64_t g_514 = 0xF0E43438B4078174LL;
static uint16_t g_575 = 65532UL;
static uint8_t g_583 = 0x79L;
static int32_t ***g_621 = (void*)0;
static struct S0 g_630 = {4294967289UL,0x1AD53198L,0xBAA7D61EL,0x7F8364DBL,6UL,1L,18446744073709551606UL};
static struct S0 *g_629 = &g_630;
static int64_t *g_668 = &g_200;
static int64_t **g_667 = &g_668;
static uint16_t *g_694 = &g_218[0];
static uint16_t **g_693[3][5][5] = {{{(void*)0,&g_694,&g_694,&g_694,&g_694},{(void*)0,&g_694,&g_694,(void*)0,&g_694},{&g_694,&g_694,&g_694,(void*)0,(void*)0},{&g_694,&g_694,(void*)0,(void*)0,&g_694},{(void*)0,&g_694,&g_694,&g_694,(void*)0}},{{&g_694,&g_694,&g_694,(void*)0,&g_694},{&g_694,(void*)0,&g_694,(void*)0,(void*)0},{&g_694,&g_694,&g_694,(void*)0,&g_694},{&g_694,&g_694,(void*)0,&g_694,&g_694},{(void*)0,&g_694,&g_694,(void*)0,&g_694}},{{&g_694,&g_694,(void*)0,&g_694,&g_694},{&g_694,&g_694,&g_694,(void*)0,&g_694},{(void*)0,&g_694,&g_694,&g_694,&g_694},{(void*)0,(void*)0,&g_694,&g_694,&g_694},{&g_694,&g_694,&g_694,&g_694,&g_694}}};
static const uint16_t *g_700 = &g_218[0];
static const uint16_t **g_699 = &g_700;
static const uint16_t ***g_698 = &g_699;
static const uint16_t ****g_697 = &g_698;
static uint16_t g_734 = 0x78CCL;
static uint8_t g_780 = 0x9EL;
static int64_t g_840 = 0x94D625CA1EC71FFBLL;
static uint32_t g_841 = 0x50740E9FL;
static int16_t g_884 = (-1L);
static int16_t g_885 = 0xD730L;
static int32_t g_886 = (-1L);
static uint32_t g_887 = 0x842D1086L;
static union U1 **g_906 = (void*)0;
static int32_t ****g_947[6][5] = {{&g_621,&g_621,&g_621,(void*)0,&g_621},{&g_621,&g_621,(void*)0,&g_621,&g_621},{&g_621,&g_621,&g_621,&g_621,&g_621},{&g_621,&g_621,(void*)0,&g_621,&g_621},{&g_621,&g_621,&g_621,&g_621,&g_621},{&g_621,&g_621,&g_621,&g_621,&g_621}};
static uint16_t ***g_951 = (void*)0;
static uint16_t ****g_950 = &g_951;
static uint16_t *****g_949 = &g_950;
static const uint8_t g_952 = 249UL;
static int32_t g_1091[5][5][3] = {{{(-3L),(-3L),0xBCBEAA74L},{0L,0x8E773D30L,0x6F70A916L},{(-4L),5L,0xBCBEAA74L},{7L,7L,0x6F70A916L},{5L,(-4L),0xBCBEAA74L}},{{0x8E773D30L,0L,0x6F70A916L},{(-3L),(-3L),0xBCBEAA74L},{0L,0x8E773D30L,0x6F70A916L},{(-4L),5L,0xBCBEAA74L},{7L,7L,0x6F70A916L}},{{5L,(-4L),0xBCBEAA74L},{0x8E773D30L,0L,0x6F70A916L},{(-3L),(-3L),0xBCBEAA74L},{0L,0x8E773D30L,0x6F70A916L},{(-4L),5L,0xBCBEAA74L}},{{7L,7L,0x6F70A916L},{5L,(-4L),0xBCBEAA74L},{0x8E773D30L,0L,0x6F70A916L},{(-3L),(-3L),0xBCBEAA74L},{0L,0x8E773D30L,0x6F70A916L}},{{(-4L),5L,0xBCBEAA74L},{7L,7L,0x6F70A916L},{5L,(-4L),0xBCBEAA74L},{0x8E773D30L,0L,0x6F70A916L},{(-3L),(-3L),0xBCBEAA74L}}};
static int32_t *g_1115 = &g_886;
static int32_t **g_1114 = &g_1115;
static uint8_t g_1149[3][1][2] = {{{1UL,1UL}},{{0x7EL,1UL}},{{1UL,0x7EL}}};
static int32_t **** const g_1172 = (void*)0;
static int32_t **** const *g_1171[4] = {&g_1172,&g_1172,&g_1172,&g_1172};
static const int8_t g_1371 = 0xD4L;
static const int8_t *g_1370[6][1][1] = {{{&g_1371}},{{&g_1371}},{{&g_1371}},{{&g_1371}},{{&g_1371}},{{&g_1371}}};
static uint32_t *g_1421 = (void*)0;
static uint32_t **g_1420 = &g_1421;
static uint64_t ***g_1471[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t **g_1477[6][1] = {{&g_240},{&g_240},{&g_240},{&g_240},{&g_240},{&g_240}};
static uint64_t ***g_1476 = &g_1477[3][0];
static int32_t g_1498 = 0L;
static int32_t ***g_1515 = &g_1114;
static uint16_t g_1538 = 1UL;
static const struct S0 **g_1561 = (void*)0;
static const struct S0 ***g_1560 = &g_1561;
static const struct S0 ****g_1559[2][6][5] = {{{&g_1560,&g_1560,&g_1560,&g_1560,(void*)0},{(void*)0,&g_1560,&g_1560,&g_1560,&g_1560},{(void*)0,&g_1560,&g_1560,&g_1560,&g_1560},{(void*)0,&g_1560,(void*)0,&g_1560,&g_1560},{&g_1560,&g_1560,&g_1560,&g_1560,&g_1560},{(void*)0,(void*)0,&g_1560,&g_1560,&g_1560}},{{(void*)0,(void*)0,&g_1560,&g_1560,&g_1560},{(void*)0,(void*)0,(void*)0,(void*)0,&g_1560},{&g_1560,&g_1560,&g_1560,&g_1560,&g_1560},{&g_1560,(void*)0,&g_1560,&g_1560,&g_1560},{&g_1560,(void*)0,&g_1560,&g_1560,&g_1560},{&g_1560,(void*)0,&g_1560,(void*)0,&g_1560}}};
static const union U1 *g_1582 = &g_382;
static const union U1 **g_1581 = &g_1582;
static const union U1 **g_1584 = &g_1582;
static int32_t g_1595 = 0xD6BB0801L;
static uint64_t g_1613 = 0x32D6A6922E0B2342LL;
static uint32_t g_1684 = 0x694A5D1AL;



static uint64_t  func_1(void);
static int8_t * func_8(int32_t  p_9, uint16_t  p_10);
static int16_t  func_16(const uint32_t  p_17, int8_t * p_18, int8_t * p_19, const int8_t * p_20);
static struct S0  func_24(int32_t  p_25, int64_t  p_26, uint32_t  p_27);
static uint32_t  func_30(int64_t  p_31, int8_t * p_32, union U1  p_33, int8_t * const  p_34);
static const uint16_t  func_44(int8_t * p_45, uint64_t  p_46);
static int32_t  func_60(uint8_t  p_61, int32_t * p_62, int64_t  p_63, uint16_t  p_64, union U1  p_65);
static int64_t  func_66(int32_t * p_67, int32_t  p_68);




static uint64_t  func_1(void)
{ 
    uint16_t l_5[5][2][1];
    union U1 *l_1380 = &g_288;
    int32_t l_1400 = 2L;
    const int16_t l_1408 = (-1L);
    uint64_t **l_1417 = &g_240;
    uint32_t *l_1427 = &g_887;
    int32_t l_1448 = 0xAD8FC778L;
    uint64_t l_1479 = 0x2EB22EA691F77577LL;
    uint32_t l_1525 = 0UL;
    uint32_t l_1548 = 0UL;
    int32_t * const **l_1611 = (void*)0;
    int32_t * const ***l_1610 = &l_1611;
    int32_t l_1641 = 0x36662FD9L;
    int32_t l_1643 = (-1L);
    int32_t **l_1663 = &g_89;
    uint8_t l_1664[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
    int32_t l_1680 = 0x65ED6838L;
    int32_t l_1681 = 6L;
    int32_t l_1682 = 0x365E565AL;
    int32_t l_1683 = 0xB15A9B85L;
    int16_t l_1691 = (-7L);
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_5[i][j][k] = 0UL;
        }
    }
lbl_1418:
    g_2++;
    for (g_2 = 0; (g_2 <= 0); g_2 += 1)
    { 
        int64_t l_11[2][3] = {{9L,9L,9L},{0L,0L,0L}};
        int32_t ***l_1372 = (void*)0;
        int8_t l_1398 = 0x40L;
        uint32_t l_1402 = 0x7A0F1F99L;
        uint32_t *l_1426 = &g_887;
        int32_t l_1429 = (-9L);
        int32_t **l_1458 = &g_1115;
        uint64_t ***l_1473 = &l_1417;
        uint16_t * const l_1496[1] = {&g_575};
        int64_t l_1598 = 0xBDEE4CD6B250C0A0LL;
        struct S0 *l_1614 = &g_206;
        int32_t l_1636 = 0L;
        int32_t l_1639[5][2][1] = {{{0x717D0963L},{0x9E94B55FL}},{{0x717D0963L},{0x717D0963L}},{{0x9E94B55FL},{0x717D0963L}},{{0x717D0963L},{0x9E94B55FL}},{{0x717D0963L},{0x717D0963L}}};
        int16_t l_1673 = 0xB61DL;
        int8_t l_1700 = 0xB5L;
        int32_t l_1703 = 0x2F0097CEL;
        int i, j, k;
        if (((((safe_mod_func_int8_t_s_s((((g_1370[0][0][0] = func_8(l_11[0][2], ((l_5[3][1][0] < g_2) , l_11[0][2]))) == (void*)0) && (l_11[0][2] > (**g_394))), 9L)) & l_5[3][0][0]) == l_11[0][2]) , 3L))
        { 
            int32_t ****l_1373 = &g_621;
            (*l_1373) = l_1372;
        }
        else
        { 
            union U1 *l_1381[2][1][2];
            union U1 *l_1392 = &g_288;
            union U1 *l_1397 = &g_288;
            union U1 **l_1396 = &l_1397;
            int32_t l_1399 = 8L;
            int16_t *l_1401 = (void*)0;
            int32_t *l_1403 = &g_206.f1;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1381[i][j][k] = &g_288;
                }
            }
            (*l_1403) = (safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((l_1380 == l_1381[1][0][1]), (g_125 ^= ((safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((((safe_div_func_int64_t_s_s((**g_667), ((((g_284 = l_1392) != ((*l_1396) = ((safe_mul_func_uint8_t_u_u(l_5[0][0][0], ((safe_unary_minus_func_int32_t_s((-1L))) != g_59))) , (void*)0))) & (**g_667)) , (*g_240)))) && l_1398) == l_1399), l_5[0][0][0])), 10)), l_1400)) || 0xB6153B9866F0B5C7LL), l_1399)) ^ (*g_240))))), 0x533B4D6269DAAA5FLL)), l_1402));
            (*l_1403) = (((safe_rshift_func_uint16_t_u_u(((*g_694) = (safe_add_func_int64_t_s_s(3L, ((*l_1403) ^ l_1408)))), ((((safe_div_func_uint64_t_u_u(((*g_240) |= (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(((void*)0 != l_1417), (*l_1403))), g_841)), (*l_1403)))), g_1091[1][0][1])) == l_1402) || 0x39E826E8AFF0DA1DLL) <= (*l_1403)))) && (*l_1403)) | 0xB6500047FDE7D6E4LL);
            if (g_514)
                goto lbl_1418;
            if ((*l_1403))
            { 
                uint16_t l_1419 = 0x876EL;
                return l_1419;
            }
            else
            { 
                int64_t l_1423 = (-4L);
                g_1420 = g_1420;
                (*l_1403) &= l_1408;
                for (g_887 = 0; (g_887 <= 0); g_887 += 1)
                { 
                    l_1423 = (safe_unary_minus_func_int32_t_s((*l_1403)));
                    return (*g_240);
                }
            }
            (*l_1403) &= (safe_add_func_uint16_t_u_u(((((*g_240) = 0UL) && (*g_240)) > (l_1426 != l_1427)), ((void*)0 != l_1426)));
        }
        for (g_840 = 0; (g_840 <= 3); g_840 += 1)
        { 
            int32_t l_1430 = 0L;
            uint16_t l_1432 = 65531UL;
            int32_t l_1480 = 0xEBB2E743L;
            uint8_t l_1524 = 254UL;
            int i;
            if (g_176[g_840])
                break;
            for (g_339 = 0; (g_339 <= 1); g_339 += 1)
            { 
                int32_t *l_1428[6][7];
                union U1 l_1452 = {2UL};
                int16_t *l_1464 = &g_176[1];
                uint64_t ****l_1472 = &g_1471[2];
                uint64_t ****l_1474 = (void*)0;
                uint64_t ****l_1475[7] = {&l_1473,&l_1473,&l_1473,&l_1473,&l_1473,&l_1473,&l_1473};
                uint16_t l_1478 = 0x6C62L;
                uint8_t l_1516[7][3] = {{0xA1L,0xA1L,0xA1L},{0xE8L,0xE8L,0xE8L},{0xA1L,0xA1L,0xA1L},{0xE8L,0xE8L,0xE8L},{0xA1L,0xA1L,0xA1L},{0xE8L,0xE8L,0xE8L},{0xA1L,0xA1L,0xA1L}};
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_1428[i][j] = (void*)0;
                }
                for (g_887 = 0; (g_887 <= 4); g_887 += 1)
                { 
                    int32_t l_1431 = 1L;
                    uint16_t *l_1447[5];
                    int32_t **l_1457 = &g_1115;
                    int32_t ***l_1459 = &g_1114;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_1447[i] = &l_1432;
                    (*g_88) = l_1428[4][6];
                    --l_1432;
                    l_1448 &= (l_1400 &= (safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(((l_1430 ^= (l_5[g_887][g_339][g_2] = (g_288 , ((l_5[(g_840 + 1)][g_2][g_2] > ((g_218[g_339] & (safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((1L & (*g_47)), 0x9F42L)), 0x5D86L)), (*g_700)))) | g_176[g_840])) || (-1L))))) || 0UL), l_1408)) > 0x93L), l_1432)));
                    l_1448 |= (safe_add_func_uint64_t_u_u((18446744073709551615UL && ((0x90DAFC1BL >= (safe_unary_minus_func_uint8_t_u((l_1452 , (*g_395))))) , (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((l_1457 != ((*l_1459) = l_1458)), (4294967295UL < l_1400))), 0x91AEL)))), (**g_667)));
                }
                if ((l_1400 |= (l_1448 = (((safe_div_func_uint16_t_u_u((l_5[(g_2 + 1)][(g_2 + 1)][g_2] = ((safe_add_func_uint8_t_u_u(247UL, (((*l_1464) = (-1L)) ^ l_5[(g_2 + 2)][g_339][g_2]))) <= (safe_mod_func_uint32_t_u_u((((((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(l_5[g_339][(g_2 + 1)][g_2], l_5[(g_2 + 2)][g_339][g_2])), (((*l_1472) = g_1471[2]) != (g_1476 = l_1473)))) != 65534UL) < g_218[g_339]) && 0x1362L) && (*g_240)) || l_1448) , 4294967294UL), l_1478)))), l_1479)) < 0UL) != 0xA3L))))
                { 
                    int64_t l_1487 = 0x19E14369A4311F87LL;
                    int32_t l_1488 = 0L;
                    int32_t l_1497[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1497[i] = 0x9D734A42L;
                    if (l_1430)
                        break;
                    if (l_1480)
                        continue;
                    (*g_88) = l_1428[4][4];
                    l_1497[1] |= (((safe_mod_func_int32_t_s_s(((*g_668) , (-6L)), (l_1487 = ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(l_1479, l_1400)), 10)) , l_1432)))) ^ l_1488) ^ (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((~(safe_mul_func_int16_t_s_s((((0x517897D4L | l_1448) , l_1496[0]) != (*g_699)), g_176[g_840]))), l_1448)), 11)) , l_1479) , g_176[g_840]));
                    g_1498 &= (-10L);
                }
                else
                { 
                    uint16_t l_1499 = 0UL;
                    int32_t ***l_1514 = &l_1458;
                    int32_t ****l_1513[3][4][5] = {{{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514},{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514},{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514},{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514}},{{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514},{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514},{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514},{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514}},{{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514},{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514},{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514},{&l_1514,&l_1514,&l_1514,&l_1514,&l_1514}}};
                    int i, j, k;
                    ++l_1499;
                    if (g_176[g_840])
                        continue;
                    l_1516[3][0] = (safe_div_func_uint8_t_u_u((**g_394), (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((((**g_667) || (!((safe_mod_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((g_1515 = &l_1458) != &g_1114), (1UL <= (*g_240)))) == l_1480), l_1480)) | 4L))) > (*g_395)) || 0UL), (*g_47))) & (-1L)), g_372))));
                    (*g_86) = &l_1400;
                }
                for (g_372 = (-11); (g_372 != 1); g_372 = safe_add_func_int16_t_s_s(g_372, 2))
                { 
                    uint32_t l_1528 = 0x952BB6BAL;
                    uint32_t l_1531 = 3UL;
                    union U1 *l_1532 = &g_288;
                    l_1525 = (((***g_1476) ^ (**g_667)) < (safe_mod_func_int32_t_s_s(((((*g_47) == (!(safe_lshift_func_int8_t_s_s((0xE016L > 0xD1B2L), l_1524)))) <= 2UL) != 0xADD5L), 6UL)));
                    if (l_1400)
                        goto lbl_1418;
                    l_1429 = (l_1480 ^= (safe_sub_func_int16_t_s_s(l_1528, (***g_698))));
                    l_1429 ^= (safe_add_func_uint8_t_u_u(((***g_1476) | 0x9523DEF244513054LL), l_1531));
                    g_284 = l_1532;
                }
                for (l_1429 = 0; (l_1429 > 19); l_1429 = safe_add_func_int64_t_s_s(l_1429, 4))
                { 
                    int16_t l_1535 = 0x1819L;
                    if (l_1535)
                        break;
                    l_1430 ^= (-6L);
                }
                for (g_734 = 26; (g_734 < 38); g_734++)
                { 
                    uint64_t l_1541 = 0x4D67C01ED533AF18LL;
                    --g_1538;
                    l_1541++;
                }
            }
        }
        for (l_1448 = 0; (l_1448 <= 0); l_1448 += 1)
        { 
            int16_t l_1544 = 6L;
            int32_t *l_1545 = &g_459;
            const struct S0 ****l_1563 = &g_1560;
            int32_t l_1564 = (-7L);
            int32_t l_1565 = 1L;
            union U1 l_1570 = {4294967290UL};
            int32_t l_1596 = 1L;
            union U1 **l_1597 = &l_1380;
            int64_t l_1675 = 0x4E52E737D5ABFB8BLL;
            int32_t l_1677 = 0x0E092A0EL;
            int32_t l_1678 = 9L;
            int32_t l_1679 = 0x6005A16FL;
            int32_t **l_1702 = (void*)0;
            (*l_1545) = l_1544;
            (*g_88) = &l_1400;
            for (g_125 = 0; (g_125 <= 0); g_125 += 1)
            { 
                int16_t *l_1558 = &g_176[1];
                const struct S0 *****l_1562 = (void*)0;
                const union U1 ***l_1583 = &g_1581;
                int32_t ****l_1612 = &l_1372;
                int8_t l_1637 = 1L;
                int32_t l_1638 = 0xFE6C9B2AL;
                int32_t l_1640 = 0x764A1233L;
                int32_t l_1661[1][3][6] = {{{4L,4L,0x33D5AAB5L,4L,4L,0x33D5AAB5L},{4L,4L,0x33D5AAB5L,4L,4L,0x33D5AAB5L},{4L,4L,0x33D5AAB5L,4L,4L,0x33D5AAB5L}}};
                int32_t **l_1662 = &l_1545;
                int i, j, k;
                (**g_88) ^= (safe_sub_func_int8_t_s_s(l_5[(g_2 + 1)][l_1448][g_125], (1UL && ((*g_47) = l_1548))));
                (**g_88) = ((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((((((*g_240)++) && 4UL) >= ((g_630.f0 |= (safe_unary_minus_func_int16_t_s(((*l_1558) = ((void*)0 != &g_334))))) < l_5[(g_2 + 1)][l_1448][g_125])) < (0L ^ ((*g_668) = ((l_1563 = g_1559[0][5][0]) != (void*)0)))), (**g_699))) < l_1564), (*l_1545))), 18446744073709551607UL)) | l_1565);
                if ((safe_lshift_func_uint16_t_u_s((1L & (safe_add_func_uint64_t_u_u((l_1570 , (safe_mod_func_int8_t_s_s((((l_1598 ^= ((safe_div_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((0xC65D016BL <= l_1548), (--l_5[(l_1448 + 1)][(l_1448 + 1)][l_1448]))) <= (safe_sub_func_int8_t_s_s(((**g_394) < ((g_1584 = ((*l_1583) = g_1581)) == ((((**g_667) = ((safe_sub_func_int32_t_s_s((((((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s(g_337[5], (****g_697))), 65529UL)), g_575)), 0xBDA28DEF12E11477LL)) ^ l_1408) , g_1595) <= (**g_667)) >= (*g_668)), l_1596)) >= (*l_1545))) || (*l_1545)) , l_1597))), 0L))), (-10L))) && g_206.f4)) >= (*l_1545)) , l_11[0][2]), l_1548))), (*l_1545)))), 4)))
                { 
                    int16_t *l_1603[5] = {&l_1544,&l_1544,&l_1544,&l_1544,&l_1544};
                    int32_t *l_1615 = &g_1498;
                    int32_t *l_1616 = &l_1565;
                    int32_t *l_1617 = &l_1565;
                    int32_t *l_1618 = &g_1498;
                    int32_t *l_1619 = (void*)0;
                    int32_t *l_1620 = &g_106;
                    int32_t *l_1621 = (void*)0;
                    int32_t *l_1622 = (void*)0;
                    int32_t *l_1623 = (void*)0;
                    int32_t *l_1624 = &g_459;
                    int32_t *l_1625 = &g_106;
                    int32_t *l_1626 = &g_459;
                    int32_t *l_1627 = (void*)0;
                    int32_t *l_1628 = &g_206.f1;
                    int32_t *l_1629 = &g_59;
                    int32_t *l_1630 = &l_1400;
                    int32_t *l_1631 = &l_1565;
                    int32_t *l_1632 = (void*)0;
                    int32_t *l_1633 = &g_206.f1;
                    int32_t *l_1634 = &g_106;
                    int32_t *l_1635[6] = {&l_1429,&l_1429,&l_1429,&l_1429,&l_1429,&l_1429};
                    int32_t l_1642 = 0xE3DED438L;
                    uint32_t l_1644 = 18446744073709551611UL;
                    int i;
                    (*g_89) = (((*g_694) |= (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((1UL ^ ((((((g_884 = (((*l_1545) = ((*l_1558) = ((void*)0 != (*g_667)))) , (safe_div_func_uint64_t_u_u((***g_1476), (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(254UL, (l_1610 == l_1612))), g_1613)))))) , l_11[0][2]) , l_1614) == (void*)0) && (*l_1545)) | g_1613)), (*g_395))), (**g_394)))) == g_1613);
                    --l_1644;
                    (*g_86) = &l_1596;
                }
                else
                { 
                    return (***g_1476);
                }
                if (((safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s(0xD5A7L, (safe_mod_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s((((safe_sub_func_int64_t_s_s(1L, l_1661[0][2][1])) , (l_1662 != (l_1663 = l_1663))) , (((void*)0 == &l_1545) && 0L)), l_1664[3])), g_391[0])) != 0x3D846E2CL), (*l_1545))))), (*l_1545))), l_1636)) & 4294967289UL))
                { 
                    int64_t *l_1667 = &g_840;
                    uint16_t l_1668 = 65527UL;
                    int32_t l_1670 = 0xCC3420B4L;
                    int32_t *l_1671 = &l_1429;
                    int32_t *l_1672 = &g_1498;
                    int32_t *l_1674[2][5][5] = {{{&l_1429,&l_1640,&l_1429,(void*)0,(void*)0},{&l_1639[3][0][0],(void*)0,&l_1639[3][0][0],&l_1400,&l_1400},{&l_1429,&l_1640,&l_1429,(void*)0,(void*)0},{&l_1639[3][0][0],(void*)0,&l_1639[3][0][0],&l_1400,&l_1400},{&l_1429,&l_1640,&l_1429,(void*)0,(void*)0}},{{&l_1639[3][0][0],(void*)0,&l_1639[3][0][0],&l_1400,&l_1400},{&l_1429,&l_1640,&l_1429,(void*)0,(void*)0},{&l_1639[3][0][0],(void*)0,&l_1639[3][0][0],&l_1400,&l_1400},{&l_1429,&l_1640,&l_1429,(void*)0,(void*)0},{&l_1639[3][0][0],(void*)0,&l_1639[3][0][0],&l_1400,&l_1400}}};
                    int8_t l_1676 = (-6L);
                    uint64_t *l_1699[5];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_1699[i] = &g_391[1];
                    (*g_89) |= (((**g_667) & ((*l_1667) |= (**l_1662))) != (l_1668 , (!((***l_1473) = 0UL))));
                    g_1684++;
                    (*l_1662) = ((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((((*l_1545) , l_1691) >= (~((*g_47) = (**l_1662)))), (safe_sub_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((***l_1473) |= (((**g_1584) , 3L) ^ ((*l_1672) = 0x7F91B535L))), (((l_1700 = (*l_1545)) | (**l_1662)) , (*l_1671)))) == (**g_699)), 255UL)), (**l_1662))))), (**g_667))) , &l_1679);
                }
                else
                { 
                    int32_t *****l_1701 = &g_947[3][0];
                    (*l_1662) = &l_1678;
                    l_1702 = (((**g_667) = (l_1701 != l_1701)) , &l_1545);
                    (*g_89) &= (*l_1545);
                }
                l_1703 &= ((**g_88) = ((*l_1545) ^= 2L));
            }
        }
    }
    return (***g_1476);
}



static int8_t * func_8(int32_t  p_9, uint16_t  p_10)
{ 
    uint32_t l_12[2];
    uint8_t l_23[4] = {0xC9L,0xC9L,0xC9L,0xC9L};
    union U1 l_867[1][6][2] = {{{{0xC921ED0CL},{0x0F04015CL}},{{0x8D91952DL},{0x8D91952DL}},{{0x8D91952DL},{0x0F04015CL}},{{0xC921ED0CL},{4294967295UL}},{{0x0F04015CL},{4294967295UL}},{{0xC921ED0CL},{0x0F04015CL}}}};
    uint16_t l_1150 = 1UL;
    int32_t **** const *l_1170 = &g_947[0][3];
    int8_t *l_1180 = &g_110[5];
    int32_t l_1196 = 0x23657145L;
    int32_t l_1217 = 0x3BAA90E5L;
    int32_t l_1218 = 0x1643E7D3L;
    int32_t l_1219 = 5L;
    int32_t l_1224 = (-1L);
    int32_t l_1227[1][5];
    int64_t l_1228 = 0L;
    int32_t *l_1271 = &l_1219;
    int32_t l_1300 = (-1L);
    uint16_t l_1367[6][5][7] = {{{0x9047L,65533UL,0xFA19L,0UL,4UL,65535UL,65535UL},{65533UL,0xA3B6L,0x2848L,0xA3B6L,65533UL,65533UL,0x1A86L},{0x6C16L,65533UL,1UL,0x1A86L,0x7AC6L,0xC842L,0x8EE3L},{0xFA19L,0x8EE3L,0x0E8BL,0UL,0x8EE3L,0x7AC6L,65533UL},{0x6C16L,0x1A86L,0x590DL,1UL,0x53EBL,0UL,0xA3B6L}},{{65533UL,65535UL,0UL,0x6B84L,0x7AC6L,0x9047L,65533UL},{0x9047L,0xA3B6L,0UL,0x7AC6L,0x6C05L,0x9047L,0UL},{0xBFD8L,0x89EEL,0UL,0x1A86L,0x1A86L,0UL,0x89EEL},{0xA3B6L,65533UL,0xFDF2L,65530UL,0x8157L,0x7AC6L,0x53EBL},{0x5516L,4UL,0xFA19L,1UL,0x89EEL,0xC842L,0UL}},{{65533UL,0x6C05L,0x590DL,65530UL,4UL,65533UL,0x4171L},{0x4171L,0UL,0UL,0x1A86L,65535UL,65535UL,0x1A86L},{0x5516L,0x8EE3L,0xC842L,0x7AC6L,0x1A86L,1UL,65533UL},{0x1A86L,0x8EE3L,0x2848L,0x6B84L,0x53EBL,0x590DL,0x53EBL},{1UL,0UL,0UL,1UL,0x8157L,0x5516L,4UL}},{{0x9047L,0x6C05L,0x7AC6L,0UL,0xA3B6L,0x9047L,65535UL},{0x6C05L,4UL,0x8EE3L,0x5516L,0xFA19L,0x1A86L,0xC842L},{0UL,65533UL,0UL,1UL,0xC2D5L,0xBCB6L,65535UL},{65533UL,65535UL,0xEE35L,0x734EL,65535UL,0UL,65533UL},{0x0E8BL,1UL,0x6C16L,0UL,65535UL,0x3FACL,0x5516L}},{{0xFA19L,0x590DL,0xC2D5L,0UL,0xC2D5L,0x590DL,0xFA19L},{0xD4A9L,0x5516L,7UL,0xC2D5L,0xFA19L,0x5D7AL,0UL},{0xFDF2L,0x9047L,0x3FACL,0xC842L,1UL,0x3FACL,65535UL},{0xC842L,65533UL,7UL,65533UL,0xE443L,65533UL,65535UL},{0UL,1UL,0xC2D5L,0xBCB6L,65535UL,0UL,0UL}},{{0x7AC6L,0UL,0x6C16L,0UL,0x5516L,0x1A86L,0UL},{0x7AC6L,0UL,0xEE35L,1UL,0x5D7AL,0x5D7AL,1UL},{0UL,65535UL,0UL,0xC2D5L,0xC842L,0x2848L,65533UL},{0xC842L,65535UL,0x8EE3L,0x8157L,65535UL,0x6C16L,0x9047L},{0xFDF2L,0UL,0xC2D5L,0xFDF2L,0xE443L,0x2848L,0x5516L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_12[i] = 18446744073709551615UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_1227[i][j] = 0xB510F8F7L;
    }
    if (l_12[0])
    { 
        uint64_t l_28[6];
        const int8_t *l_891 = (void*)0;
        int32_t l_1151 = 0xAA5642C5L;
        int32_t *l_1153 = &g_206.f1;
        struct S0 *l_1163 = &g_630;
        int i;
        for (i = 0; i < 6; i++)
            l_28[i] = 18446744073709551606UL;
        if (p_10)
        { 
            int8_t l_15[7] = {0L,0x70L,0L,0L,0x70L,0L,0L};
            uint16_t l_29 = 6UL;
            int32_t l_49 = 0xBFBC35CFL;
            int32_t l_866 = 0L;
            union U1 l_1142 = {1UL};
            int i;
            for (p_10 = (-23); (p_10 <= 38); p_10 = safe_add_func_int32_t_s_s(p_10, 7))
            { 
                int8_t *l_35 = &l_15[3];
                int16_t *l_1122 = &g_885;
                int32_t *l_1123 = &l_49;
                int32_t *l_1152 = &g_106;
            }
        }
        else
        { 
            return &g_48;
        }
        (*l_1153) = (l_1151 = (0xF34BL && 1UL));
        for (g_100 = 0; (g_100 >= 1); g_100 = safe_add_func_int64_t_s_s(g_100, 1))
        { 
            int32_t l_1160 = 0x4BE7B862L;
            uint32_t *l_1173 = &g_206.f0;
            uint32_t *l_1174 = &g_630.f0;
            if (p_9)
                break;
            if (p_10)
                continue;
            (*l_1153) = (safe_rshift_func_int16_t_s_s((((*l_1174) ^= ((safe_add_func_int32_t_s_s(l_1160, ((*l_1173) = (safe_lshift_func_int8_t_s_u(((*g_47) = (l_1163 == (void*)0)), (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((l_12[0] == ((safe_sub_func_uint64_t_u_u((&g_947[5][2] != (g_1171[1] = l_1170)), p_9)) < p_9)), 1UL)) , (-1L)), 2))))))) , g_218[0])) && 0x98A779B9L), 11));
            (*g_88) = l_1173;
        }
    }
    else
    { 
        uint32_t *l_1177 = &g_206.f0;
        const uint32_t *l_1179 = (void*)0;
        const uint32_t **l_1178 = &l_1179;
        int32_t l_1185 = 0x104F60D6L;
        struct S0 **l_1192 = &g_629;
        struct S0 *** const l_1191 = &l_1192;
        int32_t l_1222 = 0xFAF11F06L;
        int32_t l_1223 = 0x3399B4BDL;
        int32_t l_1225 = 0x9BC53276L;
        int32_t l_1226 = 0x3BB0AE01L;
        int32_t l_1229 = 0L;
        int8_t l_1260 = 0x02L;
        uint32_t l_1272 = 4294967295UL;
        uint16_t ** const *l_1293 = &g_693[0][0][4];
        uint16_t ** const ** const l_1292 = &l_1293;
        uint16_t ** const ** const *l_1291 = &l_1292;
        int32_t **l_1324 = &g_89;
        uint64_t **l_1330[6] = {&g_240,&g_240,&g_240,&g_240,&g_240,&g_240};
        uint64_t ***l_1329 = &l_1330[1];
        int32_t l_1339 = 0xED4F59A4L;
        int32_t l_1340 = 1L;
        int32_t l_1341 = 0L;
        int32_t l_1342 = 0x517F6618L;
        int32_t *l_1354 = &g_630.f1;
        int i;
        if ((safe_lshift_func_int16_t_s_s(((p_10 > (l_1177 != ((*l_1178) = &g_841))) , 6L), 0)))
        { 
            return l_1180;
        }
        else
        { 
            int16_t *l_1188 = &g_884;
            int32_t l_1193 = 0x0DC035C8L;
            int32_t *l_1194 = &g_206.f1;
            int32_t *l_1195[6];
            uint32_t l_1215 = 0UL;
            uint8_t l_1230[7] = {9UL,9UL,9UL,9UL,9UL,9UL,9UL};
            uint64_t l_1246 = 7UL;
            uint16_t l_1253 = 65527UL;
            int i;
            for (i = 0; i < 6; i++)
                l_1195[i] = &g_106;
            l_1196 &= ((*l_1194) ^= (safe_div_func_uint16_t_u_u((((**g_667) || (safe_mul_func_int8_t_s_s(p_9, l_1185))) != ((((safe_rshift_func_int16_t_s_s(0x9D28L, (((*l_1188) |= (p_9 | ((*l_1177) ^= 0x7B09C0A6L))) , ((safe_div_func_uint8_t_u_u(((l_1191 != &l_1192) > l_1185), (*g_47))) , p_9)))) , l_1193) || l_1185) & p_9)), (***g_698))));
            (*g_86) = (void*)0;
            for (g_125 = 14; (g_125 < 26); ++g_125)
            { 
                uint8_t **l_1199[5][3] = {{(void*)0,&g_395,&g_395},{(void*)0,(void*)0,&g_395},{&g_395,(void*)0,&g_395},{&g_395,(void*)0,&g_395},{&g_395,&g_395,(void*)0}};
                int32_t l_1214[1];
                uint16_t l_1240 = 0xCD19L;
                union U1 l_1269 = {0xCB2F48DBL};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1214[i] = 0L;
                for (g_841 = 0; (g_841 <= 1); g_841 += 1)
                { 
                    int32_t l_1216 = 0L;
                    int32_t l_1220 = (-1L);
                    int32_t l_1221[4][6][7] = {{{0xA1E976DEL,0L,0xF6DF82BDL,0x449F4214L,0x9397198AL,(-1L),(-10L)},{(-10L),0xE0AA4845L,1L,0L,(-1L),2L,0x6E594E5FL},{(-1L),3L,0x66821A2FL,6L,(-8L),0L,0L},{6L,1L,0L,0xE046B9F3L,0L,1L,6L},{0L,(-8L),0xE3ECA98AL,0L,1L,(-9L),0x5BCA7FC0L},{0x9F60D082L,1L,0x5AC9D695L,6L,(-9L),0x9C3A4677L,0x9E5EF1D6L}},{{1L,0x413346C3L,0xE3ECA98AL,3L,3L,(-1L),0xF6DF82BDL},{0x4D22DF30L,0x9F60D082L,0L,0x43D302E3L,0x38CDDCA2L,0x38CDDCA2L,0x43D302E3L},{0x66821A2FL,(-1L),0x66821A2FL,0x413346C3L,(-10L),0L,(-1L)},{0xE046B9F3L,1L,1L,(-9L),(-1L),(-1L),1L},{0xE3ECA98AL,0x413346C3L,1L,1L,6L,0L,0xD794796BL},{0x43D302E3L,0xC2FC15FDL,2L,0L,0x5AC9D695L,(-9L),0x6EE7B2B3L}},{{6L,0L,(-8L),(-8L),0L,6L,0x449F4214L},{1L,0x9F60D082L,0x7851203CL,(-1L),0x43D302E3L,2L,(-10L)},{1L,(-9L),0x5BCA7FC0L,0x9397198AL,(-1L),0xC032A0C0L,3L},{(-10L),0x9F60D082L,0x38CDDCA2L,1L,2L,0xE0AA4845L,0x9E5EF1D6L},{0x5BCA7FC0L,0L,(-9L),0L,3L,0L,(-9L)},{0xC2FC15FDL,0xC2FC15FDL,(-1L),0x6EE7B2B3L,0x9E5EF1D6L,1L,1L}},{{0L,0x413346C3L,0xC032A0C0L,6L,0xD794796BL,0xF6DF82BDL,(-10L)},{0x6EE7B2B3L,1L,(-4L),6L,0x9E5EF1D6L,0L,0xD92026B6L},{4L,4L,0xF6DF82BDL,(-9L),3L,0xA1E976DEL,0xA1E976DEL},{2L,(-1L),1L,(-1L),2L,0xD92026B6L,0L},{4L,3L,4L,0L,(-1L),(-10L),0xF6DF82BDL},{0xAC2FB019L,1L,0x5AC9D695L,0xE4F4A90EL,0x43D302E3L,1L,1L}}};
                    int i, j, k;
                    (*l_1194) = ((p_9 & ((**g_667) ^= ((((void*)0 == l_1199[1][2]) < ((--(*g_694)) , (((p_9 & (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(1L, ((safe_mul_func_uint16_t_u_u((((*l_1188) = g_206.f2) != (safe_rshift_func_uint8_t_u_s((((*g_47) |= l_1185) > 0x66L), 6))), 1L)) == (*g_240)))) , l_1214[0]) != l_1214[0]), 0UL)) >= (****g_697)), g_391[0])) && p_10), 3))) | l_1215) == 0xBFD70E49L))) != p_10))) && p_9);
                    l_1230[5]--;
                    l_1227[0][0] = ((g_1149[1][0][0] = (0x77E112F0AFD5A2A9LL ^ (safe_add_func_uint32_t_u_u((+(((safe_mod_func_uint8_t_u_u(p_9, (((**g_394) = (0x2D382AE1L != (((safe_rshift_func_uint8_t_u_u(l_1214[0], (((p_9 | 249UL) && 0UL) != p_9))) >= (-8L)) != 1UL))) || l_1240))) , &g_288) == (void*)0)), g_514)))) ^ p_9);
                    g_87[g_841] = ((((**g_667) = p_10) > ((((p_9 ^ ((((safe_rshift_func_int16_t_s_s(g_282[3], 1)) <= (p_10 >= (((0UL & l_1240) | ((safe_unary_minus_func_int8_t_s(0x21L)) ^ g_316)) < l_1246))) , p_10) , 0xB8E907EDAC9C1B0ELL)) , l_1214[0]) , l_1225) >= 0x05C7L)) , &l_1193);
                }
                for (g_106 = 0; (g_106 == (-12)); g_106 = safe_sub_func_int64_t_s_s(g_106, 6))
                { 
                    int8_t l_1249 = 0x6FL;
                    int32_t l_1250 = (-1L);
                    int32_t l_1251 = 0x5364B347L;
                    int32_t l_1252 = 4L;
                    uint32_t *l_1270 = &g_887;
                    l_1253--;
                    if (l_1229)
                        break;
                    (*l_1194) |= (safe_lshift_func_uint16_t_u_u(0x79DAL, ((((((l_1223 >= l_1214[0]) , ((((*l_1270) = (safe_add_func_int16_t_s_s(((l_1260 == (safe_div_func_int64_t_s_s(((**g_667) ^= ((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_div_func_uint64_t_u_u((l_1269 , 0x471C77FE698051A7LL), (*g_240))) ^ p_10), l_1240)), 5)) && 0x14L)), (-1L)))) , l_1222), 0xADD9L))) , p_9) , 0xAC66L)) && p_9) > p_9) , l_1249) && l_1223)));
                }
                l_1271 = (void*)0;
                (*g_86) = &l_1214[0];
                ++l_1272;
            }
        }
        for (g_630.f1 = (-25); (g_630.f1 != 7); g_630.f1 = safe_add_func_uint16_t_u_u(g_630.f1, 8))
        { 
            int32_t *l_1289 = &l_1222;
            int8_t l_1290 = 0xA9L;
            uint16_t * const ***l_1307 = (void*)0;
            uint16_t * const ****l_1306 = &l_1307;
            uint16_t *****l_1309 = &g_950;
            if ((0xC31DL > ((*g_668) <= (safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((((*g_395)++) && p_10), (-8L))) ^ (safe_rshift_func_uint16_t_u_s(((((l_1290 = ((*l_1289) = 0xC85CC821L)) || p_9) != (&g_950 == l_1291)) > p_9), g_840))), g_339)), 0x00A8456FAA21DF9ALL)))))
            { 
                int32_t l_1298 = (-1L);
                int8_t l_1304 = 1L;
                int32_t **l_1305 = &l_1271;
                uint16_t * const ****l_1308[1][1][5];
                struct S0 ***l_1315 = (void*)0;
                struct S0 ****l_1314 = &l_1315;
                int32_t *l_1319 = (void*)0;
                int32_t *l_1320 = &g_206.f1;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_1308[i][j][k] = &l_1307;
                    }
                }
                for (g_125 = 26; (g_125 > (-13)); --g_125)
                { 
                    uint32_t l_1299[2][4][7] = {{{3UL,1UL,1UL,0x74DD298EL,1UL,0x74DD298EL,1UL},{4294967295UL,4294967295UL,0xAA9CB499L,2UL,0xAA9CB499L,4294967295UL,4294967295UL},{0x42B97981L,1UL,0xBA452315L,1UL,0x42B97981L,0x5E1FE609L,1UL},{0UL,0x75669C04L,0UL,0xAA9CB499L,0xAA9CB499L,0UL,0x75669C04L}},{{1UL,4294967292UL,0xBA452315L,4294967295UL,1UL,1UL,1UL},{0UL,0xAA9CB499L,0xAA9CB499L,0UL,0x75669C04L,0UL,0xAA9CB499L},{0x42B97981L,0x5E1FE609L,1UL,4294967295UL,1UL,0x5E1FE609L,0x42B97981L},{4294967295UL,0xAA9CB499L,2UL,0xAA9CB499L,4294967295UL,4294967295UL,0xAA9CB499L}}};
                    uint16_t l_1303 = 0xED23L;
                    int16_t *l_1310 = &g_176[1];
                    int32_t *l_1313 = &l_1219;
                    int i, j, k;
                    l_1304 = (p_9 <= ((((((safe_mod_func_int64_t_s_s(((**g_667) = ((((*g_240) = (((l_1298 && 0x63C4ACEBL) || l_1299[1][0][1]) >= (l_1300 <= ((safe_mul_func_int16_t_s_s(0x40A3L, 65533UL)) >= 0x19L)))) > p_10) > p_10)), p_9)) <= l_1303) , p_9) != (*l_1289)) >= l_1223) == 65535UL));
                    (*l_1289) = 0x739E1370L;
                    if (p_9)
                        continue;
                    l_1225 ^= ((((((void*)0 != l_1305) >= (((l_1308[0][0][2] = l_1306) == (l_1309 = &g_950)) , (((*l_1310) = 1L) || (safe_rshift_func_uint8_t_u_u(((*g_395) = ((4L ^ ((void*)0 == &l_1228)) ^ p_10)), 5))))) <= (*l_1289)) >= 0x59L) && p_10);
                    l_1313 = l_1289;
                }
                (*l_1305) = (void*)0;
                (*l_1289) = ((void*)0 == l_1314);
                if (p_10)
                    continue;
                (*l_1320) &= (safe_lshift_func_int16_t_s_u((*l_1289), (p_9 == (!((*l_1289) == g_391[4])))));
            }
            else
            { 
                int8_t *l_1321[6][4][7] = {{{&g_48,&l_1290,&l_1260,&g_48,&g_48,(void*)0,(void*)0},{&l_1260,&l_1260,&g_48,&l_1260,&l_1260,&g_48,&g_110[4]},{&g_110[4],&l_1260,(void*)0,(void*)0,&g_110[4],(void*)0,&g_48},{&l_1260,&l_1290,&g_110[4],&l_1260,&g_48,&g_48,(void*)0}},{{&g_48,&l_1290,&g_48,&g_110[4],&l_1260,&g_48,(void*)0},{&l_1260,(void*)0,(void*)0,&g_110[4],(void*)0,&g_48,&l_1290},{&g_48,&g_48,&g_48,(void*)0,(void*)0,&g_48,&g_48},{&l_1290,(void*)0,(void*)0,&g_48,(void*)0,&g_110[4],&l_1260}},{{&l_1290,&l_1260,(void*)0,&l_1260,(void*)0,(void*)0,(void*)0},{&g_110[4],&l_1260,&g_48,&g_48,&l_1260,&g_110[4],&l_1290},{(void*)0,(void*)0,&g_48,(void*)0,&g_110[4],&l_1260,&l_1260},{&l_1260,(void*)0,(void*)0,&g_110[4],&g_48,&l_1260,&g_48}},{{&g_110[4],(void*)0,(void*)0,&g_110[4],&l_1260,(void*)0,(void*)0},{&g_110[4],&l_1260,&g_48,(void*)0,&l_1290,&l_1260,&g_48},{&l_1260,&l_1260,(void*)0,&l_1290,(void*)0,&l_1290,(void*)0},{(void*)0,(void*)0,&g_48,&g_48,&l_1260,&l_1290,&g_48}},{{&g_110[4],&g_48,&g_48,(void*)0,&l_1260,&l_1260,&l_1260},{&l_1290,(void*)0,&l_1260,&g_48,&l_1260,(void*)0,&l_1290},{&l_1290,&l_1290,&g_110[4],&g_48,(void*)0,&l_1260,(void*)0},{&g_48,&g_48,&l_1260,(void*)0,&l_1290,&l_1260,&l_1260}},{{&l_1260,&g_48,&g_110[4],&g_48,&l_1260,&g_110[4],&g_48},{&g_48,&g_48,&l_1260,&l_1290,&g_48,(void*)0,&l_1290},{&g_48,&g_48,&g_48,(void*)0,&g_110[4],&g_110[4],(void*)0},{&g_48,&l_1290,&g_48,&g_110[4],&l_1260,&g_48,(void*)0}}};
                int i, j, k;
                return &g_110[4];
            }
            (*l_1289) &= (safe_sub_func_uint64_t_u_u((*g_240), p_9));
        }
        for (g_59 = 1; (g_59 <= 5); g_59 += 1)
        { 
            const int8_t *l_1325 = &g_110[2];
            int32_t l_1328[1];
            uint16_t l_1343 = 0UL;
            int i;
            for (i = 0; i < 1; i++)
                l_1328[i] = 0xE5FCB6BAL;
            for (l_1219 = 5; (l_1219 >= 1); l_1219 -= 1)
            { 
                int8_t **l_1326 = &l_1180;
                int32_t l_1327 = 0xCD8C4B5BL;
                uint64_t ****l_1331 = &l_1329;
                int32_t l_1334[1];
                int32_t *l_1335 = &l_1223;
                int32_t *l_1336 = (void*)0;
                int32_t *l_1337 = &l_1224;
                int32_t *l_1338[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1334[i] = 0x690D3B50L;
                for (i = 0; i < 1; i++)
                    l_1338[i] = (void*)0;
                (*l_1331) = ((((((l_1327 = ((l_1324 == l_1324) < (g_337[l_1219] > (l_1325 == ((*l_1326) = ((*g_240) , &g_110[4])))))) , (((1UL ^ p_9) < p_10) >= l_1328[0])) , (-4L)) , 0xF586L) , p_10) , l_1329);
                for (g_241 = 0; (g_241 < 49); g_241++)
                { 
                    l_1328[0] &= p_9;
                }
                ++l_1343;
            }
            for (g_884 = 4; (g_884 >= 1); g_884 -= 1)
            { 
                int32_t *l_1355 = &l_1225;
                for (g_206.f0 = 0; (g_206.f0 <= 4); g_206.f0 += 1)
                { 
                    int32_t *l_1348 = &l_1219;
                    union U1 l_1349[4][5] = {{{0UL},{0UL},{0x645FEDD0L},{0UL},{0UL}},{{0x57E4EADEL},{0x8FDCFF17L},{0x57E4EADEL},{0x57E4EADEL},{0x8FDCFF17L}},{{0UL},{6UL},{6UL},{0UL},{6UL}},{{0x8FDCFF17L},{0x8FDCFF17L},{0xEE3E037DL},{0x8FDCFF17L},{0x8FDCFF17L}}};
                    int i, j;
                    (*l_1348) = (((safe_rshift_func_int8_t_s_u(g_282[g_206.f0], (((*l_1324) = l_1348) != (l_1349[1][2] , l_1348)))) || ((((--g_282[g_206.f0]) | (((*g_668) <= 0x2B1E9274C99BE7AALL) , (safe_add_func_int16_t_s_s(g_840, p_10)))) ^ p_9) <= (**g_88))) != (*g_395));
                    l_1355 = l_1354;
                    (*g_86) = (void*)0;
                }
            }
        }
    }
    for (g_82 = (-23); (g_82 >= (-12)); g_82++)
    { 
        int8_t l_1365[6][4][2] = {{{0x73L,(-1L)},{6L,0xFFL},{6L,(-1L)},{0x73L,6L}},{{(-1L),0xFFL},{0xE9L,0xE9L},{0x73L,0xE9L},{0xE9L,0xFFL}},{{(-1L),6L},{0x73L,(-1L)},{6L,0xFFL},{6L,(-1L)}},{{0x73L,6L},{(-1L),0xFFL},{0xE9L,0x73L},{(-1L),0x73L}},{{0x73L,0xD2L},{0xFFL,(-3L)},{(-1L),0xFFL},{(-3L),0xD2L}},{{(-3L),0xFFL},{(-1L),(-3L)},{0xFFL,0xD2L},{0x73L,0x73L}}};
        int32_t l_1366[6][4][6] = {{{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)}},{{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)}},{{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)}},{{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)}},{{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)}},{{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)},{0xDC272636L,(-1L),0xDC272636L,(-1L),0xDC272636L,(-1L)}}};
        int i, j, k;
        for (g_886 = (-15); (g_886 != 0); g_886 = safe_add_func_uint16_t_u_u(g_886, 5))
        { 
            int32_t *l_1360 = &l_1224;
            int32_t *l_1361 = &g_206.f1;
            int32_t *l_1362 = &g_630.f1;
            int32_t *l_1363 = &l_1217;
            int32_t *l_1364[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1364[i] = &l_1219;
            --l_1367[1][3][5];
            if (p_10)
                continue;
        }
    }
    (*g_88) = &l_1196;
    return l_1180;
}



static int16_t  func_16(const uint32_t  p_17, int8_t * p_18, int8_t * p_19, const int8_t * p_20)
{ 
    uint32_t l_896[2];
    struct S0 l_903 = {0UL,2L,-8L,4294967293UL,0x9ACEB539689EF21ALL,0x3BL,1UL};
    union U1 l_904 = {0x8A8F6C36L};
    union U1 **l_905 = &g_284;
    uint16_t l_926[2][3];
    int32_t l_957 = 0xCC793B04L;
    int32_t l_958 = (-1L);
    const int16_t l_974 = (-5L);
    int32_t *l_980 = &g_630.f1;
    int32_t l_988 = 5L;
    int32_t l_990 = (-3L);
    int8_t l_991[2];
    int32_t l_992 = 1L;
    int32_t l_993 = 0x779ED60FL;
    int32_t l_995 = 0L;
    int32_t l_996 = (-1L);
    int32_t l_997 = 0L;
    int32_t l_998 = 1L;
    int32_t l_999 = 7L;
    int32_t l_1000 = 0xDC65CE60L;
    int32_t l_1003 = (-1L);
    int32_t l_1005 = (-2L);
    int32_t l_1006 = 0x97E40A45L;
    int32_t l_1008[4][3][6] = {{{0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL},{(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL},{0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL}},{{(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL},{0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL},{(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL}},{{0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL},{(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL},{0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL}},{{(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL},{0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL,0x6636D22AL,0x8A0B70FDL},{(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL,(-10L),0x8A0B70FDL}}};
    uint16_t ****l_1046 = (void*)0;
    uint16_t ** const *l_1069[3][2][5] = {{{&g_693[0][1][4],&g_693[0][0][4],&g_693[1][4][0],&g_693[0][2][2],&g_693[1][4][0]},{&g_693[1][4][0],&g_693[1][4][0],&g_693[0][0][1],&g_693[0][2][2],&g_693[0][0][4]}},{{&g_693[0][0][4],&g_693[0][1][4],&g_693[0][1][4],&g_693[0][0][4],&g_693[1][4][0]},{&g_693[0][0][4],&g_693[0][2][2],&g_693[0][0][4],&g_693[0][0][4],&g_693[0][2][2]}},{{&g_693[1][4][0],&g_693[0][1][4],&g_693[0][0][4],&g_693[0][0][1],&g_693[0][0][1]},{&g_693[0][1][4],&g_693[1][4][0],&g_693[0][1][4],&g_693[0][0][4],&g_693[0][0][1]}}};
    int16_t l_1107 = 0x9C51L;
    uint16_t l_1119 = 0xD2B5L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_896[i] = 0x0AA18723L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_926[i][j] = 2UL;
    }
    for (i = 0; i < 2; i++)
        l_991[i] = 0xAEL;
    if (p_17)
    { 
        int32_t *l_892 = (void*)0;
        int32_t *l_893 = &g_206.f1;
        int32_t *l_894 = &g_459;
        int32_t *l_895[6] = {&g_459,&g_459,&g_459,&g_459,&g_459,&g_459};
        int64_t ***l_902 = &g_667;
        uint16_t *l_932 = &l_926[0][2];
        int32_t ****l_948 = (void*)0;
        int32_t l_965 = 0x6F881C7EL;
        int32_t l_1002 = (-6L);
        int64_t l_1007 = 0xF775766965E81CB3LL;
        uint32_t l_1094 = 2UL;
        struct S0 l_1102 = {0xAE2F0F71L,-1L,0x5BEF40F0L,0UL,0x9B7A6C1C948D9985LL,0x31L,9UL};
        int32_t *l_1111 = &g_1091[1][0][1];
        int32_t **l_1110 = &l_1111;
        const uint16_t *****l_1118 = &g_697;
        int i;
lbl_1108:
        l_896[1]--;
        if (((((safe_lshift_func_uint16_t_u_u((*l_893), ((((((((*p_18) || (*p_18)) > (((!(&g_667 == l_902)) <= (((l_896[1] , (l_903 , 0xEDDA7FBCL)) ^ p_17) >= 18446744073709551615UL)) , p_17)) , l_904) , 0x43FE619AL) < l_903.f1) >= l_904.f0) , (*g_700)))) < 1UL) ^ l_903.f3) >= p_17))
        { 
            uint32_t l_925 = 18446744073709551615UL;
            uint32_t l_933 = 18446744073709551614UL;
            uint16_t ****l_940 = (void*)0;
            uint16_t ***** const l_939[1] = {&l_940};
            int32_t l_953 = 0xD9BD35A9L;
            int32_t l_954 = 0x65E5A978L;
            int32_t l_959 = (-2L);
            int64_t l_964[4] = {0x3BD36DD779C80FDBLL,0x3BD36DD779C80FDBLL,0x3BD36DD779C80FDBLL,0x3BD36DD779C80FDBLL};
            int64_t l_966 = 0x9550CF067976C581LL;
            int32_t l_987 = 0x683146DFL;
            int32_t l_989 = 0L;
            int32_t l_994 = 0L;
            int32_t l_1001 = 0x3D08D363L;
            int32_t l_1004[1][3];
            uint64_t l_1009 = 7UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1004[i][j] = 0x25BAF5B6L;
            }
            if (((g_906 = l_905) != &g_284))
            { 
                union U1 l_911 = {4294967295UL};
                int32_t l_955 = 0x524EBB96L;
                int32_t l_956 = 0x1352AD07L;
                int32_t l_960 = 0x8BD204B2L;
                uint64_t l_961 = 18446744073709551615UL;
                for (g_575 = (-21); (g_575 < 20); g_575 = safe_add_func_int16_t_s_s(g_575, 5))
                { 
                    union U1 l_924 = {0xEBA0AFCAL};
                    int16_t *l_927 = &g_884;
                    (*g_88) = (*g_88);
                    if (p_17)
                        break;
                    (*l_894) = (safe_add_func_uint16_t_u_u(65533UL, (l_911 , (((-1L) == 0x9638L) >= p_17))));
                    (*l_893) |= (((*l_927) = ((((safe_mod_func_int32_t_s_s((0xA8B15592C592F4CDLL < (l_903.f1 ^= (((p_17 > ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(((-6L) <= (safe_rshift_func_int8_t_s_u(((0x61F9L && (p_17 & (safe_lshift_func_uint8_t_u_u(1UL, (((l_924 , l_924.f0) , (void*)0) == (void*)0))))) | (*g_668)), 2))), 8)), (*p_19))), l_925)) != 0xAB7007AC02083058LL)) , l_926[0][0]) != 0x96A3L))), p_17)) > p_17) , (*g_394)) != p_19)) == 0L);
                    (*l_894) = ((safe_sub_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((*g_668), (*l_893))) || 0L), ((*g_395) == ((void*)0 != l_932)))) , ((l_911 , &g_284) == (void*)0));
                }
                if (l_933)
                { 
                    int32_t ****l_945 = &g_621;
                    int32_t *****l_946[7][2] = {{&l_945,&l_945},{&l_945,&l_945},{&l_945,&l_945},{&l_945,&l_945},{&l_945,&l_945},{&l_945,&l_945},{&l_945,&l_945}};
                    int i, j;
                    (*l_893) = (((safe_mod_func_int8_t_s_s((l_903 , (~((safe_mul_func_int64_t_s_s(1L, ((l_939[0] != (func_24((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((g_947[3][0] = l_945) == (l_948 = (void*)0)), p_17)), p_17)), (*g_668), g_459) , g_949)) >= 65532UL))) < 0x4B1AL))), 0x6DL)) > p_17) , g_952);
                    l_954 ^= (l_953 = ((*l_893) = p_17));
                    --l_961;
                    return p_17;
                }
                else
                { 
                    uint16_t l_967 = 0xCAC0L;
                    int32_t l_975 = 0xF5C294BFL;
                    l_967++;
                    (*l_894) &= (safe_mod_func_uint64_t_u_u(p_17, (4294967295UL && ((*g_240) , (((*p_18) , 0x94F07019L) | (((**g_394) == (safe_sub_func_int32_t_s_s(((*l_893) = ((*g_47) , p_17)), p_17))) , l_974))))));
                    l_975 = l_967;
                }
            }
            else
            { 
                uint32_t l_977[4][2][7] = {{{0xD975C447L,0x6174766EL,0xED35A66BL,0xF7EC426DL,0xF7EC426DL,0xED35A66BL,0x6174766EL},{0x2814274DL,0x502FB053L,0xBEABEF0DL,18446744073709551612UL,5UL,0x4D5170F4L,18446744073709551610UL}},{{0xD975C447L,0x6174766EL,0xED35A66BL,0xF7EC426DL,0xF7EC426DL,0xED35A66BL,0x6174766EL},{0x2814274DL,0x502FB053L,0xBEABEF0DL,18446744073709551612UL,5UL,0x4D5170F4L,18446744073709551610UL}},{{0xD975C447L,0x6174766EL,0xED35A66BL,0xF7EC426DL,0xF7EC426DL,0xED35A66BL,0x6174766EL},{0x2814274DL,0x502FB053L,0xBEABEF0DL,18446744073709551612UL,5UL,0x4D5170F4L,18446744073709551610UL}},{{0xD975C447L,0x6174766EL,0xED35A66BL,0xF7EC426DL,0xF7EC426DL,0xED35A66BL,0x6174766EL},{0x2814274DL,0x502FB053L,0xBEABEF0DL,18446744073709551612UL,5UL,0x4D5170F4L,18446744073709551610UL}}};
                uint64_t **l_986 = &g_240;
                int i, j, k;
                for (g_884 = 0; (g_884 <= 3); g_884 += 1)
                { 
                    int i;
                    l_977[1][0][5] = (+l_964[g_884]);
                    (*l_893) = ((p_17 || p_17) == l_977[2][1][1]);
                }
                for (l_953 = 0; (l_953 > 4); ++l_953)
                { 
                    (*g_88) = l_980;
                }
                (*l_893) |= (((18446744073709551615UL < (safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s((*l_980), ((!((l_977[1][0][5] || p_17) & 0xAA6D6E852F3EEC5BLL)) , ((void*)0 != l_986)))), (*g_668)))) != (*l_980)) >= p_17);
            }
            ++l_1009;
            (*g_86) = &l_997;
        }
        else
        { 
            uint16_t l_1026 = 0x9FF6L;
            const int32_t l_1035 = (-2L);
            uint16_t * const ***l_1044 = (void*)0;
            int32_t l_1048 = 0x33DC6247L;
            struct S0 **l_1071 = &g_629;
            struct S0 ***l_1070 = &l_1071;
            int32_t l_1092 = 0x2BC93914L;
            uint8_t *l_1093 = &g_366;
            uint8_t l_1109 = 0xC1L;
            for (g_887 = 0; (g_887 != 48); g_887 = safe_add_func_uint8_t_u_u(g_887, 6))
            { 
                union U1 l_1025 = {0UL};
                int32_t l_1047 = 0x2FACABEEL;
                if (((safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((--(*l_932)), (safe_rshift_func_uint8_t_u_s(p_17, (safe_rshift_func_uint8_t_u_u(((*g_395) = (~(l_1025 , ((l_1026 , ((safe_mod_func_uint8_t_u_u((*g_395), (1L ^ (safe_div_func_uint8_t_u_u(((g_884 < (safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_s(0L, l_1026)) , g_125) || 0xDF32L) ^ 0x5D8E752F0D5FF3F9LL), p_17))) , p_17), l_1035))))) >= (**g_667))) && 2L)))), p_17)))))) , 0xB46AL), l_1035)) > 0x90L))
                { 
                    if (p_17)
                        break;
                }
                else
                { 
                    int32_t l_1043 = 0xD8753BF6L;
                    uint16_t * const ****l_1045 = &l_1044;
                    int32_t * const l_1051 = &l_903.f1;
                    l_1048 |= ((*l_893) |= (safe_mod_func_int32_t_s_s(((*l_894) = ((safe_mul_func_int8_t_s_s((*p_19), ((*p_19) , (*l_980)))) > ((+((l_1043 = (safe_lshift_func_uint8_t_u_u(l_1025.f0, 5))) != (((*l_1045) = l_1044) == ((*g_949) = l_1046)))) , 0xB39E620DL))), l_1047)));
                    (*l_980) = (safe_add_func_int8_t_s_s(((l_1025.f0 == ((l_1051 != (void*)0) ^ (safe_div_func_uint16_t_u_u(((*l_1051) & ((*l_894) ^= (safe_add_func_uint64_t_u_u(1UL, ((((*g_240) = (safe_sub_func_int16_t_s_s((-9L), ((*g_694) = ((*l_1051) & p_17))))) ^ (-1L)) == 0xA071L))))), g_176[0])))) || 1UL), (*l_1051)));
                }
            }
            (*l_893) = p_17;
            for (l_958 = 0; (l_958 >= (-10)); l_958 = safe_sub_func_uint16_t_u_u(l_958, 2))
            { 
                uint64_t **l_1064 = &g_240;
                int32_t l_1095 = 0x3B1820BFL;
                for (g_583 = 0; (g_583 == 25); g_583 = safe_add_func_uint8_t_u_u(g_583, 3))
                { 
                    uint64_t **l_1062 = &g_240;
                    uint64_t ***l_1063 = &l_1062;
                    uint64_t ***l_1065 = &l_1064;
                    struct S0 ****l_1072 = (void*)0;
                    struct S0 ****l_1073 = &l_1070;
                    uint64_t *l_1074 = (void*)0;
                    uint16_t l_1075 = 0x8A31L;
                    union U1 l_1088 = {0x94B85AF0L};
                    (*l_980) = 0xA63D04BBL;
                    (*l_894) = (((((*l_1063) = l_1062) != ((*l_1065) = ((*g_240) , l_1064))) || ((*g_395) = (0L < (l_1048 ^= (((*l_1073) = ((safe_rshift_func_int16_t_s_u((p_17 >= (*g_240)), 9)) , (((((((safe_unary_minus_func_uint16_t_u(((l_1069[1][0][2] == (void*)0) , p_17))) == 4294967295UL) , 0x6438L) < p_17) , p_17) , l_1026) , l_1070))) == &g_334))))) > p_17);
                    (*l_894) = 0xB2CFA89CL;
                    (*l_893) = (l_1075 != ((((safe_div_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_div_func_uint64_t_u_u((((safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(((*p_19) | (g_1091[1][0][1] = ((*p_18) , (((*g_47) = (((g_391[4] , g_630.f4) == (l_1088 , (((safe_sub_func_uint64_t_u_u(l_1075, (*g_668))) >= p_17) ^ 4294967292UL))) ^ 0x05C7L)) <= l_1026)))), l_1026)) ^ 0x04L), l_1092)) , 0x29L) != 0x59L), (*l_894))), p_17)), (*g_395))) , p_18) != l_1093), l_1094)) ^ (**g_667)) , l_1095) <= (*l_894)));
                    l_1092 = ((*l_980) |= (((*g_668) , (*l_894)) == ((safe_lshift_func_uint16_t_u_u((*l_894), (((*g_240) = 0x505966FC0C424A72LL) & (-1L)))) && l_1088.f0)));
                }
                for (l_1095 = 0; (l_1095 <= 1); l_1095 += 1)
                { 
                    int16_t *l_1103 = (void*)0;
                    int16_t *l_1104 = (void*)0;
                    int16_t *l_1105 = (void*)0;
                    int32_t l_1106 = 0x9C5AFF38L;
                    int i;
                    (*l_894) = (safe_mod_func_uint16_t_u_u(((((*l_932) ^= l_896[l_1095]) & g_218[0]) & ((safe_lshift_func_uint16_t_u_u(1UL, (((((l_1102 , (***g_698)) == 0x78C8L) & (l_1106 = ((*l_980) = g_106))) , (void*)0) == &g_395))) < p_17)), l_903.f0));
                    if (p_17)
                        continue;
                    l_1092 = l_1107;
                    if (p_17)
                        continue;
                    return p_17;
                }
                if (l_1095)
                { 
                    if (p_17)
                        break;
                    return l_1095;
                }
                else
                { 
                    if (g_241)
                        goto lbl_1108;
                    return l_1109;
                }
            }
            l_1110 = l_1110;
        }
        for (l_1000 = (-14); (l_1000 < (-22)); --l_1000)
        { 
            union U1 *l_1117[5][7][1] = {{{&l_904},{&g_288},{&g_288},{&l_904},{&g_288},{&l_904},{&g_288}},{{&g_288},{&l_904},{&g_288},{&l_904},{&g_288},{&g_288},{&l_904}},{{&g_288},{&l_904},{&g_288},{&g_288},{&l_904},{&g_288},{&l_904}},{{&g_288},{&g_288},{&l_904},{&g_288},{&l_904},{&g_288},{&g_288}},{{&l_904},{&g_288},{&l_904},{&g_288},{&g_288},{&l_904},{&g_288}}};
            int i, j, k;
            for (l_992 = 0; (l_992 <= 1); l_992 += 1)
            { 
                int32_t ***l_1116 = &g_1114;
                int i;
                (*l_1116) = g_1114;
                l_1117[1][3][0] = (*l_905);
                return l_896[l_992];
            }
        }
        (*l_893) = (l_1118 == l_1118);
        l_1119--;
    }
    else
    { 
        return (*l_980);
    }
    return (*l_980);
}



static struct S0  func_24(int32_t  p_25, int64_t  p_26, uint32_t  p_27)
{ 
    int32_t *l_870 = &g_59;
    int32_t *l_871 = &g_630.f1;
    int32_t *l_872 = (void*)0;
    int32_t *l_873 = &g_206.f1;
    int32_t l_874 = (-7L);
    int32_t *l_875 = (void*)0;
    int32_t *l_876 = &g_106;
    int32_t l_877 = (-7L);
    int32_t *l_878 = (void*)0;
    int32_t *l_879 = &g_59;
    int32_t *l_880 = &l_874;
    int32_t *l_881 = &g_459;
    int32_t *l_882 = (void*)0;
    int32_t *l_883[5][2] = {{&g_106,&g_206.f1},{(void*)0,&g_106},{&g_206.f1,&g_106},{(void*)0,&g_206.f1},{&g_459,&g_459}};
    struct S0 l_890 = {4294967294UL,-1L,0xD04D9F6AL,4294967287UL,0x6456472166E49510LL,0x5FL,0xBFB2CE93L};
    int i, j;
    p_25 = (-1L);
    g_887--;
    return l_890;
}



static uint32_t  func_30(int64_t  p_31, int8_t * p_32, union U1  p_33, int8_t * const  p_34)
{ 
    for (g_372 = 11; (g_372 <= 17); ++g_372)
    { 
        return p_33.f0;
    }
    return g_630.f0;
}



static const uint16_t  func_44(int8_t * p_45, uint64_t  p_46)
{ 
    const int64_t l_57 = 0x3BC6C2DB602708CDLL;
    int32_t l_865 = (-1L);
    for (p_46 = 17; (p_46 == 8); p_46 = safe_sub_func_uint64_t_u_u(p_46, 1))
    { 
        uint32_t l_54[4][6] = {{0xA9B22354L,0x2097756EL,3UL,0x2097756EL,0xA9B22354L,0xA9B22354L},{0x38E0EA62L,0x2097756EL,0x2097756EL,0x38E0EA62L,4294967293UL,0x38E0EA62L},{0x38E0EA62L,4294967293UL,0x38E0EA62L,0x2097756EL,0x2097756EL,0x38E0EA62L},{0xA9B22354L,0xA9B22354L,0x2097756EL,3UL,0x2097756EL,0xA9B22354L}};
        int32_t *l_58 = &g_59;
        int32_t *l_77 = &g_59;
        int32_t **l_76 = &l_77;
        union U1 l_304[3][5] = {{{0UL},{1UL},{0UL},{0UL},{1UL}},{{0UL},{1UL},{0UL},{0UL},{1UL}},{{0UL},{1UL},{0UL},{0UL},{1UL}}};
        int i, j;
        (*l_58) = ((safe_sub_func_int8_t_s_s(l_54[3][3], (*p_45))) || (safe_sub_func_int8_t_s_s(l_57, l_57)));
        if (g_48)
        { 
            (*l_58) = (*l_58);
            return l_57;
        }
        else
        { 
            int32_t **l_69 = (void*)0;
            int64_t *l_303 = &g_82;
            l_865 ^= func_60(g_2, &g_59, ((*l_303) = func_66((l_58 = &g_59), (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((((g_82 = (((safe_rshift_func_uint8_t_u_u(((void*)0 == l_76), 4)) >= 0xC7C5L) != (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((255UL & (*g_47)) == 0x2A2CA01DC0BF2888LL), 1)), l_57)))) == (-4L)) <= 8UL) || 1L) >= l_57), (*g_47))), (*g_47))))), g_2, l_304[0][1]);
            return (*g_700);
        }
    }
    return l_57;
}



static int32_t  func_60(uint8_t  p_61, int32_t * p_62, int64_t  p_63, uint16_t  p_64, union U1  p_65)
{ 
    union U1 **l_305 = &g_284;
    uint8_t *l_310 = &g_180;
    int32_t l_313[1][2][4] = {{{1L,1L,1L,1L},{1L,1L,1L,1L}}};
    uint8_t *l_314 = &g_315;
    uint64_t *l_328[3];
    uint16_t ***l_333 = (void*)0;
    uint32_t l_418 = 0xA5E1BA66L;
    int32_t ***l_419 = &g_88;
    int16_t *l_420 = &g_176[2];
    int32_t * const l_458 = &g_459;
    int32_t * const *l_457 = &l_458;
    int16_t l_532 = 0x70A0L;
    const int8_t l_609 = (-8L);
    struct S0 *l_628 = &g_206;
    struct S0 **l_627[3];
    union U1 l_635 = {2UL};
    int32_t *l_644[4][3][5];
    struct S0 **l_672 = &g_629;
    uint16_t **l_695 = &g_694;
    uint16_t l_831 = 65526UL;
    int64_t **l_854 = (void*)0;
    uint16_t l_864 = 65535UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_328[i] = &g_100;
    for (i = 0; i < 3; i++)
        l_627[i] = &l_628;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
                l_644[i][j][k] = &l_313[0][0][3];
        }
    }
    (*l_305) = (void*)0;
    return (*p_62);
}



static int64_t  func_66(int32_t * p_67, int32_t  p_68)
{ 
    int8_t l_83[3];
    int32_t l_108 = (-3L);
    int32_t l_126 = 0x922964CBL;
    const int16_t *l_207 = &g_176[1];
    uint32_t l_261 = 18446744073709551615UL;
    int32_t *l_289 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_83[i] = 0xEFL;
lbl_292:
    for (g_82 = 2; (g_82 >= 0); g_82 -= 1)
    { 
        int32_t ***l_90 = &g_88;
        uint64_t *l_99[7][4][6];
        uint64_t l_101[1];
        int8_t l_139[4];
        int32_t **l_271 = (void*)0;
        int32_t l_277 = 0L;
        const int16_t l_283[4][2][5] = {{{5L,0L,5L,(-5L),(-5L)},{0x8B05L,0xA6B4L,0x8B05L,0xD787L,0xD787L}},{{5L,0L,5L,(-5L),(-5L)},{0x8B05L,0xA6B4L,0x8B05L,0xD787L,0xD787L}},{{5L,0L,5L,(-5L),(-5L)},{0x8B05L,0xA6B4L,0x8B05L,0xD787L,0xD787L}},{{5L,0L,5L,(-5L),(-5L)},{0x8B05L,0xA6B4L,0x8B05L,0xD787L,0xD787L}}};
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 6; k++)
                    l_99[i][j][k] = &g_100;
            }
        }
        for (i = 0; i < 1; i++)
            l_101[i] = 0xBF40F8590C99E848LL;
        for (i = 0; i < 4; i++)
            l_139[i] = 0x04L;
        (*p_67) = (((safe_sub_func_int8_t_s_s((l_83[g_82] != ((g_86 == ((*l_90) = g_88)) ^ (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s(p_68, 1)) | (safe_add_func_int8_t_s_s((((*p_67) && (p_68 , ((l_101[0] |= ((safe_div_func_int32_t_s_s((&l_83[g_82] != &g_48), l_83[2])) , 0x031552AE0D08F1B1LL)) <= 0xC8A3317083D4BAF7LL))) ^ p_68), (*g_47)))), 5)))), 0x78L)) , p_68) && g_59);
        for (g_48 = 2; (g_48 >= 0); g_48 -= 1)
        { 
            uint32_t l_109[3];
            uint32_t l_141 = 0x899101CFL;
            int32_t l_159 = 0x82539F82L;
            const int8_t l_172 = 0x97L;
            int32_t l_173 = 0x31F37730L;
            int i;
            for (i = 0; i < 3; i++)
                l_109[i] = 0UL;
            for (g_59 = 1; (g_59 >= 0); g_59 -= 1)
            { 
                int8_t *l_107[6];
                int32_t *l_117 = &l_108;
                int16_t *l_124 = &g_125;
                int8_t l_140 = 0x63L;
                const union U1 l_153 = {2UL};
                int32_t l_174 = 0L;
                int16_t *l_175 = &g_176[3];
                int i;
                for (i = 0; i < 6; i++)
                    l_107[i] = (void*)0;
                p_68 = ((safe_div_func_uint8_t_u_u((((((0x56BCL && ((safe_rshift_func_uint8_t_u_u(l_83[g_48], ((g_100 >= (((-6L) < (((((l_108 = (((g_106 = l_83[0]) , &g_87[g_59]) != (void*)0)) , &g_87[g_59]) != (void*)0) > 0x436F42B88B27CD67LL) , l_109[1])) & g_100)) == p_68))) & 0x323BL)) , g_82) , l_108) || p_68) <= l_83[2]), p_68)) != g_110[4]);
                g_87[g_59] = g_87[g_59];
                g_106 = (safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((((((safe_mod_func_uint16_t_u_u((l_126 = (((*l_117) = (*p_67)) ^ (p_68 == (safe_mul_func_uint16_t_u_u(0x6744L, ((g_110[4] == ((l_109[1] >= (g_2 <= ((safe_rshift_func_int16_t_s_u(((*l_124) |= (safe_rshift_func_uint16_t_u_s(p_68, p_68))), l_109[0])) || g_110[4]))) < (*g_47))) != l_83[1])))))), 0xC800L)) > (-1L)) & g_110[4]) & (*p_67)) <= p_68) > 0x15L), 7)), g_100));
                if ((safe_mul_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(p_68, (safe_lshift_func_int16_t_s_u(((p_68 <= (safe_mul_func_int8_t_s_s((((*g_88) = (*g_88)) != &l_108), (g_2 != ((*l_124) = (((((safe_mod_func_int32_t_s_s((*p_67), 0x2FA5D717L)) && l_139[0]) | l_108) != l_140) , g_106)))))) || l_83[2]), p_68)))) || (*g_47)), g_82)) ^ l_141), 1UL)))
                { 
                    uint16_t l_154 = 0x1EB9L;
                    (*l_117) = l_109[1];
                    p_67 = (*g_88);
                    (*l_117) = (safe_lshift_func_uint16_t_u_u((+g_48), l_83[0]));
                    (*l_117) ^= ((safe_mod_func_uint8_t_u_u(p_68, (safe_rshift_func_int8_t_s_u(((&p_67 != (p_68 , &p_67)) <= ((safe_mod_func_int16_t_s_s(p_68, (safe_add_func_uint16_t_u_u((l_153 , 0xD743L), 5UL)))) | l_154)), 1)))) ^ g_110[4]);
                    return g_82;
                }
                else
                { 
                    int32_t ***l_155[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_155[i] = &g_88;
                    l_126 ^= (l_155[0] == ((+((safe_sub_func_int16_t_s_s((((l_159 = ((*l_124) &= g_110[4])) != (((&p_67 == (void*)0) != (p_68 | 65528UL)) && ((((*l_117) = p_68) || 18446744073709551609UL) < l_141))) <= p_68), p_68)) && g_48)) , &g_86));
                    if ((*p_67))
                        break;
                    g_87[g_59] = &p_68;
                }
                if ((safe_add_func_uint32_t_u_u((p_68 | ((*l_175) = ((safe_rshift_func_int8_t_s_s((((l_173 = (((p_68 != (safe_mod_func_uint64_t_u_u(0x6F3936D73F18804DLL, (l_159 = (safe_mul_func_int16_t_s_s(((*l_124) = g_125), (safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(l_109[1], (p_68 & p_68))) > l_172), 0)))))))) ^ p_68) && 253UL)) || (*g_47)) >= 0x5094A51A48532663LL), 6)) , l_174))), (*p_67))))
                { 
                    uint8_t *l_179 = &g_180;
                    int32_t l_184 = (-6L);
                    (*g_86) = g_87[g_59];
                    l_184 |= (safe_add_func_int16_t_s_s((((*l_179)--) >= (+0UL)), l_108));
                }
                else
                { 
                    int64_t l_187 = 3L;
                    int64_t *l_199 = &g_200;
                    struct S0 *l_201 = (void*)0;
                    struct S0 **l_202 = (void*)0;
                    struct S0 **l_203 = &l_201;
                    struct S0 *l_205[6];
                    struct S0 **l_204 = &l_205[4];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_205[i] = &g_206;
                    g_106 = (safe_add_func_int64_t_s_s(l_187, ((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((0UL <= (((safe_rshift_func_int8_t_s_u(l_187, 1)) | ((safe_rshift_func_uint16_t_u_u((l_187 ^ (~(((*l_199) = ((*g_86) != (void*)0)) == (0xBFL && (*l_117))))), g_59)) <= g_110[1])) == (*p_67))) != 0x1E1FL), l_141)), l_141)) || 0x4FB469CFL)));
                    (*l_204) = ((*l_203) = l_201);
                }
            }
            l_173 ^= ((*p_67) = (-1L));
            if (l_172)
                continue;
        }
        (**l_90) = (*g_88);
        (*p_67) = ((void*)0 != l_207);
        for (g_59 = 0; (g_59 <= 2); g_59 += 1)
        { 
            uint32_t l_210[7][6] = {{1UL,4294967295UL,4294967295UL,1UL,0x297A455DL,0xA6CA5C41L},{0x297A455DL,1UL,4294967295UL,4294967295UL,1UL,0x297A455DL},{0x297A455DL,4294967295UL,0xA6CA5C41L,1UL,1UL,0xA6CA5C41L},{1UL,1UL,0xA6CA5C41L,4294967295UL,0x297A455DL,0x297A455DL},{1UL,4294967295UL,4294967295UL,1UL,0x297A455DL,0xA6CA5C41L},{0x297A455DL,1UL,4294967295UL,4294967295UL,1UL,0x297A455DL},{0x297A455DL,4294967295UL,0xA6CA5C41L,1UL,1UL,0xA6CA5C41L}};
            int32_t *l_211 = (void*)0;
            int32_t *l_212 = &g_106;
            uint16_t *l_217 = &g_218[0];
            uint32_t *l_221 = (void*)0;
            uint32_t *l_222 = &l_210[5][0];
            uint64_t *l_239[2][7][5] = {{{&l_101[0],&l_101[0],&l_101[0],(void*)0,&l_101[0]},{&l_101[0],&l_101[0],&l_101[0],(void*)0,&l_101[0]},{(void*)0,(void*)0,&l_101[0],&l_101[0],(void*)0},{&l_101[0],&l_101[0],&l_101[0],&l_101[0],&l_101[0]},{&l_101[0],&l_101[0],&l_101[0],&l_101[0],&l_101[0]},{(void*)0,(void*)0,&l_101[0],(void*)0,(void*)0},{&l_101[0],(void*)0,&l_101[0],(void*)0,&l_101[0]}},{{&l_101[0],&l_101[0],&l_101[0],(void*)0,&l_101[0]},{(void*)0,&l_101[0],&l_101[0],(void*)0,&l_101[0]},{&l_101[0],(void*)0,&l_101[0],&l_101[0],(void*)0},{&l_101[0],&l_101[0],&l_101[0],&l_101[0],&l_101[0]},{(void*)0,&l_101[0],(void*)0,&l_101[0],&l_101[0]},{&l_101[0],&l_101[0],&l_101[0],&l_101[0],&l_101[0]},{(void*)0,&l_101[0],&l_101[0],&l_101[0],&l_101[0]}}};
            int i, j, k;
        }
    }
    for (l_126 = 0; (l_126 < 23); l_126 = safe_add_func_uint32_t_u_u(l_126, 8))
    { 
        if (g_82)
            goto lbl_292;
    }
    (*p_67) = (safe_div_func_int32_t_s_s((((l_126 , ((safe_lshift_func_uint8_t_u_s(((g_288 , (void*)0) != (void*)0), 2)) ^ ((p_68 && ((*g_47) = ((p_68 | (((((((safe_lshift_func_uint16_t_u_u(g_48, 6)) < g_206.f4) , g_282[2]) || p_68) >= l_108) && 0x55F37536L) != p_68)) , 0L))) | p_68))) > p_68) >= p_68), (*p_67)));
    return g_2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_110[i], "g_110[i]", print_hash_value);

    }
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_176[i], "g_176[i]", print_hash_value);

    }
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_206.f0, "g_206.f0", print_hash_value);
    transparent_crc(g_206.f1, "g_206.f1", print_hash_value);
    transparent_crc(g_206.f2, "g_206.f2", print_hash_value);
    transparent_crc(g_206.f3, "g_206.f3", print_hash_value);
    transparent_crc(g_206.f4, "g_206.f4", print_hash_value);
    transparent_crc(g_206.f5, "g_206.f5", print_hash_value);
    transparent_crc(g_206.f6, "g_206.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_218[i], "g_218[i]", print_hash_value);

    }
    transparent_crc(g_241, "g_241", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_282[i], "g_282[i]", print_hash_value);

    }
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_337[i], "g_337[i]", print_hash_value);

    }
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_380.f0, "g_380.f0", print_hash_value);
    transparent_crc(g_382.f0, "g_382.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_391[i], "g_391[i]", print_hash_value);

    }
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_630.f0, "g_630.f0", print_hash_value);
    transparent_crc(g_630.f1, "g_630.f1", print_hash_value);
    transparent_crc(g_630.f2, "g_630.f2", print_hash_value);
    transparent_crc(g_630.f3, "g_630.f3", print_hash_value);
    transparent_crc(g_630.f4, "g_630.f4", print_hash_value);
    transparent_crc(g_630.f5, "g_630.f5", print_hash_value);
    transparent_crc(g_630.f6, "g_630.f6", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_840, "g_840", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_885, "g_885", print_hash_value);
    transparent_crc(g_886, "g_886", print_hash_value);
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1091[i][j][k], "g_1091[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1149[i][j][k], "g_1149[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1371, "g_1371", print_hash_value);
    transparent_crc(g_1498, "g_1498", print_hash_value);
    transparent_crc(g_1538, "g_1538", print_hash_value);
    transparent_crc(g_1595, "g_1595", print_hash_value);
    transparent_crc(g_1613, "g_1613", print_hash_value);
    transparent_crc(g_1684, "g_1684", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
