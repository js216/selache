// SPDX-License-Identifier: MIT
// cctest_csmith_547de5b0.c --- cctest case csmith_547de5b0 (csmith seed 1417536944)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x527cb569 */
/* @exp_ticks 0xf29a */

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

// Options:   -s 1417536944 -o /tmp/csmith_gen__632effz/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int32_t  f0;
};

struct S1 {
   const uint32_t  f0;
   struct S0  f1;
   uint32_t  f2;
   uint8_t  f3;
   uint64_t  f4;
   int32_t  f5;
   const uint32_t  f6;
};

union U2 {
   uint8_t  f0;
   uint32_t  f1;
};

union U3 {
   struct S1  f0;
   uint8_t  f1;
   uint32_t  f2;
   uint16_t  f3;
};


static struct S0 g_5 = {0x52F76EC7L};
static int32_t g_24 = 0x68F62C4DL;
static int32_t *g_26 = &g_24;
static uint16_t g_40 = 0x709EL;
static int32_t **g_58[3] = {&g_26,&g_26,&g_26};
static uint16_t g_60[2] = {65535UL,65535UL};
static uint16_t *g_59 = &g_60[1];
static uint8_t g_77[6][3][4] = {{{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L}},{{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L}},{{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L}},{{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L}},{{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L}},{{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L},{1UL,0xC2L,1UL,0xC2L}}};
static int16_t g_86[6][4][6] = {{{(-8L),0xF63CL,0xC429L,(-1L),0xAAB0L,1L},{7L,1L,0xEF6AL,0xED55L,0xAAB0L,0x9E04L},{0xE7D7L,0xF63CL,0xE533L,0xE7D7L,0xC429L,4L},{0x0F14L,0xF63CL,0xAAB0L,(-8L),0xAAB0L,0xF63CL}},{{0xED55L,1L,0x997EL,5L,0xAAB0L,0xC429L},{2L,0xF63CL,1L,2L,0xC429L,0xEF6AL},{(-1L),0xF63CL,0x9E04L,0x0F14L,0xAAB0L,0xE533L},{5L,1L,4L,7L,0xAAB0L,0xAAB0L}},{{0xB015L,0xF63CL,0xF63CL,0xB015L,0xC429L,0x997EL},{(-8L),0xF63CL,0xC429L,(-1L),0xAAB0L,1L},{7L,1L,0xEF6AL,0xED55L,0xAAB0L,0x9E04L},{0xE7D7L,0xF63CL,0xE533L,0xE7D7L,0xC429L,4L}},{{0x0F14L,0xF63CL,0xAAB0L,(-8L),0xAAB0L,0xF63CL},{0xED55L,1L,0x997EL,5L,0xAAB0L,0xC429L},{2L,0xF63CL,1L,2L,0xC429L,0xEF6AL},{(-1L),0xF63CL,0x9E04L,0x0F14L,0xAAB0L,0xE533L}},{{5L,1L,4L,7L,0xAAB0L,0xAAB0L},{0xB015L,0xF63CL,0xF63CL,0xB015L,0xC429L,0x997EL},{(-8L),0xF63CL,0xC429L,(-1L),0xAAB0L,1L},{7L,1L,0xEF6AL,0xED55L,0xAAB0L,0x9E04L}},{{0xE7D7L,0xF63CL,0xE533L,0xE7D7L,0xC429L,4L},{0x0F14L,0xF63CL,0xAAB0L,(-8L),0xAAB0L,0xF63CL},{0xED55L,1L,0x997EL,5L,0xAAB0L,0xC429L},{2L,0xF63CL,1L,2L,0xC429L,0xEF6AL}}};
static int32_t g_89 = 0xCB749617L;
static uint32_t g_94 = 0xF2A49CFFL;
static int64_t g_109 = 0x5527752A06A2A823LL;
static int16_t *g_129 = &g_86[1][3][0];
static int64_t g_131 = 0L;
static uint32_t g_134 = 0x9D1BA22EL;
static int8_t g_143 = 0x44L;
static uint32_t g_230[6][5] = {{0x15DD1E5AL,4294967295UL,0x882ED2A0L,0x72F24C6DL,0x882ED2A0L},{5UL,5UL,1UL,0x1B903DA8L,0xD47430D1L},{4294967295UL,0x15DD1E5AL,0x15DD1E5AL,4294967295UL,0x882ED2A0L},{4294967289UL,0UL,1UL,1UL,0UL},{0x637BB388L,0x72F24C6DL,4UL,0x882ED2A0L,0x882ED2A0L},{0x1B903DA8L,0xD47430D1L,0x1B903DA8L,1UL,5UL}};
static union U3 g_232[5] = {{{1UL,{0x4368CCABL},4294967294UL,0UL,0xE5D1AB0926F43121LL,0L,0xF4C0952EL}},{{1UL,{0x4368CCABL},4294967294UL,0UL,0xE5D1AB0926F43121LL,0L,0xF4C0952EL}},{{1UL,{0x4368CCABL},4294967294UL,0UL,0xE5D1AB0926F43121LL,0L,0xF4C0952EL}},{{1UL,{0x4368CCABL},4294967294UL,0UL,0xE5D1AB0926F43121LL,0L,0xF4C0952EL}},{{1UL,{0x4368CCABL},4294967294UL,0UL,0xE5D1AB0926F43121LL,0L,0xF4C0952EL}}};
static union U2 g_258[1] = {{0x79L}};
static union U2 *g_257[4][1][2] = {{{&g_258[0],&g_258[0]}},{{&g_258[0],&g_258[0]}},{{&g_258[0],&g_258[0]}},{{&g_258[0],&g_258[0]}}};
static int32_t g_306 = 0L;
static int64_t *g_326 = &g_131;
static int64_t **g_325[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t ***g_324 = &g_325[6];
static int32_t * const g_337 = &g_24;
static uint32_t g_389 = 1UL;
static int32_t g_394 = (-1L);
static union U3 g_433 = {{1UL,{0xD16FD438L},4294967295UL,1UL,1UL,-2L,9UL}};
static const union U2 *g_463[6][3] = {{&g_258[0],&g_258[0],&g_258[0]},{&g_258[0],&g_258[0],&g_258[0]},{&g_258[0],&g_258[0],&g_258[0]},{&g_258[0],&g_258[0],&g_258[0]},{&g_258[0],&g_258[0],&g_258[0]},{&g_258[0],&g_258[0],&g_258[0]}};
static const union U2 **g_462 = &g_463[1][0];
static const union U2 ***g_461[6] = {&g_462,&g_462,&g_462,&g_462,&g_462,&g_462};
static const union U2 ****g_460 = &g_461[4];
static union U2 g_575 = {1UL};
static union U2 g_576 = {9UL};
static union U2 * const g_574[7] = {&g_575,&g_575,&g_575,&g_575,&g_575,&g_575,&g_575};
static union U2 * const *g_573[1][4][7] = {{{&g_574[0],&g_574[6],&g_574[0],&g_574[0],&g_574[0],&g_574[0],&g_574[0]},{&g_574[0],&g_574[6],&g_574[0],&g_574[6],&g_574[0],&g_574[0],&g_574[0]},{&g_574[4],&g_574[0],&g_574[6],&g_574[0],(void*)0,&g_574[0],&g_574[6]},{&g_574[0],&g_574[0],&g_574[0],&g_574[0],&g_574[0],&g_574[0],&g_574[4]}}};
static union U2 * const **g_572 = &g_573[0][3][0];
static union U2 * const ***g_571[1][1][6] = {{{&g_572,&g_572,&g_572,&g_572,&g_572,&g_572}}};
static uint64_t *g_585[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t * const *g_584 = &g_585[0];
static uint64_t * const **g_583 = &g_584;
static uint64_t * const *** const g_582[2] = {&g_583,&g_583};
static int64_t g_631[6] = {0xFCB804B9B0143853LL,0xFCB804B9B0143853LL,0xFCB804B9B0143853LL,0xFCB804B9B0143853LL,0xFCB804B9B0143853LL,0xFCB804B9B0143853LL};
static uint32_t **g_641 = (void*)0;
static struct S0 *g_643 = &g_5;
static struct S0 **g_642 = &g_643;
static struct S0 ***g_661 = &g_642;
static struct S0 ***g_662 = &g_642;
static const uint16_t g_721 = 0x0354L;
static const uint16_t g_723[1][2][1] = {{{0x6C5BL},{0x6C5BL}}};
static int8_t g_799 = (-1L);
static const int64_t *g_871 = &g_631[5];
static const int64_t **g_870 = &g_871;
static uint32_t *g_886 = &g_94;
static uint32_t **g_885 = &g_886;
static union U2 *g_907 = &g_576;
static union U2 ** const g_906 = &g_907;
static union U2 ** const *g_905 = &g_906;
static union U2 ** const **g_904 = &g_905;
static union U2 ** const ***g_903 = &g_904;
static uint16_t g_990 = 9UL;
static const int16_t g_1015 = 0xA3D2L;
static int32_t * const g_1067 = &g_24;
static uint32_t g_1095 = 0x7B5DF68CL;
static int32_t * const g_1190[7][5] = {{&g_89,&g_89,&g_394,&g_89,&g_89},{&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0},{&g_89,&g_24,&g_24,&g_89,&g_24},{&g_5.f0,&g_5.f0,(void*)0,&g_5.f0,&g_5.f0},{&g_24,&g_89,&g_24,&g_24,&g_89},{&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0,&g_5.f0},{&g_89,&g_89,&g_394,&g_89,&g_89}};
static const uint32_t g_1202 = 0xBEEC08BBL;
static const uint32_t *g_1203[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
static uint8_t **g_1235 = (void*)0;
static uint8_t ***g_1234 = &g_1235;
static union U3 g_1248 = {{3UL,{0x2222BE0BL},0x12259FCFL,1UL,7UL,1L,0xA72ADF1AL}};
static int16_t g_1292 = 0xF24DL;
static int64_t g_1435 = 0xFF617506DD040440LL;
static int8_t g_1453 = 0xF0L;
static int8_t g_1455 = 1L;
static const uint64_t *g_1493 = &g_232[2].f0.f4;
static const uint64_t **g_1492 = &g_1493;
static const uint64_t ***g_1491 = &g_1492;
static int32_t ****g_1511 = (void*)0;
static union U3 g_1686 = {{0UL,{-1L},4294967295UL,251UL,0UL,0x52989F9CL,4294967286UL}};
static union U3 ***g_1702 = (void*)0;
static uint8_t g_1739 = 8UL;
static struct S1 *g_1839[4] = {&g_1248.f0,&g_1248.f0,&g_1248.f0,&g_1248.f0};
static uint16_t **g_1859 = &g_59;
static uint16_t ***g_1858 = &g_1859;
static int32_t g_1918[2][4] = {{0xC5DEAAF8L,0xC5DEAAF8L,0xC5DEAAF8L,0xC5DEAAF8L},{0xC5DEAAF8L,0xC5DEAAF8L,0xC5DEAAF8L,0xC5DEAAF8L}};
static uint32_t g_2044 = 1UL;
static int32_t *g_2110 = (void*)0;
static int32_t ** const g_2109 = &g_2110;
static int32_t ** const *g_2108[6] = {(void*)0,&g_2109,(void*)0,(void*)0,&g_2109,(void*)0};
static struct S0 ****g_2138[2][7][3] = {{{&g_661,&g_662,(void*)0},{&g_662,&g_662,&g_661},{&g_661,&g_661,(void*)0},{(void*)0,&g_662,&g_662},{&g_661,(void*)0,&g_662},{&g_661,&g_662,&g_662},{(void*)0,(void*)0,&g_661}},{{&g_662,&g_662,&g_661},{&g_662,(void*)0,&g_661},{&g_661,&g_662,&g_661},{(void*)0,(void*)0,&g_661},{&g_661,&g_662,&g_661},{&g_661,&g_661,&g_661},{(void*)0,&g_662,&g_661}}};
static uint32_t g_2297 = 0x0D65803AL;
static uint16_t *g_2358 = &g_990;
static int8_t *g_2394 = &g_799;
static int8_t **g_2393 = &g_2394;
static int8_t ***g_2392[7] = {&g_2393,&g_2393,&g_2393,&g_2393,&g_2393,&g_2393,&g_2393};
static int8_t ****g_2391 = &g_2392[3];
static int64_t g_2466 = 0xE9DFF291AFECF855LL;
static const uint32_t **g_2665 = (void*)0;
static uint8_t g_2762 = 0UL;
static const uint32_t g_2772 = 0x8D38AE26L;
static int64_t ****g_2811[3] = {(void*)0,(void*)0,(void*)0};
static int64_t *****g_2810 = &g_2811[0];
static uint8_t *g_2817 = &g_77[4][1][2];
static uint8_t **g_2816 = &g_2817;
static int8_t g_2838 = 0xFDL;
static union U2 g_2867 = {250UL};
static uint32_t g_2957 = 0x6FC267DDL;
static struct S0 *****g_2969 = &g_2138[1][1][2];
static union U3 ****g_2988 = &g_1702;
static union U2 *g_3091 = &g_2867;
static union U2 ** const **g_3099[5] = {&g_905,&g_905,&g_905,&g_905,&g_905};
static union U2 **g_3136 = (void*)0;
static union U2 *** const g_3135 = &g_3136;
static int8_t g_3137 = 0x6EL;
static uint64_t g_3194 = 1UL;
static union U3 *****g_3318[2][5] = {{&g_2988,&g_2988,&g_2988,&g_2988,&g_2988},{&g_2988,&g_2988,&g_2988,&g_2988,&g_2988}};
static union U3 *****g_3320 = &g_2988;
static uint16_t g_3375 = 65533UL;
static int8_t g_3398[4] = {0x50L,0x50L,0x50L,0x50L};
static int32_t g_3427 = (-9L);
static const int32_t *g_3464 = &g_1686.f0.f5;
static struct S1 g_3488 = {1UL,{0x7D848B38L},0xE45A6B73L,0x4BL,0xF1F54667E08DB254LL,0xEAC5DCCFL,0x2FE2FFD1L};
static int32_t *g_3507 = (void*)0;
static struct S1 g_3603 = {1UL,{-1L},0x5C906847L,1UL,2UL,-1L,1UL};
static union U3 g_3609 = {{0xF0BC1513L,{-1L},1UL,0xF2L,0x3FD8298F48E2481BLL,0L,0x8345A384L}};
static uint8_t ****g_3723 = &g_1234;
static uint8_t *****g_3722 = &g_3723;
static uint32_t ***g_3830 = &g_885;
static uint32_t ****g_3829 = &g_3830;
static uint64_t g_3958 = 0UL;
static struct S1 g_4044 = {0UL,{0xF6349BC7L},0xC89749C0L,253UL,0xA0F86D1D71D3CDFCLL,0xFCF51049L,4294967295UL};
static struct S1 * const g_4043 = &g_4044;
static struct S1 * const *g_4042[5][3][3] = {{{&g_4043,(void*)0,&g_4043},{&g_4043,&g_4043,&g_4043},{&g_4043,(void*)0,(void*)0}},{{&g_4043,&g_4043,&g_4043},{&g_4043,(void*)0,&g_4043},{&g_4043,&g_4043,&g_4043}},{{&g_4043,(void*)0,&g_4043},{&g_4043,&g_4043,&g_4043},{&g_4043,(void*)0,(void*)0}},{{&g_4043,&g_4043,&g_4043},{&g_4043,(void*)0,&g_4043},{&g_4043,&g_4043,&g_4043}},{{&g_4043,(void*)0,&g_4043},{&g_4043,&g_4043,&g_4043},{&g_4043,(void*)0,(void*)0}}};
static struct S1 * const **g_4041 = &g_4042[3][2][2];
static int64_t g_4064 = (-10L);
static uint16_t g_4102[7][7][5] = {{{65532UL,65535UL,0xC437L,1UL,0x0FC2L},{0x54E7L,0x1603L,65535UL,0xB9C2L,65531UL},{0xE5C8L,0x4902L,1UL,0x8B39L,1UL},{0x54E7L,1UL,3UL,0x4C3FL,65534UL},{65532UL,0xEC21L,7UL,0x992FL,0UL},{0UL,8UL,4UL,1UL,9UL},{0xB9C2L,8UL,0xBE67L,65535UL,0x6991L}},{{0UL,0x2186L,1UL,0x0C09L,0x10CBL},{65535UL,0x33C8L,0UL,65534UL,65535UL},{8UL,1UL,6UL,1UL,7UL},{0UL,1UL,0xDAD8L,0x10CBL,0UL},{0x4365L,1UL,0xB9C2L,65535UL,0x7527L},{65535UL,4UL,0x0FC2L,65533UL,0x5A9CL},{65530UL,6UL,0x0FC2L,0UL,0x52B4L}},{{1UL,65535UL,0xB9C2L,1UL,0x2449L},{3UL,0x280DL,0xDAD8L,4UL,65535UL},{65535UL,1UL,6UL,1UL,1UL},{65532UL,0UL,0x7F47L,3UL,1UL},{1UL,0x6F9AL,65533UL,6UL,0x73E7L},{0x10CBL,65529UL,0x280DL,0xC437L,0xCF59L},{65534UL,0UL,1UL,0xDD86L,65535UL}},{{0x7F47L,4UL,0xF880L,4UL,0x7F47L},{4UL,1UL,0x6991L,0UL,0x43DEL},{0x2449L,0xDAD8L,65530UL,65535UL,9UL},{65532UL,8UL,0UL,1UL,0x43DEL},{0UL,65535UL,0xEC21L,65535UL,0x7F47L},{0x43DEL,0x0C09L,0x5A8CL,0xD28EL,65535UL},{65534UL,0x280DL,65535UL,65535UL,0xCF59L}},{{65529UL,8UL,0UL,0x54E7L,0x73E7L},{1UL,9UL,0x7527L,65534UL,1UL},{65535UL,65529UL,6UL,1UL,0x9DC8L},{0x4902L,0UL,6UL,65529UL,65528UL},{0UL,65535UL,0UL,6UL,65535UL},{7UL,65535UL,3UL,0UL,65535UL},{65532UL,8UL,65535UL,0x6F9AL,8UL}},{{1UL,8UL,0x4365L,1UL,0x4C3FL},{1UL,65535UL,65535UL,1UL,65535UL},{0UL,65535UL,0xA3D5L,65534UL,6UL},{65535UL,0UL,1UL,0x992FL,0UL},{0xEC21L,65529UL,0x2057L,0x4902L,0x7527L},{65528UL,9UL,65532UL,0UL,0UL},{0x6991L,8UL,3UL,1UL,65528UL}},{{0x5EBEL,0x280DL,0UL,0x33C8L,0xC437L},{0xCF59L,0x0C09L,0x0C09L,0xCF59L,65535UL},{65529UL,65535UL,1UL,65532UL,0x1603L},{0x2186L,8UL,7UL,8UL,0x4902L},{65530UL,0xDAD8L,0xCF59L,65532UL,1UL},{3UL,1UL,0x2449L,0xCF59L,0xEC21L},{0x5A9CL,4UL,1UL,0x33C8L,8UL}}};



static int16_t  func_1(void);
static struct S0  func_2(int32_t  p_3, const uint32_t  p_4);
static int32_t  func_6(const union U3  p_7, const int8_t  p_8);
static union U3  func_12(union U2  p_13, int64_t  p_14);
static union U2  func_15(uint32_t  p_16, uint32_t  p_17, const uint32_t  p_18);
static union U3  func_27(int32_t * p_28, int32_t ** p_29, int32_t  p_30, uint8_t  p_31, const union U3  p_32);
static int32_t * func_33(union U3  p_34, uint16_t  p_35, int32_t * const  p_36);
static int32_t * const  func_43(uint16_t * p_44, uint8_t  p_45, uint16_t * p_46, struct S0  p_47, uint16_t * p_48);




static int16_t  func_1(void)
{ 
    const union U3 l_9 = {{0xD0A7084BL,{0x9C3D069FL},2UL,0xFFL,0x9ACD409884CB8F6CLL,0x18E9934BL,0xB4EF66B1L}};
    int8_t l_19 = 0x57L;
    const int64_t l_3751 = 0xBD065789CE4F884FLL;
    (*g_643) = func_2((g_5 , func_6(l_9, (safe_rshift_func_uint8_t_u_s(l_9.f0.f3, (func_12(func_15(l_9.f0.f1.f0, (g_5.f0 , l_19), l_9.f0.f6), l_9.f0.f5) , 0x11L))))), l_3751);
    return (*g_129);
}



static struct S0  func_2(int32_t  p_3, const uint32_t  p_4)
{ 
    union U3 l_3754 = {{4294967289UL,{0L},0x17626CCCL,255UL,0xF04FCFE179314F1ELL,0x65C90ECEL,0x97E8B8C2L}};
    int64_t **l_3778 = &g_326;
    int32_t l_3779 = 0x6D4304E8L;
    union U2 l_3780[5] = {{0x9DL},{0x9DL},{0x9DL},{0x9DL},{0x9DL}};
    int32_t *l_3781[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t ***l_3782 = &g_58[1];
    struct S0 *l_3787 = &g_5;
    uint16_t l_3788 = 0xD194L;
    uint32_t l_3802 = 9UL;
    int64_t l_3850 = 0x91654D89C79DEA6DLL;
    struct S0 ****l_3900 = &g_662;
    int32_t l_3914 = (-2L);
    struct S0 l_3916 = {0x43CF812CL};
    uint16_t **l_3979 = &g_2358;
    int64_t l_3981[5] = {0xA5DC87AA1275CCEALL,0xA5DC87AA1275CCEALL,0xA5DC87AA1275CCEALL,0xA5DC87AA1275CCEALL,0xA5DC87AA1275CCEALL};
    int8_t *****l_4036 = &g_2391;
    uint32_t ****l_4051 = &g_3830;
    uint8_t **l_4073[5][5][4] = {{{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817},{(void*)0,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817},{(void*)0,&g_2817,&g_2817,&g_2817}},{{&g_2817,(void*)0,&g_2817,&g_2817},{&g_2817,&g_2817,(void*)0,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817}},{{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,(void*)0,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817}},{{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817}},{{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,(void*)0,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817},{&g_2817,&g_2817,&g_2817,&g_2817}}};
    uint64_t ****l_4078 = (void*)0;
    uint64_t *****l_4077[5];
    int64_t l_4101 = 0xEE351A60962B1D2FLL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_4077[i] = &l_4078;
    l_3781[3] = &l_3779;
    l_3788 |= ((*g_337) = (((*l_3782) = &g_2110) != ((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((p_4 || (l_3787 == l_3787)), (p_3 & p_4))), p_3)) , &l_3781[3])));
    for (g_1248.f3 = 0; (g_1248.f3 <= 0); g_1248.f3 += 1)
    { 
        const int64_t l_3791 = 1L;
        uint32_t *l_3797 = &g_2297;
        int32_t l_3803 = 0x95E98744L;
        struct S0 **l_3807[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        union U2 ***l_3819 = &g_3136;
        union U2 ****l_3818 = &l_3819;
        int32_t l_3824 = 0xDD9A6363L;
        uint32_t l_3851 = 0x34B8EBFCL;
        uint16_t *l_3854[5] = {&l_3788,&l_3788,&l_3788,&l_3788,&l_3788};
        union U2 l_3877[4] = {{255UL},{255UL},{255UL},{255UL}};
        int32_t l_3942 = (-5L);
        int32_t l_3944 = 0x5E21FA09L;
        int32_t l_3945 = 0xF4FE04B5L;
        int32_t l_3946 = (-1L);
        int32_t l_3947 = 0xEFD96DF1L;
        int32_t l_3948 = 0L;
        int32_t l_3950[2][5][4] = {{{0x32021FC8L,0xC1CB8422L,0xAA3476CBL,0xC1CB8422L},{0x32021FC8L,0L,0x88B5FDB6L,0xC1CB8422L},{0x88B5FDB6L,0xC1CB8422L,0x88B5FDB6L,0L},{0x32021FC8L,0xC1CB8422L,0xAA3476CBL,0xC1CB8422L},{0x32021FC8L,0L,0x88B5FDB6L,0xC1CB8422L}},{{0x88B5FDB6L,0xC1CB8422L,0x88B5FDB6L,0L},{0x32021FC8L,0xC1CB8422L,0xAA3476CBL,0xC1CB8422L},{0x32021FC8L,0L,0x88B5FDB6L,0xC1CB8422L},{0x88B5FDB6L,0xC1CB8422L,0x88B5FDB6L,0L},{0x32021FC8L,0xC1CB8422L,0xAA3476CBL,0xC1CB8422L}}};
        int64_t l_3953 = 0xF9204CD0DFE9DDD3LL;
        int32_t *l_3961[6][6] = {{&l_3950[0][4][2],&g_232[2].f0.f1.f0,&g_3488.f5,&g_232[2].f0.f1.f0,&l_3950[0][4][2],&g_232[2].f0.f1.f0},{(void*)0,(void*)0,(void*)0,&g_232[2].f0.f1.f0,(void*)0,(void*)0},{&l_3950[0][4][2],(void*)0,&g_3488.f5,(void*)0,&l_3950[0][4][2],(void*)0},{(void*)0,&g_232[2].f0.f1.f0,(void*)0,(void*)0,(void*)0,&g_232[2].f0.f1.f0},{&l_3950[0][4][2],&g_232[2].f0.f1.f0,&g_3488.f5,&g_232[2].f0.f1.f0,&l_3950[0][4][2],&g_232[2].f0.f1.f0},{(void*)0,(void*)0,(void*)0,&g_232[2].f0.f1.f0,(void*)0,(void*)0}};
        uint32_t l_4005 = 0UL;
        struct S1 **l_4026[7] = {&g_1839[3],&g_1839[3],&g_1839[3],&g_1839[3],&g_1839[3],&g_1839[3],&g_1839[3]};
        struct S1 ***l_4027 = &l_4026[4];
        int64_t **** const l_4058 = (void*)0;
        int64_t **** const *l_4057 = &l_4058;
        union U3 ****l_4061[3][2][1] = {{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}}};
        uint8_t **l_4074[3];
        uint64_t *****l_4080 = (void*)0;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_4074[i] = &g_2817;
        if ((((l_3803 |= ((*g_2358) = (safe_rshift_func_uint16_t_u_u(l_3791, ((safe_div_func_int64_t_s_s((-1L), ((((**g_2816) = (~(safe_add_func_int64_t_s_s((((*l_3797) = l_3791) != p_3), 18446744073709551609UL)))) >= ((*g_129) , ((safe_sub_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(p_3, l_3802)) && p_4), l_3791)) < 6L))) | p_4))) , (*g_2358)))))) > p_4) != l_3791))
        { 
            int32_t * const l_3804 = (void*)0;
            union U2 ***l_3815 = (void*)0;
            union U2 ****l_3814 = &l_3815;
            union U2 *****l_3816 = (void*)0;
            union U2 *****l_3817[2];
            uint32_t ***l_3828 = &g_885;
            uint32_t ****l_3827 = &l_3828;
            int i;
            for (i = 0; i < 2; i++)
                l_3817[i] = &l_3814;
            for (l_3788 = 0; (l_3788 <= 4); l_3788 += 1)
            { 
                const int32_t *l_3805 = &g_1918[1][1];
                const int32_t **l_3806 = &l_3805;
                int32_t *l_3809 = &g_3488.f1.f0;
                int i, j;
                if (g_230[l_3788][g_1248.f3])
                    break;
                (*g_337) |= (((*l_3806) = l_3805) == &p_3);
                for (g_433.f1 = 0; (g_433.f1 <= 4); g_433.f1 += 1)
                { 
                    int32_t *l_3808 = &l_3779;
                    int i, j, k;
                    (*g_661) = (l_3807[0] = (void*)0);
                    l_3803 = g_77[g_1248.f3][g_1248.f3][(g_1248.f3 + 2)];
                    (**l_3782) = &l_3803;
                    l_3809 = ((**l_3782) = l_3808);
                }
            }
            (*g_337) ^= p_3;
            l_3803 |= (safe_mod_func_uint16_t_u_u((*g_2358), ((*g_59) = ((((safe_mod_func_int16_t_s_s((l_3754 , (((l_3818 = l_3814) != (*g_903)) & (((*g_129) |= 0xD853L) > (safe_sub_func_int64_t_s_s((((((*g_643) = (*g_643)) , ((*g_3091) = ((safe_rshift_func_uint8_t_u_s((p_4 && g_3609.f0.f0), l_3824)) , l_3780[1]))) , &g_641) == &g_641), 1UL))))), (*g_59))) ^ p_3) ^ p_4) | 0xBDB3L))));
            (*g_337) = (safe_lshift_func_uint16_t_u_s((((*g_2358) = (((****g_2391) , l_3827) == g_3829)) == (safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(0x6AL, p_4)), 0))), (+(-8L))));
            (*g_2109) = (void*)0;
        }
        else
        { 
            uint32_t l_3849 = 0x54F05410L;
            int32_t l_3866 = 0L;
            struct S0 l_3868 = {0x443D50A0L};
            uint16_t *l_3869[7];
            int64_t ***l_3878 = &l_3778;
            uint64_t l_3886[7] = {18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
            uint16_t *l_3940 = &g_990;
            int32_t l_3952 = 1L;
            int32_t l_3954 = 6L;
            int32_t l_3956 = 0x0ADE3984L;
            union U2 l_3975 = {255UL};
            const uint32_t l_3988 = 0x29DD39BAL;
            int32_t l_3997 = 0xE42CDDBBL;
            int32_t l_4000 = 0x21B7DF8DL;
            int32_t l_4001 = 0x83B88555L;
            union U2 *l_4008 = &l_3877[0];
            int i;
            for (i = 0; i < 7; i++)
                l_3869[i] = (void*)0;
            for (g_3488.f4 = 0; (g_3488.f4 <= 0); g_3488.f4 += 1)
            { 
                int32_t l_3863 = 0x12B37D31L;
                int16_t *l_3864 = (void*)0;
                int16_t *l_3865[2];
                uint8_t l_3867 = 0x3BL;
                int32_t **l_3870 = &g_26;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_3865[i] = &g_1292;
                if (g_230[(g_3488.f4 + 4)][(g_1248.f3 + 4)])
                    break;
                for (g_134 = 0; (g_134 <= 2); g_134 += 1)
                { 
                    union U2 *****l_3840 = &l_3818;
                    int16_t l_3852 = 0L;
                    const struct S0 l_3853[7] = {{0x7C9D1405L},{0x7C9D1405L},{0xD64A9778L},{0x7C9D1405L},{0x7C9D1405L},{0xD64A9778L},{0x7C9D1405L}};
                    int i, j, k;
                    (*g_1067) |= ((safe_mul_func_uint8_t_u_u(g_77[(g_3488.f4 + 1)][(g_3488.f4 + 1)][(g_1248.f3 + 2)], 254UL)) & (((void*)0 == l_3840) != (0xB3449DACL | (safe_sub_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(((((**g_2393) = l_3849) < p_4) >= 6L), (**g_2816))) < l_3850), l_3851)), 6)) , l_3754) , 7L), p_4)))));
                    if (l_3849)
                        continue;
                    if (l_3852)
                        continue;
                    (***g_661) = l_3853[4];
                }
                (*l_3870) = func_43(l_3854[1], ((safe_sub_func_int64_t_s_s(p_3, ((safe_rshift_func_uint8_t_u_s(((**g_2816) = ((safe_rshift_func_int16_t_s_u(0xFF28L, 15)) && p_4)), 7)) <= (safe_lshift_func_int16_t_s_s((*g_129), (l_3866 = l_3863)))))) != (p_3 < l_3867)), l_3865[0], l_3868, l_3869[3]);
                return (***g_661);
            }
            if (p_3)
            { 
                uint8_t l_3883[5][3][7] = {{{0x9CL,2UL,0xC5L,0xB8L,0x08L,0x00L,0x2FL},{0x18L,5UL,0x46L,0x46L,5UL,0x18L,246UL},{0xC5L,0x2FL,0x19L,0x84L,246UL,0x4CL,250UL}},{{0x47L,0xDAL,0UL,0x18L,0x16L,5UL,0x16L},{246UL,0x2FL,0x2FL,246UL,2UL,0x84L,0x00L},{247UL,5UL,0x38L,0xDAL,0x6CL,255UL,0x46L}},{{0x4CL,2UL,0x00L,0x9CL,0xC5L,0x9CL,0x00L},{0UL,0UL,0x09L,0x5BL,255UL,246UL,0x16L},{0xDFL,0UL,0x32L,0x2FL,0x4CL,0xB8L,250UL}},{{246UL,0xF9L,255UL,0x16L,255UL,0xF9L,246UL},{0xC7L,0x9CL,246UL,0x32L,0xC5L,250UL,0x2FL},{0x46L,0x38L,0xCCL,255UL,0x6CL,0x47L,0x47L}},{{2UL,0x64L,246UL,0x64L,2UL,0xDFL,0UL},{0x09L,0x5BL,255UL,246UL,0x16L,3UL,0x6CL},{0x64L,0xFBL,0x32L,0x08L,246UL,246UL,0x08L}}};
                int32_t l_3885 = 0x90DCF1B5L;
                int8_t l_3895[5][5];
                union U2 *l_3897 = &g_575;
                union U3 l_3910[1][7] = {{{{1UL,{-8L},8UL,255UL,1UL,0x71999484L,0x5F9F2D87L}},{{1UL,{-8L},8UL,255UL,1UL,0x71999484L,0x5F9F2D87L}},{{1UL,{-8L},8UL,255UL,1UL,0x71999484L,0x5F9F2D87L}},{{1UL,{-8L},8UL,255UL,1UL,0x71999484L,0x5F9F2D87L}},{{1UL,{-8L},8UL,255UL,1UL,0x71999484L,0x5F9F2D87L}},{{1UL,{-8L},8UL,255UL,1UL,0x71999484L,0x5F9F2D87L}},{{1UL,{-8L},8UL,255UL,1UL,0x71999484L,0x5F9F2D87L}}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_3895[i][j] = (-7L);
                }
                if ((safe_mod_func_uint8_t_u_u(l_3824, p_3)))
                { 
                    const uint8_t *l_3884 = &g_3609.f0.f3;
                    int32_t l_3896[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_3896[i] = 1L;
                    (*g_1067) = (((safe_add_func_uint16_t_u_u(p_4, (safe_mul_func_int8_t_s_s((l_3877[0] , (l_3878 == ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(0L, l_3883[0][1][3])), 15)) , l_3878))), (l_3884 == (*g_2816)))))) < p_3) | p_4);
                    l_3886[4]--;
                    l_3896[2] ^= (((safe_div_func_int8_t_s_s(p_4, ((*g_59) || ((safe_sub_func_uint32_t_u_u(l_3895[3][2], (&g_2391 != &g_2391))) < ((((*l_3787) , p_3) <= (**g_2816)) & l_3886[3]))))) <= (**g_2393)) < p_4);
                    l_3897 = &l_3780[4];
                    if (l_3885)
                        continue;
                }
                else
                { 
                    struct S0 ****l_3899 = (void*)0;
                    struct S0 *****l_3898 = &l_3899;
                    int32_t l_3911[4] = {0L,0L,0L,0L};
                    int32_t l_3915[4][1];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_3915[i][j] = 0x0A2158CFL;
                    }
                    (*g_337) = (((*l_3797) = 0UL) >= (((*l_3898) = ((*g_2969) = (*g_2969))) != l_3900));
                    (*g_1067) &= (safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((((*g_59) = (safe_rshift_func_int8_t_s_u((!(*g_59)), (safe_div_func_int64_t_s_s(((l_3911[1] &= (((l_3910[0][4] , 250UL) , l_3791) >= (p_3 > p_3))) && ((*g_2358) = ((safe_mul_func_int8_t_s_s((-1L), l_3914)) & p_3))), 0x70B87D80D892D7A9LL))))) ^ l_3910[0][4].f0.f1.f0), p_4)), l_3915[2][0]));
                    if (p_4)
                        continue;
                    if (p_3)
                        break;
                }
                l_3866 = ((*g_337) = (-1L));
                return l_3916;
            }
            else
            { 
                uint32_t l_3917 = 4294967287UL;
                uint8_t l_3920 = 0x91L;
                int32_t l_3937 = 1L;
                int32_t l_3949 = (-5L);
                int32_t l_3955[4][5] = {{0x569AAC5CL,0x569AAC5CL,0x44FC8AA6L,0x569AAC5CL,0x569AAC5CL},{0x6AA0487BL,0x569AAC5CL,0x6AA0487BL,0x6AA0487BL,0x569AAC5CL},{0x569AAC5CL,0x6AA0487BL,0x6AA0487BL,0x569AAC5CL,0x6AA0487BL},{0x569AAC5CL,0x569AAC5CL,0x44FC8AA6L,0x569AAC5CL,0x569AAC5CL}};
                struct S1 l_3964 = {0UL,{1L},0xBF38C1E4L,1UL,18446744073709551615UL,1L,4294967295UL};
                union U3 *l_3965[3];
                union U2 l_3974[7][4][7] = {{{{0xB4L},{250UL},{0xC3L},{0xC3L},{250UL},{0xB4L},{252UL}},{{1UL},{255UL},{0UL},{246UL},{0x7DL},{0x03L},{0x2FL}},{{0xB4L},{1UL},{0xC3L},{0x55L},{250UL},{0xB4L},{252UL}},{{1UL},{255UL},{246UL},{246UL},{0x68L},{0x03L},{0xF6L}}},{{{0xB4L},{250UL},{0xC3L},{0xC3L},{250UL},{0xB4L},{252UL}},{{1UL},{255UL},{0UL},{246UL},{0x7DL},{0x03L},{0x2FL}},{{0xB4L},{1UL},{252UL},{0xB8L},{0x55L},{251UL},{0xC0L}},{{255UL},{246UL},{0xF6L},{0x6CL},{246UL},{252UL},{255UL}}},{{{255UL},{0x55L},{252UL},{252UL},{0x55L},{255UL},{0xC0L}},{{0x55L},{246UL},{0x2FL},{0x6CL},{0UL},{252UL},{1UL}},{{255UL},{0xC3L},{252UL},{0xB8L},{0x55L},{251UL},{0xC0L}},{{255UL},{246UL},{0xF6L},{0x6CL},{246UL},{252UL},{255UL}}},{{{255UL},{0x55L},{252UL},{252UL},{0x55L},{255UL},{0xC0L}},{{0x55L},{246UL},{0x2FL},{0x6CL},{0UL},{252UL},{1UL}},{{255UL},{0xC3L},{252UL},{0xB8L},{0x55L},{251UL},{0xC0L}},{{255UL},{246UL},{0xF6L},{0x6CL},{246UL},{252UL},{255UL}}},{{{255UL},{0x55L},{252UL},{252UL},{0x55L},{255UL},{0xC0L}},{{0x55L},{246UL},{0x2FL},{0x6CL},{0UL},{252UL},{1UL}},{{255UL},{0xC3L},{252UL},{0xB8L},{0x55L},{251UL},{0xC0L}},{{255UL},{246UL},{0xF6L},{0x6CL},{246UL},{252UL},{255UL}}},{{{255UL},{0x55L},{252UL},{252UL},{0x55L},{255UL},{0xC0L}},{{0x55L},{246UL},{0x2FL},{0x6CL},{0UL},{252UL},{1UL}},{{255UL},{0xC3L},{252UL},{0xB8L},{0x55L},{251UL},{0xC0L}},{{255UL},{246UL},{0xF6L},{0x6CL},{246UL},{252UL},{255UL}}},{{{255UL},{0x55L},{252UL},{252UL},{0x55L},{255UL},{0xC0L}},{{0x55L},{246UL},{0x2FL},{0x6CL},{0UL},{252UL},{1UL}},{{255UL},{0xC3L},{252UL},{0xB8L},{0x55L},{251UL},{0xC0L}},{{255UL},{246UL},{0xF6L},{0x6CL},{246UL},{252UL},{255UL}}}};
                uint32_t l_3980[4];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_3965[i] = &g_1248;
                for (i = 0; i < 4; i++)
                    l_3980[i] = 0x192127E6L;
                --l_3917;
                (**l_3782) = &l_3803;
                if ((4294967292UL && l_3920))
                { 
                    uint32_t l_3927 = 0UL;
                    int32_t l_3930 = 1L;
                    int32_t **l_3941 = &g_26;
                    int32_t l_3943 = 0x9A70189EL;
                    int32_t l_3951[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int64_t l_3957 = 8L;
                    int i;
                    l_3930 = (safe_sub_func_uint16_t_u_u((l_3780[0] , ((safe_add_func_uint64_t_u_u(0x400ACCA0FE9957B2LL, ((**l_3778) = (safe_mod_func_uint32_t_u_u(0UL, l_3927))))) , 1UL)), (safe_div_func_uint64_t_u_u((0xA3L || 0x32L), l_3849))));
                    (*l_3941) = func_43(l_3869[0], (safe_mod_func_uint8_t_u_u(((0x8D03L | (l_3866 &= (l_3937 = (safe_sub_func_uint16_t_u_u(l_3824, (l_3877[0].f0 >= (++(*g_2817)))))))) <= (((safe_mul_func_int8_t_s_s((((*g_1067) = (((((((0xE315L ^ (0x01L | p_4)) && p_3) , p_3) , l_3791) ^ l_3927) , l_3849) | 4L)) , (****g_2391)), l_3920)) & p_3) , l_3927)), 7UL)), l_3940, (***g_661), l_3869[3]);
                    g_3958--;
                    (**l_3782) = l_3961[1][0];
                    l_3930 = (safe_mul_func_uint8_t_u_u((0xB92231AAL == (l_3955[0][1] = (((l_3964 , l_3965[0]) == l_3965[1]) == ((*g_337) = ((((l_3754.f0 , ((safe_sub_func_uint8_t_u_u(p_3, ((**g_2393) |= (+(safe_add_func_int8_t_s_s((((&l_3927 == (***g_3829)) && p_4) && l_3956), p_3)))))) ^ 0xF70F1D7CL)) ^ p_4) , p_3) | g_1248.f3))))), p_3));
                }
                else
                { 
                    if (p_3)
                        break;
                    (*g_337) = (safe_mod_func_int16_t_s_s(0x3982L, (*g_2358)));
                }
                if (((+0x77L) & ((*g_337) |= (((l_3780[4] = l_3974[2][1][3]) , (1UL & (l_3975 , (l_3981[2] = (safe_unary_minus_func_uint16_t_u(((safe_mul_func_uint16_t_u_u((l_3964.f5 < ((((*l_3940) &= (&l_3854[4] != l_3979)) <= (*g_129)) ^ p_3)), l_3980[0])) ^ 0x5E724D1ECCED4684LL))))))) != p_4))))
                { 
                    int64_t *l_3984 = &g_109;
                    int32_t l_3989 = 0xE1CD6AD6L;
                    int32_t l_3990 = (-10L);
                    int32_t l_3991 = 1L;
                    int32_t l_3992 = 0L;
                    int32_t l_3993 = (-1L);
                    int32_t l_3994 = 0xBE85EEDEL;
                    int32_t l_3995 = (-5L);
                    int32_t l_3996 = 0xCFD38A8CL;
                    int32_t l_3998 = 0xEA3E0E6DL;
                    int32_t l_3999 = 0x17BAE760L;
                    uint64_t l_4002 = 1UL;
                    (*g_1067) = (safe_rshift_func_int8_t_s_u(((((void*)0 == &l_3878) , (**l_3878)) == l_3984), ((((-2L) || (safe_lshift_func_uint8_t_u_s(((+l_3988) >= 0xF5A0F51E195EFAA7LL), l_3989))) < 0x36L) >= p_4)));
                    l_4002++;
                    --l_4005;
                }
                else
                { 
                    union U2 ** const *l_4009 = &g_3136;
                    union U2 ** const **l_4010 = &g_905;
                    struct S0 l_4011 = {0xCB0D7243L};
                    l_4008 = &l_3780[4];
                    (*l_4010) = l_4009;
                    if (p_3)
                        break;
                    return l_4011;
                }
                (***g_460) = &l_3780[4];
            }
            (*l_3787) = l_3868;
        }
        if ((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((((*l_3797) = (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u(0x5854E76FBE602528LL, ((p_4 & ((((*l_4027) = l_4026[1]) == &g_1839[0]) ^ ((**l_3778) = ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_3, (*g_2394))), (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(((*g_129) = ((void*)0 == l_4036)), 7)), p_3)))) & p_3)))) != 8L))), 0x3F89L)), 0x4D13L))) || (*g_1067)), 0x4299L)), (**g_2816))) || 18446744073709551615UL), 0x7FACL)), p_3)))
        { 
            struct S1 ****l_4037 = (void*)0;
            struct S1 ****l_4038 = &l_4027;
            struct S1 * const *l_4040 = &g_1839[3];
            struct S1 * const **l_4039 = &l_4040;
            (*g_337) = p_3;
            (*g_1067) &= (((*l_4038) = (void*)0) == (g_4041 = l_4039));
            return (*l_3787);
        }
        else
        { 
            struct S1 l_4050[4][3][2] = {{{{9UL,{0xDD6B0CFAL},3UL,1UL,0x8F7C5E505636DCE5LL,1L,1UL},{9UL,{0xDD6B0CFAL},3UL,1UL,0x8F7C5E505636DCE5LL,1L,1UL}},{{9UL,{0xDD6B0CFAL},3UL,1UL,0x8F7C5E505636DCE5LL,1L,1UL},{0xE8382A59L,{0xCFA32E3AL},0x4803CB30L,0xE0L,1UL,9L,1UL}},{{1UL,{-1L},4294967295UL,0x15L,0x541AD25BCE2A4882LL,1L,0xD1C8AAE5L},{1UL,{0xB1242CC8L},1UL,0UL,0UL,0x4FF44EF1L,0x51D7F4B3L}}},{{{0xE8382A59L,{0xCFA32E3AL},0x4803CB30L,0xE0L,1UL,9L,1UL},{1UL,{0xB1242CC8L},1UL,0UL,0UL,0x4FF44EF1L,0x51D7F4B3L}},{{1UL,{-1L},4294967295UL,0x15L,0x541AD25BCE2A4882LL,1L,0xD1C8AAE5L},{0xE8382A59L,{0xCFA32E3AL},0x4803CB30L,0xE0L,1UL,9L,1UL}},{{9UL,{0xDD6B0CFAL},3UL,1UL,0x8F7C5E505636DCE5LL,1L,1UL},{9UL,{0xDD6B0CFAL},3UL,1UL,0x8F7C5E505636DCE5LL,1L,1UL}}},{{{9UL,{0xDD6B0CFAL},3UL,1UL,0x8F7C5E505636DCE5LL,1L,1UL},{0xE8382A59L,{0xCFA32E3AL},0x4803CB30L,0xE0L,1UL,9L,1UL}},{{1UL,{-1L},4294967295UL,0x15L,0x541AD25BCE2A4882LL,1L,0xD1C8AAE5L},{1UL,{0xB1242CC8L},1UL,0UL,0UL,0x4FF44EF1L,0x51D7F4B3L}},{{0xE8382A59L,{0xCFA32E3AL},0x4803CB30L,0xE0L,1UL,9L,1UL},{1UL,{0xB1242CC8L},1UL,0UL,0UL,0x4FF44EF1L,0x51D7F4B3L}}},{{{1UL,{-1L},4294967295UL,0x15L,0x541AD25BCE2A4882LL,1L,0xD1C8AAE5L},{0xE8382A59L,{0xCFA32E3AL},0x4803CB30L,0xE0L,1UL,9L,1UL}},{{9UL,{0xDD6B0CFAL},3UL,1UL,0x8F7C5E505636DCE5LL,1L,1UL},{9UL,{0xDD6B0CFAL},3UL,1UL,0x8F7C5E505636DCE5LL,1L,1UL}},{{9UL,{0xDD6B0CFAL},3UL,1UL,0x8F7C5E505636DCE5LL,1L,1UL},{0xE8382A59L,{0xCFA32E3AL},0x4803CB30L,0xE0L,1UL,9L,1UL}}}};
            int64_t **** const *l_4056 = (void*)0;
            union U3 ****l_4062 = (void*)0;
            int16_t *l_4063 = &g_1292;
            union U2 * const *l_4069[4][4] = {{(void*)0,&g_257[3][0][0],&g_257[3][0][0],(void*)0},{&g_257[3][0][0],(void*)0,&g_257[3][0][0],&g_257[3][0][0]},{&g_257[3][0][0],&g_257[3][0][0],(void*)0,&g_257[3][0][0]},{&g_257[3][0][0],&g_574[3],&g_574[3],&g_257[3][0][0]}};
            int i, j, k;
            (*g_1067) = ((((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(((((((((*g_2394) = (p_3 <= (((*l_4063) = ((*g_129) |= (+(l_4050[1][1][1] , (l_4051 == ((((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s(((l_4057 = l_4056) == (void*)0), (safe_mul_func_uint16_t_u_u(65527UL, (l_4061[2][0][0] == l_4062))))), 1L)) == p_3) > (-8L)) , &g_3830)))))) <= p_3))) > 4L) < l_4050[1][1][1].f4) ^ (**g_1492)) ^ g_4044.f4) && (-1L)) < 0x9838L), 8UL)) <= p_4), 1)) | (-1L)) , 0x9232F2A8B01171F8LL) , g_4064);
            for (g_3488.f3 = 1; (g_3488.f3 <= 4); g_3488.f3 += 1)
            { 
                uint8_t *****l_4070 = &g_3723;
                uint64_t *l_4071 = (void*)0;
                uint64_t *l_4072 = &l_4050[1][1][1].f4;
                uint64_t *****l_4079 = (void*)0;
                int32_t l_4087 = 0x5BEFBE1BL;
                union U3 l_4088 = {{4294967295UL,{0xE1D48FF6L},0x90B92611L,0xC9L,0xAE3334866C4040EALL,3L,0xE688A621L}};
                if (((safe_add_func_uint64_t_u_u(((*l_4072) = (l_4050[1][1][1].f5 = (safe_rshift_func_uint16_t_u_s((l_4069[3][3] == (void*)0), ((void*)0 != l_4070))))), (((***l_4070) = l_4073[2][0][1]) == l_4074[1]))) ^ 0xAEL))
                { 
                    l_4087 = ((*g_1067) = (0xC7L < (safe_lshift_func_uint16_t_u_u(0x6041L, (0x7E55D41AL ^ (((l_4077[3] == (l_4080 = l_4079)) & (p_3 == (safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((p_3 ^ (-8L)) | 0x1FC6L), 6)), p_3)), (****g_2391))))) , 1UL))))));
                }
                else
                { 
                    (*g_337) = l_4087;
                    (*g_1067) = 0L;
                }
                for (l_3946 = 0; (l_3946 <= 2); l_3946 += 1)
                { 
                    int8_t l_4090 = 9L;
                    (**l_3782) = (void*)0;
                    (*g_1067) = p_4;
                    l_4087 ^= (l_4088 , (l_4090 = (~0xAB06L)));
                    (*g_906) = &l_3780[2];
                }
            }
            (*g_337) ^= ((l_3780[4] , p_4) & ((((((safe_mod_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((((**g_870) & ((((((l_3754.f0 , l_4050[1][1][1].f3) > (0x638B7639305117E2LL & (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(((l_4050[1][1][1].f1.f0 = (safe_mul_func_uint16_t_u_u((p_4 && l_4101), p_3))) >= 0x35E1F6F084217059LL), p_4)) != 0xEB96L), p_3)))) & g_4102[1][3][1]) ^ l_4050[1][1][1].f2) ^ 0xA7L) || 0xCC702B5BL)) , l_4050[1][1][1].f2), 7UL)) , 1UL) , p_4) >= p_4), (**g_2393))) | l_4050[1][1][1].f6) <= 18446744073709551614UL) ^ p_4) == 0xDC46L) || 0xEBL));
            return l_4050[1][1][1].f1;
        }
    }
    (***g_460) = &l_3780[4];
    (***g_460) = &l_3780[4];
    return (*g_643);
}



static int32_t  func_6(const union U3  p_7, const int8_t  p_8)
{ 
    uint8_t l_3730 = 1UL;
    int32_t l_3747 = 0x008304B8L;
    int32_t l_3748 = 0x13D91020L;
    int32_t l_3749 = (-2L);
    int32_t l_3750 = 0x8375527AL;
    l_3750 = (safe_lshift_func_int8_t_s_s((((-5L) != (+l_3730)) | ((safe_div_func_int32_t_s_s((p_7.f0.f6 & ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_3730, 0xC5EEL)), ((l_3747 &= p_7.f0.f6) & (l_3749 = (l_3748 &= p_7.f0.f6))))) > l_3730), p_7.f0.f1.f0)), 0UL)) <= l_3730), (-8L))), l_3730)), 13)) < l_3730)), l_3730)) == p_8)), p_7.f0.f0));
    (*g_2109) = &l_3749;
    return g_1686.f1;
}



static union U3  func_12(union U2  p_13, int64_t  p_14)
{ 
    int32_t *l_3534 = &g_24;
    uint16_t *l_3536 = &g_40;
    const uint8_t *l_3593 = &g_3488.f3;
    const uint8_t **l_3592 = &l_3593;
    struct S1 *l_3602[3];
    int32_t l_3610 = 1L;
    const union U3 *l_3631 = (void*)0;
    struct S0 * const l_3645 = &g_5;
    int32_t l_3678 = 0x649E0BAFL;
    int32_t l_3679 = 0x69130180L;
    int32_t l_3684 = (-1L);
    union U3 l_3688 = {{4294967290UL,{0x88A6C652L},6UL,1UL,18446744073709551615UL,0xEDDD6DA3L,0x52BA1D53L}};
    int i;
    for (i = 0; i < 3; i++)
        l_3602[i] = &g_3603;
    for (g_990 = 0; (g_990 != 17); g_990++)
    { 
        union U3 l_3532[7][4][2] = {{{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{9UL,{-2L},0xF2AD9940L,0xB5L,1UL,0xA09D4F75L,3UL}}},{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{4294967295UL,{-2L},0x0329BE1DL,0x97L,0x30326A6C3F248AD1LL,0x92B714C9L,0x0489E8B3L}}},{{{0UL,{-4L},0xCB1C255DL,1UL,0x0F8C97BB676D4D08LL,1L,1UL}},{{0UL,{-5L},0x92AD79BDL,0UL,18446744073709551609UL,0L,0xDD7FFBEBL}}},{{{0x8ADDA2D5L,{0xEFDCF9F8L},6UL,0UL,18446744073709551610UL,0x7B7FA522L,0x8B25C752L}},{{0UL,{-5L},0x92AD79BDL,0UL,18446744073709551609UL,0L,0xDD7FFBEBL}}}},{{{{0UL,{-4L},0xCB1C255DL,1UL,0x0F8C97BB676D4D08LL,1L,1UL}},{{4294967295UL,{-2L},0x0329BE1DL,0x97L,0x30326A6C3F248AD1LL,0x92B714C9L,0x0489E8B3L}}},{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{9UL,{-2L},0xF2AD9940L,0xB5L,1UL,0xA09D4F75L,3UL}}},{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{4294967295UL,{-2L},0x0329BE1DL,0x97L,0x30326A6C3F248AD1LL,0x92B714C9L,0x0489E8B3L}}},{{{0UL,{-4L},0xCB1C255DL,1UL,0x0F8C97BB676D4D08LL,1L,1UL}},{{0UL,{-5L},0x92AD79BDL,0UL,18446744073709551609UL,0L,0xDD7FFBEBL}}}},{{{{0x8ADDA2D5L,{0xEFDCF9F8L},6UL,0UL,18446744073709551610UL,0x7B7FA522L,0x8B25C752L}},{{0UL,{-5L},0x92AD79BDL,0UL,18446744073709551609UL,0L,0xDD7FFBEBL}}},{{{0UL,{-4L},0xCB1C255DL,1UL,0x0F8C97BB676D4D08LL,1L,1UL}},{{4294967295UL,{-2L},0x0329BE1DL,0x97L,0x30326A6C3F248AD1LL,0x92B714C9L,0x0489E8B3L}}},{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{9UL,{-2L},0xF2AD9940L,0xB5L,1UL,0xA09D4F75L,3UL}}},{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{4294967295UL,{-2L},0x0329BE1DL,0x97L,0x30326A6C3F248AD1LL,0x92B714C9L,0x0489E8B3L}}}},{{{{0UL,{-4L},0xCB1C255DL,1UL,0x0F8C97BB676D4D08LL,1L,1UL}},{{0UL,{-5L},0x92AD79BDL,0UL,18446744073709551609UL,0L,0xDD7FFBEBL}}},{{{0x8ADDA2D5L,{0xEFDCF9F8L},6UL,0UL,18446744073709551610UL,0x7B7FA522L,0x8B25C752L}},{{0UL,{-5L},0x92AD79BDL,0UL,18446744073709551609UL,0L,0xDD7FFBEBL}}},{{{0UL,{-4L},0xCB1C255DL,1UL,0x0F8C97BB676D4D08LL,1L,1UL}},{{4294967295UL,{-2L},0x0329BE1DL,0x97L,0x30326A6C3F248AD1LL,0x92B714C9L,0x0489E8B3L}}},{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{9UL,{-2L},0xF2AD9940L,0xB5L,1UL,0xA09D4F75L,3UL}}}},{{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{4294967295UL,{-2L},0x0329BE1DL,0x97L,0x30326A6C3F248AD1LL,0x92B714C9L,0x0489E8B3L}}},{{{0UL,{-4L},0xCB1C255DL,1UL,0x0F8C97BB676D4D08LL,1L,1UL}},{{0UL,{-5L},0x92AD79BDL,0UL,18446744073709551609UL,0L,0xDD7FFBEBL}}},{{{0x8ADDA2D5L,{0xEFDCF9F8L},6UL,0UL,18446744073709551610UL,0x7B7FA522L,0x8B25C752L}},{{0UL,{-5L},0x92AD79BDL,0UL,18446744073709551609UL,0L,0xDD7FFBEBL}}},{{{0UL,{-4L},0xCB1C255DL,1UL,0x0F8C97BB676D4D08LL,1L,1UL}},{{4294967295UL,{-2L},0x0329BE1DL,0x97L,0x30326A6C3F248AD1LL,0x92B714C9L,0x0489E8B3L}}}},{{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{9UL,{-2L},0xF2AD9940L,0xB5L,1UL,0xA09D4F75L,3UL}}},{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{4294967295UL,{-2L},0x0329BE1DL,0x97L,0x30326A6C3F248AD1LL,0x92B714C9L,0x0489E8B3L}}},{{{0UL,{-4L},0xCB1C255DL,1UL,0x0F8C97BB676D4D08LL,1L,1UL}},{{0UL,{-5L},0x92AD79BDL,0UL,18446744073709551609UL,0L,0xDD7FFBEBL}}},{{{0x8ADDA2D5L,{0xEFDCF9F8L},6UL,0UL,18446744073709551610UL,0x7B7FA522L,0x8B25C752L}},{{0UL,{-5L},0x92AD79BDL,0UL,18446744073709551609UL,0L,0xDD7FFBEBL}}}},{{{{0UL,{-4L},0xCB1C255DL,1UL,0x0F8C97BB676D4D08LL,1L,1UL}},{{4294967295UL,{-2L},0x0329BE1DL,0x97L,0x30326A6C3F248AD1LL,0x92B714C9L,0x0489E8B3L}}},{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{9UL,{-2L},0xF2AD9940L,0xB5L,1UL,0xA09D4F75L,3UL}}},{{{1UL,{2L},0xBC755279L,9UL,0x191C1B87AB1A0F28LL,1L,1UL}},{{4294967295UL,{-2L},0x0329BE1DL,0x97L,0x30326A6C3F248AD1LL,0x92B714C9L,0x0489E8B3L}}},{{{0UL,{-4L},0xCB1C255DL,1UL,0x0F8C97BB676D4D08LL,1L,1UL}},{{0UL,{-5L},0x92AD79BDL,0UL,18446744073709551609UL,0L,0xDD7FFBEBL}}}}};
        uint16_t *l_3537[1][5][3] = {{{&g_3375,&g_3375,&g_3375},{(void*)0,(void*)0,(void*)0},{&g_3375,&g_3375,&g_3375},{(void*)0,(void*)0,(void*)0},{&g_3375,&g_3375,&g_3375}}};
        int16_t l_3558 = 0xFE81L;
        struct S0 ***l_3563 = &g_642;
        uint8_t ***l_3573 = &g_1235;
        union U3 *l_3608 = &g_3609;
        int32_t *l_3646 = &l_3532[5][2][1].f0.f1.f0;
        int32_t l_3681 = 0xD767D69FL;
        int32_t l_3682 = 0x84A8DAB6L;
        int32_t l_3715 = 0x8641BD41L;
        int32_t l_3716 = 3L;
        int32_t l_3717 = 0x18C13488L;
        int i, j, k;
        (*g_337) |= p_14;
        for (g_433.f3 = 9; (g_433.f3 != 26); g_433.f3 = safe_add_func_uint64_t_u_u(g_433.f3, 1))
        { 
            uint32_t l_3562 = 4294967295UL;
            struct S0 l_3570[7][3] = {{{0L},{0xBCD8A9E6L},{1L}},{{0x69FFFE49L},{0xBCD8A9E6L},{0x783E036CL}},{{0x0E9CDDAEL},{0xBCD8A9E6L},{0xBCD8A9E6L}},{{0L},{0xBCD8A9E6L},{1L}},{{0x69FFFE49L},{0xBCD8A9E6L},{0x783E036CL}},{{0x0E9CDDAEL},{0xBCD8A9E6L},{0xBCD8A9E6L}},{{0L},{0xBCD8A9E6L},{1L}}};
            struct S0 **l_3581 = &g_643;
            union U3 *l_3596 = &g_1686;
            int16_t l_3615 = 9L;
            uint64_t l_3623 = 0xEAF68E67AF7DD983LL;
            uint32_t l_3629 = 0x2EEEF5C9L;
            int8_t ****l_3653 = &g_2392[3];
            uint32_t l_3668 = 0xDFA532A7L;
            const uint16_t l_3671[4][2][5] = {{{0xF65EL,0x6260L,1UL,65533UL,1UL},{1UL,1UL,0UL,65533UL,0x0320L}},{{0x6260L,0xF65EL,0xF65EL,0x6260L,1UL},{0x6260L,65533UL,65535UL,65535UL,65533UL}},{{1UL,0xF65EL,65535UL,0UL,0UL},{0xF65EL,1UL,0xF65EL,65535UL,0UL}},{{65533UL,0x6260L,0UL,0x6260L,65533UL},{0xF65EL,0x6260L,1UL,65533UL,1UL}}};
            int32_t l_3675 = 0x6B4733AFL;
            int32_t l_3676 = 0L;
            int32_t l_3677 = 0x3D65AB70L;
            int32_t l_3680 = (-6L);
            int32_t l_3683 = 0xE0411906L;
            uint64_t l_3685 = 0UL;
            int32_t l_3718 = (-2L);
            uint8_t *****l_3724 = &g_3723;
            int i, j, k;
            if ((l_3532[5][2][1] , p_13.f0))
            { 
                return l_3532[5][2][1];
            }
            else
            { 
                int32_t *l_3535 = &g_1248.f0.f1.f0;
                struct S0 ***l_3565[2];
                union U3 *l_3595 = &g_1248;
                int32_t l_3601[3][1];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_3565[i] = &g_642;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_3601[i][j] = (-8L);
                }
                for (g_576.f0 = 0; (g_576.f0 <= 4); g_576.f0 += 1)
                { 
                    struct S1 **l_3533 = &g_1839[3];
                    uint16_t **l_3538 = (void*)0;
                    uint16_t **l_3539 = (void*)0;
                    uint16_t **l_3540 = (void*)0;
                    uint16_t **l_3541 = &l_3537[0][3][1];
                    int32_t **l_3542 = &l_3535;
                    (*l_3533) = (void*)0;
                    (*g_903) = (void*)0;
                    l_3535 = ((*g_2109) = l_3534);
                    if (l_3532[5][2][1].f0.f4)
                        continue;
                    (*l_3542) = func_43(l_3536, (*l_3535), ((*l_3541) = l_3537[0][3][1]), (***g_662), &g_40);
                }
                for (g_1686.f0.f1.f0 = 0; (g_1686.f0.f1.f0 <= 5); g_1686.f0.f1.f0 = safe_add_func_uint8_t_u_u(g_1686.f0.f1.f0, 1))
                { 
                    const int8_t l_3561 = 0x08L;
                    struct S0 ****l_3564[1];
                    const uint8_t ***l_3594 = &l_3592;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_3564[i] = &g_662;
                    l_3565[0] = (((((safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((((safe_mul_func_uint16_t_u_u(0x761CL, (safe_add_func_int32_t_s_s(((((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u(0x09L, ((1L || (l_3558 ^= ((**g_2393) = 0x1EL))) || (safe_div_func_uint32_t_u_u((((*g_129) != 0x04C1L) ^ g_723[0][1][0]), l_3561))))) != p_14), l_3561)))) || p_13.f0) <= l_3562) == 1UL), l_3532[5][2][1].f0.f6)))) >= 0xE4L) == 6L) >= p_14), l_3561)), p_14)) | (*g_59)) && p_13.f0) <= 0L) , l_3563);
                    (*g_1067) = (safe_mod_func_uint8_t_u_u((((((safe_div_func_uint16_t_u_u((((l_3570[3][2] , (((((((((((++(**g_885)) , &g_2816) == l_3573) && ((*g_643) , (safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(0xA7A913BAF0E51D6CLL, ((((0xF062D39B4D398839LL > (((safe_sub_func_uint64_t_u_u((!l_3532[5][2][1].f0.f2), (-1L))) == p_14) == (*l_3534))) <= 0x4768DB79L) && 1L) >= (*g_2394)))), (-5L))))) | 248UL) && l_3561) , (void*)0) != l_3581) != l_3532[5][2][1].f0.f1.f0) ^ p_14) && 0xDDDAL)) , l_3561) ^ (*g_2394)), (*g_129))) > l_3561) != p_14) , 0L) ^ 0x57F6558FL), (*l_3534)));
                    if (l_3532[5][2][1].f0.f2)
                        continue;
                    if (p_13.f0)
                        break;
                    l_3601[1][0] = (((((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((((((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((((((((((*l_3594) = l_3592) == (*g_1234)) || 0x4201L) , l_3595) == l_3596) >= ((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(l_3532[5][2][1].f0.f2, 0xD44B389DL)), (*g_2817))) ^ p_13.f0)) == l_3561) ^ 2UL) && p_13.f0) || (*l_3534)), (*g_59))), 0x1665L)) || (*g_1067)) , (void*)0) == &g_641) , (*g_2358)), 5)), (*g_2394))), 1UL)) >= 1L) == (**g_1492)) >= l_3561) || p_13.f0);
                }
                if (p_14)
                    continue;
                for (g_24 = 0; (g_24 >= 0); g_24 -= 1)
                { 
                    return (*l_3595);
                }
            }
            l_3602[2] = &g_3488;
            l_3532[5][2][1].f0.f5 = ((*g_337) |= (safe_lshift_func_int16_t_s_s(0x83B2L, 13)));
            if (((*g_1067) = ((**g_1492) != (safe_mul_func_int8_t_s_s(l_3562, (l_3596 == (l_3608 = l_3596)))))))
            { 
                for (g_3488.f5 = 2; (g_3488.f5 >= 0); g_3488.f5 -= 1)
                { 
                    if (p_13.f0)
                        break;
                    (**g_642) = (*g_643);
                }
                l_3610 |= (*l_3534);
                return (*l_3596);
            }
            else
            { 
                uint16_t l_3618 = 8UL;
                uint32_t *l_3624 = &g_232[2].f0.f2;
                union U3 l_3637 = {{4294967295UL,{0L},4294967289UL,6UL,1UL,0x14B8049BL,1UL}};
                int32_t *l_3647 = &g_394;
                int32_t l_3669 = (-1L);
                int8_t ****l_3693 = &g_2392[2];
                (*g_1067) = ((safe_add_func_uint32_t_u_u(((*l_3624) = ((0xCFD95DE2L >= (safe_sub_func_int16_t_s_s(l_3615, ((*g_129) = (safe_unary_minus_func_uint8_t_u((((+l_3618) && (safe_lshift_func_int16_t_s_u(((*g_129) != (safe_rshift_func_int8_t_s_s(((*l_3534) , (p_13.f0 > l_3623)), 7))), l_3532[5][2][1].f0.f5))) == p_13.f0))))))) || l_3532[5][2][1].f0.f0)), l_3618)) | (*l_3534));
                for (l_3623 = (-14); (l_3623 >= 41); l_3623 = safe_add_func_int8_t_s_s(l_3623, 4))
                { 
                    union U3 l_3630 = {{0UL,{0x7297D75CL},0xDB17E4A6L,255UL,18446744073709551615UL,-3L,4294967295UL}};
                    const union U3 **l_3632 = (void*)0;
                    const union U3 **l_3633 = &l_3631;
                    l_3629 = ((*g_337) = (safe_mul_func_int16_t_s_s(p_13.f0, p_14)));
                    (*l_3534) = (((l_3630 , ((*l_3633) = l_3631)) != ((((*g_2817) = p_13.f0) , (***g_1491)) , &l_3630)) <= 0xA2L);
                    (*l_3534) |= (safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_u(((l_3637 , (((~(safe_lshift_func_uint16_t_u_s(p_13.f0, 7))) | (((*g_2394) > (safe_sub_func_uint16_t_u_u(((((((safe_sub_func_int64_t_s_s(0x9234E0909B9D7F53LL, p_14)) | (p_13 , 0L)) , 4294967292UL) , (void*)0) == l_3645) | l_3532[5][2][1].f0.f2), p_14))) | l_3637.f0.f6)) , p_13.f0)) , p_14), 13))));
                }
                if (l_3615)
                    break;
                if ((((l_3647 = l_3646) == &l_3610) >= (!(safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(l_3637.f0.f3, ((((void*)0 == l_3653) & (4294967295UL | ((safe_mul_func_uint8_t_u_u((*l_3646), l_3637.f0.f4)) | (**g_2393)))) || p_14))), (*l_3646))))))
                { 
                    int8_t *l_3670 = &g_3137;
                    uint8_t *l_3672 = (void*)0;
                    int32_t l_3673 = 1L;
                    int32_t *l_3674[5][4] = {{&g_5.f0,&g_3609.f0.f5,(void*)0,&g_3609.f0.f5},{&g_3609.f0.f5,&l_3637.f0.f5,(void*)0,(void*)0},{&g_5.f0,&g_5.f0,&g_3609.f0.f5,(void*)0},{&l_3637.f0.f5,&l_3637.f0.f5,&l_3637.f0.f5,&g_3609.f0.f5},{&l_3637.f0.f5,&g_3609.f0.f5,&g_3609.f0.f5,&l_3637.f0.f5}};
                    int i, j;
                    (*g_2109) = &l_3610;
                    (*g_2110) &= (safe_lshift_func_uint8_t_u_u((((((1UL > (safe_div_func_int8_t_s_s(((*g_2969) == (void*)0), (l_3673 ^= ((*l_3534) = ((*g_2817) |= ((((safe_sub_func_uint32_t_u_u((p_14 == (safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(((((*l_3646) = ((*l_3670) |= ((**g_2393) = (((0xA490L & ((p_13.f0 | ((((safe_add_func_uint16_t_u_u((p_14 != l_3668), l_3669)) , 0xCD39L) , (*l_3646)) < (*l_3646))) ^ 18446744073709551613UL)) < p_13.f0) != p_13.f0)))) ^ 0xBAL) == p_14), 7)) > l_3629) | 0x5A3B7653A20AC0A7LL), 6))), p_14)) ^ l_3671[3][1][0]) , p_14) == (*g_59)))))))) && 255UL) >= (*g_129)) >= p_14) <= p_14), p_14));
                    ++l_3685;
                    return l_3688;
                }
                else
                { 
                    int8_t *****l_3694 = &l_3653;
                    int32_t l_3707 = 0x6C721FBAL;
                    uint64_t *l_3708 = &l_3532[5][2][1].f0.f4;
                    union U3 l_3709[2][1][2] = {{{{{0xE329A53CL,{0x4795FCB8L},0x705E1541L,0xA2L,0x06AE630EF9A929B6LL,0L,0x8B921961L}},{{0xE329A53CL,{0x4795FCB8L},0x705E1541L,0xA2L,0x06AE630EF9A929B6LL,0L,0x8B921961L}}}},{{{{0xE329A53CL,{0x4795FCB8L},0x705E1541L,0xA2L,0x06AE630EF9A929B6LL,0L,0x8B921961L}},{{0xE329A53CL,{0x4795FCB8L},0x705E1541L,0xA2L,0x06AE630EF9A929B6LL,0L,0x8B921961L}}}}};
                    int i, j, k;
                    (*g_1067) = (safe_add_func_uint32_t_u_u(((((safe_mul_func_uint16_t_u_u((l_3693 == ((*l_3694) = l_3653)), (((*g_1493) | (-9L)) >= p_13.f0))) <= 0UL) != (++(*g_2817))) , ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((*g_59) &= (safe_unary_minus_func_uint8_t_u((++p_13.f0)))), (~(l_3683 = ((*l_3708) |= (l_3707 &= (safe_rshift_func_uint8_t_u_u((0x6887AA1EC4D137A7LL <= 0x36AD14E4E5380202LL), 6)))))))), 8)) > 0x3CC9L)), p_14));
                    (*g_2109) = &l_3679;
                }
                for (l_3680 = 0; (l_3680 >= 0); l_3680 -= 1)
                { 
                    int8_t l_3712[4];
                    int32_t *l_3713 = &g_1248.f0.f1.f0;
                    int32_t *l_3714[3][2][3] = {{{&l_3682,&g_232[2].f0.f5,&l_3682},{&l_3680,&l_3676,&l_3676}},{{&l_3675,&g_232[2].f0.f5,&l_3675},{&l_3680,&l_3680,&l_3676}},{{&l_3682,&g_232[2].f0.f5,&l_3682},{&l_3680,&l_3676,&l_3676}}};
                    uint32_t l_3719 = 0UL;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_3712[i] = 0xBCL;
                    ++l_3719;
                    l_3724 = g_3722;
                    (*g_337) = l_3668;
                }
            }
        }
        (*g_337) |= 7L;
    }
    return l_3688;
}



static union U2  func_15(uint32_t  p_16, uint32_t  p_17, const uint32_t  p_18)
{ 
    union U3 l_37 = {{9UL,{-9L},4294967291UL,5UL,0x0104353EA3A7221ELL,0xC5F93BE4L,4294967294UL}};
    int32_t l_38[2];
    uint16_t *l_39 = &g_40;
    int32_t **l_57 = &g_26;
    int32_t ***l_56[2][5][5] = {{{(void*)0,&l_57,&l_57,(void*)0,(void*)0},{&l_57,&l_57,&l_57,&l_57,&l_57},{(void*)0,&l_57,&l_57,(void*)0,&l_57},{(void*)0,(void*)0,&l_57,&l_57,&l_57},{&l_57,(void*)0,&l_57,&l_57,(void*)0}},{{&l_57,&l_57,&l_57,&l_57,&l_57},{&l_57,(void*)0,&l_57,&l_57,(void*)0},{&l_57,(void*)0,(void*)0,&l_57,&l_57},{&l_57,&l_57,&l_57,(void*)0,(void*)0},{&l_57,&l_57,(void*)0,(void*)0,&l_57}}};
    uint64_t l_2379 = 1UL;
    int8_t l_2896 = 0xBAL;
    int8_t l_2928 = 0x3BL;
    const struct S0 l_2975 = {-9L};
    union U3 *l_3024 = &g_1686;
    union U3 **l_3023 = &l_3024;
    uint64_t **l_3025 = &g_585[0];
    union U2 l_3033 = {0x1FL};
    struct S1 ** const l_3040 = &g_1839[3];
    int16_t l_3069 = 0L;
    uint32_t ***l_3089 = &g_885;
    uint16_t **l_3128[2][3][2];
    int32_t *l_3159 = (void*)0;
    const struct S1 * const *l_3181[1];
    int16_t **l_3225[1];
    int16_t ***l_3224 = &l_3225[0];
    uint64_t l_3227 = 0UL;
    uint16_t l_3278 = 6UL;
    int64_t *l_3362[2];
    uint32_t *l_3424 = &g_1095;
    uint32_t **l_3423 = &l_3424;
    uint8_t l_3472[5] = {0x07L,0x07L,0x07L,0x07L,0x07L};
    int64_t l_3478 = 0L;
    uint64_t *l_3481 = &g_1248.f0.f4;
    const int8_t l_3505 = 0x82L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_38[i] = 5L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
                l_3128[i][j][k] = &g_59;
        }
    }
    for (i = 0; i < 1; i++)
        l_3181[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_3225[i] = &g_129;
    for (i = 0; i < 2; i++)
        l_3362[i] = &g_631[2];
lbl_3042:
    for (g_5.f0 = (-15); (g_5.f0 >= 13); g_5.f0 = safe_add_func_int64_t_s_s(g_5.f0, 8))
    { 
        int8_t l_22 = 0x9BL;
        int32_t *l_23 = &g_24;
        int32_t **l_25[4] = {&l_23,&l_23,&l_23,&l_23};
        int i;
        (*l_23) = l_22;
        g_26 = l_23;
    }
    if (((func_27(func_33(l_37, ((*l_39)++), func_43(l_39, (p_16 | ((((((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_s((p_16 , (l_37.f0.f5 , (((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_38[1], ((g_58[1] = &g_26) != &g_26))), g_24)) , (*l_57)) == &g_24))), 10)))) > p_18) <= 0xCCC76BF0L) < 9L) != p_17) >= (**l_57))), l_39, l_37.f0.f1, g_59)), &g_2110, l_2379, p_16, l_37) , p_16) > l_2896))
    { 
        int32_t l_2918 = 0x8D2FFBFDL;
        uint32_t l_2930 = 0x4D28F65EL;
        uint16_t *l_2931 = &g_40;
        int32_t l_2937 = 0L;
        uint32_t l_2938 = 0xCF930794L;
        int32_t *l_2971[2];
        union U2 l_2972[1] = {{1UL}};
        union U3 l_3004 = {{0x52C95950L,{0x32EDAEFCL},4294967292UL,7UL,2UL,0xAF231446L,0x7EA170C7L}};
        struct S1 l_3022 = {0xFEF68892L,{0x64CB9BC3L},0x47F8E6F8L,0x0BL,0UL,0x715D6C18L,0xA0174619L};
        uint32_t ***l_3087 = (void*)0;
        uint32_t l_3095[7];
        uint32_t *l_3100[2][2] = {{&g_230[3][4],&g_230[3][4]},{&g_230[3][4],&g_230[3][4]}};
        uint16_t **l_3126 = (void*)0;
        uint16_t ***l_3127[5][7][4] = {{{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0}},{{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126}},{{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0}},{{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126}},{{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0},{&l_3126,&l_3126,&l_3126,&l_3126},{&l_3126,(void*)0,&l_3126,(void*)0}}};
        int16_t l_3138[5][7] = {{0x76D7L,0L,0L,0x76D7L,0L,0x76D7L,0L},{0x6605L,0x6605L,0x4066L,0x62DCL,0x4066L,0x6605L,0x6605L},{(-7L),0L,8L,0L,(-7L),(-7L),0L},{0xCA1EL,3L,0xCA1EL,0x4066L,0x4066L,0xCA1EL,3L},{0L,0L,8L,8L,0L,0L,0L}};
        uint16_t l_3139 = 0xC901L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_2971[i] = (void*)0;
        for (i = 0; i < 7; i++)
            l_3095[i] = 4294967295UL;
        for (g_1686.f0.f3 = 0; (g_1686.f0.f3 != 18); g_1686.f0.f3 = safe_add_func_uint16_t_u_u(g_1686.f0.f3, 9))
        { 
            int32_t l_2909 = (-4L);
        }
        l_2938--;
        if (p_17)
        { 
            uint32_t l_2960[2];
            int32_t l_2965 = (-1L);
            int32_t *l_2970 = &g_306;
            struct S1 l_2996[2] = {{0xC257DABCL,{-1L},9UL,0xF2L,0x41804C43CF9BA520LL,-1L,5UL},{0xC257DABCL,{-1L},9UL,0xF2L,0x41804C43CF9BA520LL,-1L,5UL}};
            int16_t l_3003[7][7][2] = {{{(-1L),0xB82BL},{0x4256L,(-1L)},{0xB82BL,1L},{1L,1L},{0x4256L,1L},{1L,1L},{0xB82BL,(-1L)}},{{0x4256L,0xB82BL},{(-1L),1L},{(-1L),0xB82BL},{0x4256L,(-1L)},{0xB82BL,1L},{1L,1L},{0x4256L,1L}},{{1L,1L},{0xB82BL,(-1L)},{0x4256L,0xB82BL},{(-1L),1L},{(-1L),0xB82BL},{0x4256L,(-1L)},{0xB82BL,1L}},{{1L,1L},{0x4256L,1L},{1L,1L},{0xB82BL,(-1L)},{0x4256L,0xB82BL},{(-1L),1L},{(-1L),0xB82BL}},{{0x4256L,(-1L)},{0xB82BL,1L},{1L,1L},{0x4256L,1L},{1L,1L},{0xB82BL,(-1L)},{0x4256L,0xB82BL}},{{(-1L),1L},{(-1L),0xB82BL},{0x4256L,(-1L)},{0xB82BL,1L},{1L,1L},{0x4256L,1L},{1L,1L}},{{0xB82BL,(-1L)},{0x4256L,0xB82BL},{(-1L),1L},{(-1L),0xB82BL},{0x4256L,(-1L)},{0xB82BL,1L},{1L,1L}}};
            uint64_t **l_3026 = &g_585[2];
            int32_t *l_3030[1];
            uint8_t l_3041 = 0x59L;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2960[i] = 1UL;
            for (i = 0; i < 1; i++)
                l_3030[i] = &g_1686.f0.f1.f0;
            if (((void*)0 == &l_57))
            { 
                uint64_t *l_2955 = &l_37.f0.f4;
                int32_t l_2956 = (-3L);
                if ((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_18, (((safe_mod_func_uint32_t_u_u(4294967295UL, (-9L))) < p_16) ^ (safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((****g_904) , (((*l_2955) = 0x4F3D79D7CEA75071LL) ^ (p_17 != l_2938))), l_2938)), 4)), 0xB1FAL)) >= l_2956), 0x17L))))), 3)))
                { 
                    ++g_2957;
                    (**l_57) = ((void*)0 != g_1702);
                    if (l_2896)
                        goto lbl_3473;
                }
                else
                { 
                    l_2960[0]++;
                }
                for (g_389 = 4; (g_389 >= 12); g_389 = safe_add_func_int64_t_s_s(g_389, 2))
                { 
                    uint64_t l_2966 = 1UL;
                    ++l_2966;
                    g_2969 = &g_2138[1][1][1];
                    l_2971[1] = l_2970;
                    return l_2972[0];
                }
                l_2970 = &l_2937;
                for (l_37.f3 = (-6); (l_37.f3 != 9); l_37.f3++)
                { 
                    (*l_2970) = ((*g_337) = 9L);
                    (***g_661) = l_2975;
                    if (l_2956)
                        break;
                }
            }
            else
            { 
                uint16_t l_2976 = 0x76BAL;
                union U3 l_2982 = {{9UL,{6L},0x5539DAD0L,0xA8L,0x3B2C13D7EBEA1589LL,-5L,0x3CD8CAF4L}};
                ++l_2976;
                (*g_2391) = (*g_2391);
                for (l_2937 = 0; l_2937 < 2; l_2937 += 1)
                {
                    for (g_134 = 0; g_134 < 4; g_134 += 1)
                    {
                        g_1918[l_2937][g_134] = 0x8F3AD9C5L;
                    }
                }
                for (g_1686.f2 = (-22); (g_1686.f2 <= 39); g_1686.f2++)
                { 
                    int32_t *l_2981[1];
                    union U3 *****l_2987[3];
                    const struct S1 l_2995 = {6UL,{1L},4294967292UL,246UL,0UL,1L,0UL};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2981[i] = &g_89;
                    for (i = 0; i < 3; i++)
                        l_2987[i] = (void*)0;
                    (*g_2109) = l_2981[0];
                    (*l_57) = func_33(l_2982, ((safe_mul_func_uint16_t_u_u((&g_1702 != (void*)0), (7L == (safe_sub_func_uint16_t_u_u((***g_1858), ((&g_1702 == (g_2988 = &g_1702)) != p_16)))))) < p_17), l_2981[0]);
                    if ((*g_26))
                        continue;
                    (*l_57) = func_33(l_37, (((safe_mod_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_s((l_2995 , (((l_2996[0] , (safe_div_func_int32_t_s_s((*g_2110), (*g_26)))) & (safe_mod_func_uint16_t_u_u(((**g_2816) & (safe_div_func_int64_t_s_s((**g_870), 18446744073709551611UL))), (*g_129)))) && p_16)), 12)) >= (*g_2394)) ^ l_2982.f0.f4) | 0L), (*g_2817))) != l_3003[4][2][1]), p_17)) | p_18) >= 0x567CC459L), l_2981[0]);
                    (*g_337) = (*l_2970);
                }
                l_2971[1] = func_33(l_3004, (safe_add_func_int8_t_s_s(l_2982.f0.f5, ((((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s(0x9E97L, (!p_17))), ((safe_mul_func_uint8_t_u_u(((**g_2816)++), (-1L))) , (safe_lshift_func_uint8_t_u_u((4294967295UL == (safe_rshift_func_uint16_t_u_u((p_18 > (*l_2970)), 7))), p_16))))), l_2982.f0.f4)) & (*l_2970)) | (**l_57)) > (*g_59)))), &l_2965);
            }
            if (((0x9CC4L == (((((((l_3022 , l_3023) != &l_3024) , p_16) > (p_17 != (l_3025 != l_3026))) >= p_16) < 0xEE854FF66B6091F0LL) <= (**g_2816))) == (**g_2816)))
            { 
                for (p_17 = (-19); (p_17 != 58); p_17 = safe_add_func_uint64_t_u_u(p_17, 7))
                { 
                    int32_t *l_3029[3][7] = {{&g_232[2].f0.f5,&g_1248.f0.f5,&g_232[2].f0.f5,&g_232[2].f0.f5,&g_1248.f0.f5,&g_232[2].f0.f5,&g_232[2].f0.f5},{&g_1248.f0.f5,&g_1248.f0.f5,&g_24,&g_1248.f0.f5,&g_1248.f0.f5,&g_24,&g_1248.f0.f5},{&g_1248.f0.f5,&g_232[2].f0.f5,&g_232[2].f0.f5,&g_1248.f0.f5,&g_232[2].f0.f5,&g_232[2].f0.f5,&g_1248.f0.f5}};
                    int i, j;
                    if (p_16)
                        break;
                    l_3030[0] = l_3029[0][5];
                }
                for (g_2044 = 0; (g_2044 == 56); g_2044++)
                { 
                    return l_3033;
                }
            }
            else
            { 
                int8_t *l_3038[2][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                int32_t l_3039 = (-1L);
                int i, j, k;
                (*l_2970) &= ((safe_add_func_int16_t_s_s(((**g_2393) | (safe_lshift_func_int8_t_s_s(p_18, (*g_2394)))), (((l_3039 = 0x8CL) , (((void*)0 != l_3040) > ((l_3041 || (**l_57)) && (-10L)))) < p_17))) || (**g_870));
            }
            return l_3033;
        }
        else
        { 
            uint64_t l_3053 = 1UL;
            union U2 l_3068 = {0x41L};
            union U3 l_3074[1][7] = {{{{7UL,{7L},0xCD357B8DL,1UL,0x7C811DC18A39F916LL,0x54AEF1D5L,0xA00EBEA2L}},{{7UL,{7L},0xCD357B8DL,1UL,0x7C811DC18A39F916LL,0x54AEF1D5L,0xA00EBEA2L}},{{7UL,{7L},0xCD357B8DL,1UL,0x7C811DC18A39F916LL,0x54AEF1D5L,0xA00EBEA2L}},{{7UL,{7L},0xCD357B8DL,1UL,0x7C811DC18A39F916LL,0x54AEF1D5L,0xA00EBEA2L}},{{7UL,{7L},0xCD357B8DL,1UL,0x7C811DC18A39F916LL,0x54AEF1D5L,0xA00EBEA2L}},{{7UL,{7L},0xCD357B8DL,1UL,0x7C811DC18A39F916LL,0x54AEF1D5L,0xA00EBEA2L}},{{7UL,{7L},0xCD357B8DL,1UL,0x7C811DC18A39F916LL,0x54AEF1D5L,0xA00EBEA2L}}}};
            int8_t **** const l_3075 = &g_2392[5];
            union U2 **l_3081 = (void*)0;
            union U2 ***l_3080 = &l_3081;
            union U2 **** const l_3079 = &l_3080;
            int32_t l_3093[3][6] = {{(-5L),0x6DB184B2L,(-5L),(-1L),(-1L),(-5L)},{0L,0L,(-1L),0xF964D5BCL,(-1L),0L},{(-1L),0x6DB184B2L,0xF964D5BCL,0x6DB184B2L,0L,(-5L)}};
            int32_t l_3094 = (-8L);
            union U2 ** const **l_3098 = &g_905;
            int i, j;
            if (l_3022.f4)
                goto lbl_3042;
            for (l_3022.f2 = 0; (l_3022.f2 < 1); l_3022.f2++)
            { 
                uint8_t l_3045 = 0xA1L;
                for (g_433.f1 = 2; (g_433.f1 <= 6); g_433.f1 += 1)
                { 
                    --l_3045;
                    return l_3033;
                }
            }
            for (l_3004.f3 = 0; (l_3004.f3 <= 60); l_3004.f3 = safe_add_func_uint64_t_u_u(l_3004.f3, 2))
            { 
                uint16_t l_3060 = 65535UL;
                uint32_t *l_3061 = &l_2930;
                int32_t l_3062 = 0x64A321E3L;
                const uint32_t l_3067 = 4294967295UL;
                const struct S1 *l_3072[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t *l_3078 = &l_3074[0][6].f0.f1.f0;
                uint32_t ****l_3088 = &l_3087;
                struct S0 l_3090 = {0x3DB6E35FL};
                union U2 l_3092 = {0UL};
                int i;
                if ((safe_rshift_func_int8_t_s_u(((~(p_18 , l_3053)) , (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(p_17, (((*l_3061) = l_3060) ^ (l_3053 , (l_3062 = p_17))))), ((*g_59) &= (safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s((l_3025 == (void*)0), l_3067)), (-6L)))))), (*g_2358)))), 6)))
                { 
                    return l_3068;
                }
                else
                { 
                    int32_t **l_3073[5][1][2];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_3073[i][j][k] = &l_2971[1];
                        }
                    }
                    (*g_26) |= (l_3053 , l_3068.f0);
                    (**l_57) = (l_3069 != ((p_18 != (safe_div_func_uint64_t_u_u((((*l_3040) = (*l_3040)) != l_3072[2]), 0xE775BFAB034A6D65LL))) > ((l_3074[0][6] , l_3075) != (void*)0)));
                }
                (***g_661) = l_3022.f1;
                for (l_3033.f0 = 0; (l_3033.f0 == 50); ++l_3033.f0)
                { 
                    union U2 ****l_3083 = &l_3080;
                    union U2 *****l_3082[1];
                    union U2 *****l_3084 = (void*)0;
                    union U2 *****l_3085 = (void*)0;
                    union U2 *****l_3086 = &l_3083;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_3082[i] = &l_3083;
                    if (p_17)
                        break;
                    l_3078 = ((*g_2109) = ((*l_57) = l_3078));
                    (*l_3086) = l_3079;
                }
                (*g_462) = ((((((l_3090 = ((***g_662) = ((((*l_3088) = l_3087) == l_3089) , (**g_642)))) , &g_460) == (void*)0) && ((void*)0 == g_3091)) , l_3074[0][6].f0.f0) , &l_2972[0]);
                return l_3092;
            }
            ++l_3095[2];
            g_3099[4] = ((*g_903) = l_3098);
        }
        l_3139 ^= (l_3138[2][3] ^= ((p_17++) , ((safe_mod_func_int8_t_s_s((!((*g_326) &= (((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((((****g_2391) |= 0x7DL) | (((safe_mod_func_int16_t_s_s(p_16, (safe_rshift_func_uint16_t_u_u((+(safe_add_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((((*g_1858) = &l_39) == (l_3128[0][0][0] = l_3126)), 3)) == (*g_59)), 0x02L)), ((+(((((**l_57) = (safe_mod_func_uint8_t_u_u(((+((safe_div_func_uint8_t_u_u((((**l_3023) , p_18) && p_16), p_17)) && 0x338AL)) && 0xA7L), 0x1EL))) , &l_3126) == (void*)0) >= p_17)) ^ p_18))) , (void*)0) != g_3135))), 4294967295UL))), 6)))) , p_16) != p_18)) & 1UL), g_3137)), p_17)), p_16)) & 0x5B9FL) < p_16))), (**g_2816))) , 2L)));
    }
    else
    { 
        struct S0 l_3143 = {0x5F222A26L};
        int32_t *l_3144 = &g_89;
        uint64_t l_3156 = 18446744073709551615UL;
        uint16_t *l_3158 = &g_1686.f3;
        uint64_t *l_3173[5][4][5] = {{{&g_1248.f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4},{&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4},{&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_1248.f0.f4},{&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&l_2379,&g_232[2].f0.f4}},{{&g_232[2].f0.f4,&g_232[2].f0.f4,&l_37.f0.f4,&g_232[2].f0.f4,&g_1248.f0.f4},{&g_232[2].f0.f4,&l_2379,&g_232[2].f0.f4,&l_2379,&g_232[2].f0.f4},{&g_1248.f0.f4,&g_232[2].f0.f4,&l_37.f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4},{&g_232[2].f0.f4,&l_2379,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4}},{{&g_1248.f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4},{&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4},{&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_1248.f0.f4},{&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&l_2379,&g_232[2].f0.f4}},{{&g_232[2].f0.f4,&g_232[2].f0.f4,&l_37.f0.f4,&g_232[2].f0.f4,&g_1248.f0.f4},{&g_232[2].f0.f4,&l_2379,&g_232[2].f0.f4,&l_2379,&g_232[2].f0.f4},{&g_1248.f0.f4,&g_232[2].f0.f4,&l_37.f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4},{&g_232[2].f0.f4,&l_2379,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4}},{{&g_1248.f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4},{&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4},{&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&g_1248.f0.f4},{&g_232[2].f0.f4,&g_232[2].f0.f4,&g_232[2].f0.f4,&l_2379,&g_232[2].f0.f4}}};
        uint32_t l_3174 = 3UL;
        int32_t l_3175[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_3175[i] = 0L;
        if ((+(safe_lshift_func_uint8_t_u_s(((*g_2817) = 246UL), 2))))
        { 
            int32_t l_3149 = 1L;
            int32_t l_3150 = 0L;
            int16_t l_3155 = 0x30F5L;
            uint64_t *l_3157 = &g_1248.f0.f4;
            l_3144 = (l_3143 , l_3144);
            (*l_57) = (((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_3149, (l_3150 = (*l_3144)))), (((*g_2358) = 0x637CL) >= ((((((safe_mod_func_uint16_t_u_u((((((*l_3157) = ((0x299FL == (&l_3128[0][1][0] != &g_1859)) && ((*g_129) |= (l_3155 & l_3156)))) == (*l_3144)) , l_3033) , p_17), p_18)) ^ p_16) & (**l_57)) , p_16) >= (*l_3144)) < 0x5410DABFL)))) >= 1L) , (void*)0);
        }
        else
        { 
            l_3159 = func_43(l_3158, (*g_2817), (*g_1859), l_2975, l_3158);
            return l_3033;
        }
        (*g_1067) = (p_16 > (((p_18 == ((*g_2394) = p_16)) , (((-1L) <= 0x85141723L) >= (**g_1859))) || 246UL));
        l_3175[0] |= (((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*l_3144), (+(safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((p_16 && ((*g_1067) = (safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((((l_3033 , (((l_3143 , (p_16 ^ ((l_3143.f0 = (p_18 <= p_17)) >= p_17))) & l_3174) <= p_18)) ^ p_17) | 0x56L), p_16)), 0x57C0EFA4F5BB1C8ELL)))), (*l_3144))), 7UL))))), 0)) < (**g_2393)) , p_17);
    }
    for (g_433.f0.f3 = 0; (g_433.f0.f3 <= 3); g_433.f0.f3 += 1)
    { 
        uint64_t l_3176 = 0xB017A6BBBA474694LL;
        const uint64_t l_3190 = 0UL;
        int16_t *l_3191[7] = {&l_3069,&l_3069,&l_3069,&l_3069,&l_3069,&l_3069,&l_3069};
        uint64_t l_3192 = 1UL;
        int32_t * const l_3195 = &g_24;
        union U2 l_3210 = {0x75L};
        int32_t l_3231 = 0x69A37228L;
        int32_t l_3238 = 0L;
        int32_t l_3239 = (-9L);
        int32_t l_3245 = 0x6B868D8CL;
        int32_t l_3246 = 0xA205E623L;
        int32_t l_3247 = 1L;
        int32_t l_3249[7][7];
        int32_t l_3254 = 0x4372BC7EL;
        int8_t l_3263 = 9L;
        int16_t l_3274 = (-1L);
        uint32_t l_3275 = 0x0CC8735AL;
        uint32_t l_3276 = 9UL;
        uint8_t l_3277 = 0x21L;
        const uint8_t l_3307 = 0x1DL;
        union U3 *****l_3319 = &g_2988;
        struct S1 l_3341 = {1UL,{1L},0x8803A31DL,255UL,6UL,6L,0x71506DC0L};
        uint32_t l_3347 = 0x0E98CFDCL;
        int16_t l_3394 = 1L;
        int64_t ***l_3400[4] = {&g_325[6],&g_325[6],&g_325[6],&g_325[6]};
        union U3 l_3404[4] = {{{1UL,{0xF8E2C26BL},0xCC810FEAL,0x20L,18446744073709551610UL,0xDEA5D2C9L,4294967291UL}},{{1UL,{0xF8E2C26BL},0xCC810FEAL,0x20L,18446744073709551610UL,0xDEA5D2C9L,4294967291UL}},{{1UL,{0xF8E2C26BL},0xCC810FEAL,0x20L,18446744073709551610UL,0xDEA5D2C9L,4294967291UL}},{{1UL,{0xF8E2C26BL},0xCC810FEAL,0x20L,18446744073709551610UL,0xDEA5D2C9L,4294967291UL}}};
        const union U2 ****l_3428[4];
        int8_t *** const *l_3432[7] = {&g_2392[3],&g_2392[3],&g_2392[3],&g_2392[3],&g_2392[3],&g_2392[3],&g_2392[3]};
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 7; j++)
                l_3249[i][j] = 0xECDFBCFEL;
        }
        for (i = 0; i < 4; i++)
            l_3428[i] = &g_461[5];
    }
lbl_3473:
    (*g_1067) = (l_3472[4] < (l_3033 , 0x22L));
    if ((safe_add_func_uint16_t_u_u(0x9654L, ((((*l_3481) = (safe_sub_func_uint16_t_u_u(l_3478, (safe_mul_func_int8_t_s_s(p_17, ((****g_2391) |= 0x2FL)))))) && 0x73176403F31EDF3BLL) < p_17))))
    { 
        uint32_t l_3484 = 0x26BE5851L;
        int32_t ****l_3487[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        struct S0 l_3490 = {0x3EEF7194L};
        uint16_t *l_3491 = &g_3375;
        int32_t **l_3502[6][6][7] = {{{&g_2110,&g_2110,&g_2110,(void*)0,&g_2110,(void*)0,(void*)0},{&l_3159,&g_26,(void*)0,&g_26,(void*)0,&g_2110,&l_3159},{&l_3159,&l_3159,&g_26,&l_3159,&g_2110,(void*)0,&g_2110},{&g_26,(void*)0,&g_2110,&l_3159,&g_26,&l_3159,&g_26},{&g_2110,&g_2110,(void*)0,&l_3159,(void*)0,&g_2110,&g_26},{&l_3159,&g_2110,&g_2110,&g_2110,(void*)0,&g_26,(void*)0}},{{(void*)0,&l_3159,&g_2110,(void*)0,&g_2110,(void*)0,&l_3159},{&l_3159,&g_26,(void*)0,&l_3159,&g_2110,(void*)0,&l_3159},{&g_2110,&g_2110,(void*)0,&g_2110,(void*)0,&g_26,&g_26},{&g_26,&g_26,&g_2110,(void*)0,(void*)0,(void*)0,&l_3159},{&g_2110,&g_26,&g_26,&g_2110,&g_2110,&g_26,&g_26},{&g_26,&g_2110,&g_2110,&g_2110,&g_26,(void*)0,&g_26}},{{(void*)0,&g_26,(void*)0,&l_3159,&g_26,&g_2110,(void*)0},{&g_2110,(void*)0,&l_3159,&g_2110,&g_2110,&g_2110,&g_26},{(void*)0,(void*)0,(void*)0,&g_2110,&g_2110,&g_2110,(void*)0},{(void*)0,&g_26,&l_3159,(void*)0,&g_26,&g_2110,&g_26},{&g_26,&g_26,&g_2110,&g_2110,&g_26,&l_3159,&l_3159},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_3159,&g_26}},{{&g_2110,(void*)0,(void*)0,&g_2110,(void*)0,(void*)0,&g_2110},{&g_2110,&g_26,&g_2110,(void*)0,(void*)0,&l_3159,&g_2110},{&l_3159,&g_2110,&l_3159,&g_26,(void*)0,(void*)0,&g_26},{(void*)0,&l_3159,(void*)0,(void*)0,&l_3159,(void*)0,&g_2110},{&g_2110,(void*)0,&l_3159,(void*)0,&g_26,(void*)0,&g_2110},{&l_3159,&g_2110,(void*)0,&l_3159,&l_3159,(void*)0,&g_26}},{{(void*)0,(void*)0,&g_2110,(void*)0,(void*)0,&g_2110,(void*)0},{(void*)0,&l_3159,&g_26,&g_26,&g_2110,&g_2110,&l_3159},{&g_26,&g_2110,&g_2110,&l_3159,&g_26,(void*)0,&g_26},{&g_2110,&g_26,(void*)0,&l_3159,&g_26,(void*)0,(void*)0},{&g_26,(void*)0,&l_3159,(void*)0,&g_2110,&l_3159,&g_26},{&g_26,(void*)0,&l_3159,&g_26,&g_2110,(void*)0,&g_2110}},{{&g_2110,&g_26,&l_3159,(void*)0,&g_26,(void*)0,&g_26},{&g_26,&g_26,(void*)0,(void*)0,&g_26,&l_3159,&g_26},{(void*)0,(void*)0,(void*)0,(void*)0,&g_2110,(void*)0,&g_26},{(void*)0,(void*)0,(void*)0,&g_2110,&g_26,&g_26,&g_2110},{&l_3159,&g_26,&l_3159,&g_2110,(void*)0,&g_26,&g_26},{&g_2110,&g_2110,&g_2110,&l_3159,&g_26,&g_2110,&g_2110}}};
        const union U3 l_3503 = {{1UL,{0L},0xDB297681L,255UL,0xB9F2AA6F56F6ECE5LL,0x5DF934EDL,9UL}};
        union U3 l_3504 = {{4294967290UL,{0x7EC759A9L},7UL,1UL,0x59902896B0E25942LL,0x569F52FBL,0x56726A75L}};
        int32_t **l_3506 = &l_3159;
        const struct S0 ****l_3510 = (void*)0;
        const struct S0 *****l_3511 = &l_3510;
        int8_t ****l_3512 = (void*)0;
        int8_t *****l_3513 = &g_2391;
        int8_t ****l_3515[1][7][1] = {{{&g_2392[3]},{(void*)0},{&g_2392[3]},{(void*)0},{&g_2392[3]},{(void*)0},{&g_2392[3]}}};
        int8_t *****l_3514 = &l_3515[0][5][0];
        int i, j, k;
        for (g_1686.f0.f1.f0 = 0; (g_1686.f0.f1.f0 == (-3)); g_1686.f0.f1.f0 = safe_sub_func_uint16_t_u_u(g_1686.f0.f1.f0, 4))
        { 
            int32_t l_3489 = 0xA82EABC4L;
            int32_t **l_3492 = &l_3159;
            if (l_3484)
                break;
            (*g_1067) = (0L < (p_16 | (l_3487[1] != (void*)0)));
            (*l_3492) = func_43((*g_1859), ((**g_2816) = (g_3488 , l_3489)), (*g_1859), (l_3490 = l_2975), l_3491);
        }
        (*l_3506) = func_43(l_3491, (safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(p_18, 7)) || p_18), (p_18 , (+(p_17 > (safe_add_func_uint8_t_u_u((((l_3504 , l_3505) != p_18) , (*g_2817)), 251UL))))))), p_17)), (*g_1859), l_3504.f0.f1, l_3491);
        (*l_3506) = func_33(l_3503, p_16, (*l_57));
    }
    else
    { 
        int8_t l_3523 = 0L;
        int32_t l_3527 = 0x225DD064L;
        for (g_1248.f2 = 0; (g_1248.f2 > 21); ++g_1248.f2)
        { 
            uint16_t l_3520 = 65528UL;
            struct S1 l_3524 = {1UL,{0x5A3C2CB5L},0x1191455FL,0x1BL,0xDA00A01310D5A841LL,-1L,0x3A7F92EEL};
            int32_t * const l_3525 = &g_232[2].f0.f5;
            int32_t **l_3526 = &g_2110;
            (*l_57) = (((safe_add_func_uint8_t_u_u(l_3520, l_3520)) == ((0x658FCAC9L && (((**g_1492) ^ ((l_3523 ^ 0UL) , (l_3524 , 1L))) | l_3524.f0)) && 255UL)) , (void*)0);
            (*l_3526) = l_3525;
            l_3527 = (*l_3525);
        }
        return l_3033;
    }
    return l_3033;
}



static union U3  func_27(int32_t * p_28, int32_t ** p_29, int32_t  p_30, uint8_t  p_31, const union U3  p_32)
{ 
    int16_t l_2410 = 0x032DL;
    int8_t **l_2413 = &g_2394;
    const int8_t *l_2415 = (void*)0;
    const int8_t **l_2414 = &l_2415;
    int32_t l_2430[6] = {0x4D1A5969L,0x4D1A5969L,0x4D1A5969L,0x4D1A5969L,0x4D1A5969L,0x4D1A5969L};
    uint8_t *l_2452 = (void*)0;
    uint8_t * const *l_2451 = &l_2452;
    int8_t l_2478 = 0x1DL;
    int16_t l_2490[7][1][6] = {{{0x3975L,8L,0x0DA3L,(-8L),(-8L),0x0DA3L}},{{5L,5L,(-1L),0x9A45L,(-8L),0L}},{{(-8L),8L,7L,0x9A45L,8L,(-1L)}},{{5L,(-8L),7L,(-8L),5L,0L}},{{0x3975L,(-8L),(-1L),0x3975L,8L,0x0DA3L}},{{0x3975L,8L,0x0DA3L,(-8L),(-8L),0x0DA3L}},{{5L,5L,(-1L),0x9A45L,(-8L),0L}}};
    uint32_t *l_2498 = &g_134;
    int16_t l_2612[7][4] = {{0x6A08L,(-5L),4L,4L},{0x13FCL,0x13FCL,0x6A08L,4L},{0xE43AL,(-5L),0xE43AL,0x6A08L},{0xE43AL,0x6A08L,0x6A08L,0xE43AL},{0x13FCL,0x6A08L,4L,0x6A08L},{0x6A08L,(-5L),4L,4L},{0x13FCL,0x13FCL,0x6A08L,4L}};
    uint8_t l_2632 = 1UL;
    struct S0 l_2636[1] = {{0x09275C01L}};
    uint8_t ****l_2668 = &g_1234;
    uint8_t **** const l_2682 = &g_1234;
    int64_t l_2720 = 1L;
    const union U2 l_2730 = {255UL};
    int64_t **l_2731 = &g_326;
    uint16_t l_2760 = 0UL;
    uint32_t l_2852 = 18446744073709551610UL;
    uint64_t **l_2861 = (void*)0;
    uint64_t ***l_2860 = &l_2861;
    uint64_t ****l_2859 = &l_2860;
    int8_t ****l_2872 = &g_2392[1];
    uint32_t *l_2891[4][7][2] = {{{&g_1095,&g_232[2].f0.f2},{&g_232[2].f0.f2,&g_1095},{&g_232[2].f0.f2,&g_232[2].f0.f2},{&g_1095,&g_232[2].f0.f2},{&g_232[2].f0.f2,&g_1095},{&g_232[2].f0.f2,&g_232[2].f0.f2},{&g_1095,&g_232[2].f0.f2}},{{&g_232[2].f0.f2,&g_1095},{&g_232[2].f0.f2,&g_232[2].f0.f2},{&g_1095,&g_232[2].f0.f2},{&g_232[2].f0.f2,&g_1095},{&g_232[2].f0.f2,&g_232[2].f0.f2},{&g_1095,&g_232[2].f0.f2},{&g_232[2].f0.f2,&g_1095}},{{&g_232[2].f0.f2,&g_232[2].f0.f2},{&g_1095,&g_232[2].f0.f2},{&g_232[2].f0.f2,&g_1095},{&g_232[2].f0.f2,&g_232[2].f0.f2},{&g_1095,&g_232[2].f0.f2},{&g_232[2].f0.f2,&g_1095},{&g_232[2].f0.f2,&g_232[2].f0.f2}},{{&g_1095,&g_232[2].f0.f2},{&g_232[2].f0.f2,&g_1095},{&g_232[2].f0.f2,&g_232[2].f0.f2},{&g_1095,&g_232[2].f0.f2},{&g_232[2].f0.f2,&g_1095},{&g_232[2].f0.f2,&g_232[2].f0.f2},{&g_1095,&g_232[2].f0.f2}}};
    uint32_t **l_2890[4][5][4] = {{{&l_2891[0][3][0],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_2891[1][4][0]},{&l_2891[2][1][0],(void*)0,&l_2891[0][6][0],&l_2891[2][1][0]},{&l_2891[2][6][0],&l_2891[2][1][0],&l_2891[1][4][0],(void*)0},{(void*)0,&l_2891[1][3][0],&l_2891[1][4][0],&l_2891[2][1][0]}},{{&l_2891[2][6][0],&l_2891[0][6][0],&l_2891[0][6][0],&l_2891[2][6][0]},{&l_2891[2][1][0],(void*)0,(void*)0,&l_2891[2][4][0]},{(void*)0,&l_2891[2][4][0],(void*)0,&l_2891[1][3][0]},{&l_2891[0][3][0],(void*)0,(void*)0,&l_2891[1][3][0]},{&l_2891[2][1][0],&l_2891[2][4][0],&l_2891[0][3][0],&l_2891[2][4][0]}},{{&l_2891[2][1][0],(void*)0,(void*)0,&l_2891[2][6][0]},{(void*)0,(void*)0,(void*)0,&l_2891[2][1][0]},{&l_2891[2][4][0],(void*)0,&l_2891[2][1][0],&l_2891[0][3][0]},{&l_2891[2][4][0],&l_2891[0][6][0],(void*)0,(void*)0},{&l_2891[0][3][0],&l_2891[0][3][0],&l_2891[1][3][0],&l_2891[2][1][0]}},{{&l_2891[1][4][0],&l_2891[1][3][0],(void*)0,&l_2891[2][6][0]},{(void*)0,&l_2891[2][1][0],&l_2891[2][1][0],(void*)0},{(void*)0,&l_2891[2][1][0],&l_2891[0][3][0],&l_2891[2][6][0]},{&l_2891[2][1][0],&l_2891[1][3][0],&l_2891[2][1][0],&l_2891[2][1][0]},{&l_2891[0][6][0],&l_2891[0][3][0],(void*)0,(void*)0}}};
    int32_t l_2892[3];
    union U3 l_2895 = {{0x23511731L,{-1L},0x3C85AFE2L,0x06L,0xF8DBF62EBCD1D0F9LL,0x05806668L,0xCE7AF26CL}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2892[i] = 0L;
    for (g_1686.f3 = 9; (g_1686.f3 > 12); ++g_1686.f3)
    { 
        uint16_t *l_2388 = &g_1248.f3;
        union U3 l_2399 = {{0UL,{0x1BF81053L},4294967294UL,0xF1L,0UL,-1L,0x97160B4EL}};
        uint8_t *l_2406 = (void*)0;
        uint8_t *l_2407 = (void*)0;
        uint8_t *l_2408 = &g_1248.f0.f3;
        int32_t l_2409 = 1L;
        union U2 l_2411 = {0x83L};
        int64_t l_2429[5];
        union U3 *l_2431 = &l_2399;
        union U3 * const *l_2444 = &l_2431;
        union U3 * const **l_2443[2][1][3] = {{{&l_2444,&l_2444,&l_2444}},{{&l_2444,&l_2444,&l_2444}}};
        union U3 * const ***l_2442 = &l_2443[0][0][0];
        int32_t l_2470 = 0x2C1D4735L;
        int32_t l_2474 = 0x0E904D70L;
        int32_t l_2477 = 0x08A14A3AL;
        int32_t l_2480[4];
        uint32_t l_2538 = 4294967295UL;
        uint64_t **l_2549 = &g_585[2];
        uint64_t ***l_2548 = &l_2549;
        uint64_t ****l_2547[7][1];
        int32_t l_2571 = (-3L);
        int32_t **l_2575[5] = {&g_2110,&g_2110,&g_2110,&g_2110,&g_2110};
        int64_t l_2613 = 0L;
        uint32_t l_2704 = 0x9BD5A98EL;
        int64_t l_2709[4][4][2] = {{{0xC20B11D575582AA7LL,0xFF8CE0E79F309731LL},{0x3B85A56DFD5E3458LL,0xD559BFEC42AB9023LL},{0xD559BFEC42AB9023LL,0x3D414EFDAD1FC94CLL},{(-10L),0x3D414EFDAD1FC94CLL}},{{0xD559BFEC42AB9023LL,0xD559BFEC42AB9023LL},{0x3B85A56DFD5E3458LL,0xFF8CE0E79F309731LL},{0xC20B11D575582AA7LL,0xD42B4A4540C12A54LL},{(-6L),7L}},{{0x3D414EFDAD1FC94CLL,(-6L)},{0x0CBA410286879F1DLL,(-5L)},{0x0CBA410286879F1DLL,(-6L)},{0x3D414EFDAD1FC94CLL,7L}},{{(-6L),0xD42B4A4540C12A54LL},{0xC20B11D575582AA7LL,0xFF8CE0E79F309731LL},{0x3B85A56DFD5E3458LL,0xD559BFEC42AB9023LL},{0xD559BFEC42AB9023LL,0x3D414EFDAD1FC94CLL}}};
        int64_t **l_2732 = &g_326;
        union U2 * const **l_2780 = &g_573[0][1][0];
        uint8_t l_2787 = 0xBFL;
        int8_t **l_2837[7] = {&g_2394,(void*)0,(void*)0,&g_2394,(void*)0,(void*)0,&g_2394};
        int32_t l_2873 = 6L;
        int32_t l_2882 = 5L;
        int64_t *l_2883 = &l_2613;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_2429[i] = 0xED8611DE466E0E22LL;
        for (i = 0; i < 4; i++)
            l_2480[i] = 1L;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_2547[i][j] = &l_2548;
        }
        (*g_1067) |= (safe_mod_func_int16_t_s_s(((~(((*g_2358) = ((*g_59) = (safe_unary_minus_func_uint8_t_u(p_32.f0.f5)))) ^ p_30)) >= ((*g_1493) < 0x8CE7A4FBB89C036FLL)), (safe_lshift_func_uint8_t_u_s(((*g_129) & (--g_40)), ((void*)0 == g_2391)))));
    }
    (*p_29) = ((((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((*g_871) <= (safe_lshift_func_uint16_t_u_s(((((0x9EAEL != 1L) <= (g_94 , (l_2730.f0 >= ((l_2890[0][1][1] != &l_2891[2][1][0]) >= (*g_2817))))) , (*g_129)) <= l_2612[5][2]), p_32.f0.f6))) & 0xC7E84B12DE3AD2FCLL), p_32.f0.f6)), p_32.f0.f6)) && l_2892[1]) & 0xB7488154E0F62673LL) , &l_2430[4]);
    for (g_433.f1 = 0; (g_433.f1 > 12); g_433.f1 = safe_add_func_int16_t_s_s(g_433.f1, 6))
    { 
        (*g_2110) |= l_2612[6][2];
    }
    return l_2895;
}



static int32_t * func_33(union U3  p_34, uint16_t  p_35, int32_t * const  p_36)
{ 
    uint64_t l_1210[2];
    union U2 *l_1211 = &g_576;
    int32_t l_1251[4][6] = {{0x55B21EDDL,0x55B21EDDL,0L,0L,0x55B21EDDL,0x55B21EDDL},{0x55B21EDDL,0L,0L,0x55B21EDDL,0x55B21EDDL,0L},{0x55B21EDDL,0x55B21EDDL,0L,0L,0x55B21EDDL,0x55B21EDDL},{0x55B21EDDL,0L,0L,0x55B21EDDL,0x55B21EDDL,0L}};
    int64_t l_1252 = 0x954040E89B34D5F1LL;
    uint16_t **l_1258 = &g_59;
    uint8_t l_1284 = 0x09L;
    struct S1 *l_1316[6];
    struct S1 * const *l_1315 = &l_1316[3];
    uint32_t l_1318 = 18446744073709551615UL;
    int32_t ***l_1366 = &g_58[1];
    int16_t l_1408 = 5L;
    struct S0 ***l_1471 = (void*)0;
    struct S0 l_1485 = {-4L};
    const int32_t l_1502 = 4L;
    int64_t l_1549 = 7L;
    uint64_t l_1551 = 18446744073709551615UL;
    int64_t l_1577 = 0L;
    struct S0 l_1583 = {-7L};
    int8_t *l_1595[4][2][1] = {{{&g_799},{&g_1455}},{{&g_1455},{&g_799}},{{&g_1455},{&g_1455}},{{&g_799},{&g_1455}}};
    int16_t l_1624 = 0x4F0DL;
    uint64_t l_1662[6] = {0x1B2017A73C85E9F7LL,1UL,1UL,0x1B2017A73C85E9F7LL,1UL,1UL};
    int16_t l_1716[2][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L}};
    uint64_t l_1749 = 3UL;
    union U3 l_1791 = {{1UL,{0xB23F0574L},4294967293UL,255UL,18446744073709551615UL,0L,0x0958AECAL}};
    int32_t *l_1801 = &l_1583.f0;
    int32_t *l_1802 = &l_1583.f0;
    int32_t *l_1803 = &g_394;
    int32_t *l_1804 = &g_394;
    int32_t *l_1805 = &g_1248.f0.f5;
    int32_t *l_1806[6][5][7] = {{{(void*)0,&g_89,&g_306,(void*)0,&g_5.f0,(void*)0,&g_1248.f0.f5},{&g_24,&l_1251[3][0],&g_5.f0,(void*)0,&l_1485.f0,(void*)0,&g_89},{&g_394,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_232[2].f0.f1.f0,&g_5.f0,(void*)0,&l_1485.f0,&g_306,&l_1251[1][2]},{&g_1248.f0.f1.f0,&l_1251[1][2],(void*)0,(void*)0,&g_1248.f0.f1.f0,(void*)0,&g_5.f0}},{{&l_1583.f0,&g_1248.f0.f5,(void*)0,(void*)0,&g_394,&g_5.f0,&l_1251[3][0]},{&g_1248.f0.f1.f0,&g_5.f0,(void*)0,(void*)0,&l_1251[1][2],&g_5.f0,&g_232[2].f0.f1.f0},{(void*)0,&g_89,&g_306,(void*)0,&g_5.f0,(void*)0,&g_1248.f0.f5},{&g_24,&l_1251[3][0],&g_5.f0,(void*)0,&l_1583.f0,&l_1485.f0,&g_24},{&g_24,&l_1251[1][2],&l_1485.f0,(void*)0,(void*)0,&l_1485.f0,&l_1251[1][2]}},{{&g_232[2].f0.f1.f0,&l_1251[1][4],(void*)0,(void*)0,&g_394,&g_394,&g_1248.f0.f1.f0},{&l_1251[1][2],&g_1248.f0.f1.f0,&l_1485.f0,(void*)0,&g_1248.f0.f1.f0,&g_5.f0,&g_1248.f0.f1.f0},{&g_89,&g_306,&g_5.f0,(void*)0,&g_1248.f0.f1.f0,(void*)0,&g_89},{&g_1248.f0.f5,&g_1248.f0.f1.f0,&l_1251[1][2],(void*)0,&g_24,&g_1248.f0.f1.f0,&l_1251[1][4]},{&g_394,&g_24,&g_394,(void*)0,(void*)0,&l_1251[1][2],&g_306}},{{&g_433.f0.f5,&g_89,&g_1248.f0.f1.f0,(void*)0,&l_1583.f0,&l_1485.f0,&g_24},{&g_24,&l_1251[1][2],&l_1485.f0,(void*)0,(void*)0,&l_1485.f0,&l_1251[1][2]},{&g_232[2].f0.f1.f0,&l_1251[1][4],(void*)0,(void*)0,&g_394,&g_394,&g_1248.f0.f1.f0},{&l_1251[1][2],&g_1248.f0.f1.f0,&l_1485.f0,(void*)0,&g_1248.f0.f1.f0,&g_5.f0,&g_1248.f0.f1.f0},{&g_89,&g_306,&g_5.f0,(void*)0,&g_1248.f0.f1.f0,(void*)0,&g_89}},{{&g_1248.f0.f5,&g_1248.f0.f1.f0,&l_1251[1][2],(void*)0,&g_24,&g_1248.f0.f1.f0,&l_1251[1][4]},{&g_394,&g_24,&g_394,(void*)0,(void*)0,&l_1251[1][2],&g_306},{&g_433.f0.f5,&g_89,&g_1248.f0.f1.f0,(void*)0,&l_1583.f0,&l_1485.f0,&g_24},{&g_24,&l_1251[1][2],&l_1485.f0,(void*)0,(void*)0,&l_1485.f0,&l_1251[1][2]},{&g_232[2].f0.f1.f0,&l_1251[1][4],(void*)0,(void*)0,&g_394,&g_394,&g_1248.f0.f1.f0}},{{&l_1251[1][2],&g_1248.f0.f1.f0,&l_1485.f0,(void*)0,&g_1248.f0.f1.f0,&g_5.f0,&g_1248.f0.f1.f0},{&g_89,&g_306,&g_5.f0,(void*)0,&g_1248.f0.f1.f0,(void*)0,&g_89},{&g_1248.f0.f5,&g_1248.f0.f1.f0,&l_1251[1][2],(void*)0,&g_24,&g_1248.f0.f1.f0,&l_1251[1][4]},{&g_394,&g_24,&g_394,(void*)0,(void*)0,&l_1251[1][2],&g_306},{&g_433.f0.f5,&g_89,&g_1248.f0.f1.f0,(void*)0,&l_1583.f0,&l_1485.f0,&g_24}}};
    int64_t l_1807 = 0x3B7FFFB96F2022A5LL;
    int64_t l_1808 = 0L;
    uint64_t l_1809 = 6UL;
    uint16_t *l_1833 = &g_40;
    uint16_t ***l_1857 = (void*)0;
    int16_t l_1890 = 0x429CL;
    int64_t ***l_1901[6] = {&g_325[6],&g_325[6],&g_325[6],&g_325[6],&g_325[6],&g_325[6]};
    int64_t l_1913[1][7][7] = {{{0xACEFBB5B5CE151C4LL,0x28E43FB8BC0C40A4LL,5L,0xC1AD69F3A7BF71DALL,0xA4EC45363BDC0F65LL,(-1L),1L},{0x9B777E25BAF09A29LL,1L,0xC1AD69F3A7BF71DALL,0x2F1949FF611252D2LL,1L,0x2F1949FF611252D2LL,0xC1AD69F3A7BF71DALL},{(-5L),(-5L),0xBEBB8AF937CD8B37LL,0x2F1949FF611252D2LL,0xEF0A303F50FE99A8LL,0x4FE5E726AFFA0FD0LL,(-10L)},{1L,0xEF0A303F50FE99A8LL,0x9B777E25BAF09A29LL,0xC1AD69F3A7BF71DALL,0xACEFBB5B5CE151C4LL,1L,0x28E43FB8BC0C40A4LL},{0xCD5FFBDB9311EC9BLL,(-1L),0x4FE5E726AFFA0FD0LL,0x8E2511291CC8E290LL,0xEF0A303F50FE99A8LL,(-1L),0xEF0A303F50FE99A8LL},{(-1L),0x7F7D9AFAF66D32CBLL,0x7F7D9AFAF66D32CBLL,(-1L),0xACEFBB5B5CE151C4LL,1L,0xCD5FFBDB9311EC9BLL},{0xC1AD69F3A7BF71DALL,1L,0x9B777E25BAF09A29LL,(-10L),(-1L),0x28E43FB8BC0C40A4LL,(-5L)}}};
    const int64_t l_2033 = (-1L);
    int32_t *l_2056[5][2] = {{&l_1251[1][2],&l_1251[1][2]},{&l_1251[1][2],&l_1251[1][2]},{&l_1251[1][2],&l_1251[1][2]},{&l_1251[1][2],&l_1251[1][2]},{&l_1251[1][2],&l_1251[1][2]}};
    int64_t l_2153 = 0x418255093FD4DF03LL;
    uint32_t l_2184 = 1UL;
    uint32_t ***l_2189 = &g_885;
    int16_t l_2198 = 0xB44AL;
    const uint64_t ****l_2212 = &g_1491;
    uint16_t l_2223 = 65533UL;
    uint8_t l_2236 = 0x6AL;
    uint64_t l_2237 = 0xC5CEC10C1A6FE160LL;
    union U2 **l_2256 = &g_257[3][0][0];
    union U2 ***l_2255 = &l_2256;
    union U2 ****l_2254 = &l_2255;
    uint8_t ** const *l_2257 = &g_1235;
    int16_t l_2267 = (-1L);
    int8_t l_2367 = 0xD5L;
    uint32_t l_2371 = 4294967287UL;
    union U3 *** const *l_2378 = &g_1702;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1210[i] = 7UL;
    for (i = 0; i < 6; i++)
        l_1316[i] = &g_232[2].f0;
    return (**l_1366);
}



static int32_t * const  func_43(uint16_t * p_44, uint8_t  p_45, uint16_t * p_46, struct S0  p_47, uint16_t * p_48)
{ 
    uint64_t l_61 = 0x375F08A7CF5EE2CBLL;
    int32_t *l_70 = &g_5.f0;
    struct S0 l_97 = {9L};
    struct S1 l_126 = {0xA997FCA4L,{0L},0xB4AE7F92L,1UL,0x63820F02422DCD2DLL,0x6FEDBD15L,4294967290UL};
    uint32_t *l_141 = &l_126.f2;
    union U3 l_174[4] = {{{0x19B726C3L,{0x76CDE9C4L},4294967295UL,255UL,0x5512477A056DCA7DLL,-10L,5UL}},{{0x19B726C3L,{0x76CDE9C4L},4294967295UL,255UL,0x5512477A056DCA7DLL,-10L,5UL}},{{0x19B726C3L,{0x76CDE9C4L},4294967295UL,255UL,0x5512477A056DCA7DLL,-10L,5UL}},{{0x19B726C3L,{0x76CDE9C4L},4294967295UL,255UL,0x5512477A056DCA7DLL,-10L,5UL}}};
    int64_t l_181 = 0xF29F115A3005F4BBLL;
    int32_t l_201[2];
    int64_t *l_217 = &g_131;
    int32_t l_219[6] = {0xE2D552EAL,0xE2D552EAL,(-5L),0xE2D552EAL,0xE2D552EAL,(-5L)};
    union U2 *l_260 = &g_258[0];
    int32_t * const l_274[7] = {&g_5.f0,&g_5.f0,&l_174[2].f0.f1.f0,&g_5.f0,&g_5.f0,&l_174[2].f0.f1.f0,&g_5.f0};
    int32_t * const l_336 = &l_174[2].f0.f5;
    const uint8_t *l_408 = &g_77[4][0][2];
    const uint8_t **l_407[6][2][6] = {{{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408},{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408}},{{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408},{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408}},{{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408},{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408}},{{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408},{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408}},{{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408},{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408}},{{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408},{&l_408,&l_408,&l_408,&l_408,&l_408,&l_408}}};
    union U3 *l_432[1][1][7];
    struct S0 *l_633[6] = {&g_5,&g_5,&g_5,&g_5,&g_5,&g_5};
    struct S0 * const *l_632[7][5] = {{&l_633[2],&l_633[5],&l_633[5],&l_633[2],&l_633[5]},{&l_633[4],&l_633[4],&l_633[0],&l_633[4],&l_633[4]},{&l_633[5],&l_633[2],&l_633[5],&l_633[5],&l_633[2]},{&l_633[4],&l_633[5],&l_633[5],&l_633[4],&l_633[5]},{&l_633[2],&l_633[2],(void*)0,&l_633[2],&l_633[2]},{&l_633[5],&l_633[4],&l_633[5],&l_633[5],&l_633[4]},{&l_633[2],&l_633[5],&l_633[5],&l_633[2],&l_633[5]}};
    int8_t l_716 = (-1L);
    int8_t l_748 = 0x26L;
    int32_t l_749 = 0x6662754FL;
    int16_t l_764 = 0xD702L;
    int64_t l_770[5][4] = {{0L,0L,0x7A56EFE57B54B75CLL,0x87E9DAFF4843A8A0LL},{0L,0x7119B55087ADEC81LL,0x127867B5445B7A27LL,0L},{0x1A67D4BA11930F56LL,0x87E9DAFF4843A8A0LL,0x1A67D4BA11930F56LL,0x127867B5445B7A27LL},{0xE21A8494B0C7F05ELL,0x87E9DAFF4843A8A0LL,0x7A56EFE57B54B75CLL,0L},{0x87E9DAFF4843A8A0LL,0x7119B55087ADEC81LL,0x7119B55087ADEC81LL,0x87E9DAFF4843A8A0LL}};
    uint8_t l_775 = 0x6CL;
    int32_t * const l_845[4][2] = {{&l_126.f5,(void*)0},{(void*)0,&l_126.f5},{(void*)0,(void*)0},{&l_126.f5,(void*)0}};
    union U2 *** const *l_909 = (void*)0;
    union U2 *** const **l_908[2];
    int16_t l_917 = 0x88B6L;
    int32_t * const l_919 = &g_232[2].f0.f5;
    const int16_t *l_1016 = (void*)0;
    int32_t l_1025[1];
    int32_t * const l_1034 = &g_5.f0;
    int32_t * const l_1045 = &g_306;
    int32_t l_1123[4];
    int32_t l_1126 = 0x23BF9773L;
    int32_t l_1184[3];
    int16_t *l_1199 = &l_917;
    const uint32_t *l_1201 = &g_1202;
    const uint32_t **l_1200[2][7] = {{&l_1201,&l_1201,&l_1201,&l_1201,&l_1201,&l_1201,&l_1201},{&l_1201,&l_1201,&l_1201,&l_1201,&l_1201,&l_1201,&l_1201}};
    int32_t * const l_1204 = &l_1126;
    int32_t * const l_1205 = &g_433.f0.f1.f0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_201[i] = 0L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
                l_432[i][j][k] = &g_433;
        }
    }
    for (i = 0; i < 2; i++)
        l_908[i] = &l_909;
    for (i = 0; i < 1; i++)
        l_1025[i] = 0x4DAB3619L;
    for (i = 0; i < 4; i++)
        l_1123[i] = 0xBAFE3317L;
    for (i = 0; i < 3; i++)
        l_1184[i] = 0x936E33DCL;
    return l_1205;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_60[i], "g_60[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_77[i][j][k], "g_77[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_86[i][j][k], "g_86[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_230[i][j], "g_230[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_232[i].f0.f0, "g_232[i].f0.f0", print_hash_value);
        transparent_crc(g_232[i].f0.f1.f0, "g_232[i].f0.f1.f0", print_hash_value);
        transparent_crc(g_232[i].f0.f2, "g_232[i].f0.f2", print_hash_value);
        transparent_crc(g_232[i].f0.f3, "g_232[i].f0.f3", print_hash_value);
        transparent_crc(g_232[i].f0.f4, "g_232[i].f0.f4", print_hash_value);
        transparent_crc(g_232[i].f0.f5, "g_232[i].f0.f5", print_hash_value);
        transparent_crc(g_232[i].f0.f6, "g_232[i].f0.f6", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_258[i].f0, "g_258[i].f0", print_hash_value);

    }
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_433.f1, "g_433.f1", print_hash_value);
    transparent_crc(g_575.f0, "g_575.f0", print_hash_value);
    transparent_crc(g_576.f0, "g_576.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_631[i], "g_631[i]", print_hash_value);

    }
    transparent_crc(g_721, "g_721", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_723[i][j][k], "g_723[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_799, "g_799", print_hash_value);
    transparent_crc(g_990, "g_990", print_hash_value);
    transparent_crc(g_1015, "g_1015", print_hash_value);
    transparent_crc(g_1095, "g_1095", print_hash_value);
    transparent_crc(g_1202, "g_1202", print_hash_value);
    transparent_crc(g_1248.f1, "g_1248.f1", print_hash_value);
    transparent_crc(g_1248.f3, "g_1248.f3", print_hash_value);
    transparent_crc(g_1292, "g_1292", print_hash_value);
    transparent_crc(g_1435, "g_1435", print_hash_value);
    transparent_crc(g_1453, "g_1453", print_hash_value);
    transparent_crc(g_1455, "g_1455", print_hash_value);
    transparent_crc(g_1686.f1, "g_1686.f1", print_hash_value);
    transparent_crc(g_1686.f3, "g_1686.f3", print_hash_value);
    transparent_crc(g_1739, "g_1739", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1918[i][j], "g_1918[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2044, "g_2044", print_hash_value);
    transparent_crc(g_2297, "g_2297", print_hash_value);
    transparent_crc(g_2466, "g_2466", print_hash_value);
    transparent_crc(g_2762, "g_2762", print_hash_value);
    transparent_crc(g_2772, "g_2772", print_hash_value);
    transparent_crc(g_2838, "g_2838", print_hash_value);
    transparent_crc(g_2867.f0, "g_2867.f0", print_hash_value);
    transparent_crc(g_2957, "g_2957", print_hash_value);
    transparent_crc(g_3137, "g_3137", print_hash_value);
    transparent_crc(g_3194, "g_3194", print_hash_value);
    transparent_crc(g_3375, "g_3375", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_3398[i], "g_3398[i]", print_hash_value);

    }
    transparent_crc(g_3427, "g_3427", print_hash_value);
    transparent_crc(g_3488.f0, "g_3488.f0", print_hash_value);
    transparent_crc(g_3488.f1.f0, "g_3488.f1.f0", print_hash_value);
    transparent_crc(g_3488.f2, "g_3488.f2", print_hash_value);
    transparent_crc(g_3488.f3, "g_3488.f3", print_hash_value);
    transparent_crc(g_3488.f4, "g_3488.f4", print_hash_value);
    transparent_crc(g_3488.f5, "g_3488.f5", print_hash_value);
    transparent_crc(g_3488.f6, "g_3488.f6", print_hash_value);
    transparent_crc(g_3603.f0, "g_3603.f0", print_hash_value);
    transparent_crc(g_3603.f1.f0, "g_3603.f1.f0", print_hash_value);
    transparent_crc(g_3603.f2, "g_3603.f2", print_hash_value);
    transparent_crc(g_3603.f3, "g_3603.f3", print_hash_value);
    transparent_crc(g_3603.f4, "g_3603.f4", print_hash_value);
    transparent_crc(g_3603.f5, "g_3603.f5", print_hash_value);
    transparent_crc(g_3603.f6, "g_3603.f6", print_hash_value);
    transparent_crc(g_3609.f0.f0, "g_3609.f0.f0", print_hash_value);
    transparent_crc(g_3609.f0.f1.f0, "g_3609.f0.f1.f0", print_hash_value);
    transparent_crc(g_3609.f0.f2, "g_3609.f0.f2", print_hash_value);
    transparent_crc(g_3609.f0.f3, "g_3609.f0.f3", print_hash_value);
    transparent_crc(g_3609.f0.f4, "g_3609.f0.f4", print_hash_value);
    transparent_crc(g_3609.f0.f5, "g_3609.f0.f5", print_hash_value);
    transparent_crc(g_3609.f0.f6, "g_3609.f0.f6", print_hash_value);
    transparent_crc(g_3958, "g_3958", print_hash_value);
    transparent_crc(g_4044.f0, "g_4044.f0", print_hash_value);
    transparent_crc(g_4044.f1.f0, "g_4044.f1.f0", print_hash_value);
    transparent_crc(g_4044.f2, "g_4044.f2", print_hash_value);
    transparent_crc(g_4044.f3, "g_4044.f3", print_hash_value);
    transparent_crc(g_4044.f4, "g_4044.f4", print_hash_value);
    transparent_crc(g_4044.f5, "g_4044.f5", print_hash_value);
    transparent_crc(g_4044.f6, "g_4044.f6", print_hash_value);
    transparent_crc(g_4064, "g_4064", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_4102[i][j][k], "g_4102[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
