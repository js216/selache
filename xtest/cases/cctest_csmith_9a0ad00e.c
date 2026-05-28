// SPDX-License-Identifier: MIT
// cctest_csmith_9a0ad00e.c --- cctest case csmith_9a0ad00e (csmith seed 2584399886)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5ef382d8 */
/* @exp_ticks 0x4feb */

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

// Options:   -s 2584399886 -o /tmp/csmith_gen_4nkp_a7a/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint64_t  f0;
   int16_t  f1;
   uint32_t  f2;
   int8_t  f3;
   uint32_t  f4;
   uint32_t  f5;
   const int64_t  f6;
   const uint32_t  f7;
};

struct S1 {
   uint32_t  f0;
   uint64_t  f1;
   uint16_t  f2;
   const int32_t  f3;
   uint16_t  f4;
   uint8_t  f5;
   const uint64_t  f6;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   uint64_t  f1;
};
#pragma pack(pop)

struct S3 {
   int32_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   uint8_t  f3;
   int8_t  f4;
   const uint64_t  f5;
};

union U4 {
   const uint16_t  f0;
   uint8_t  f1;
   int32_t  f2;
};


static uint64_t g_7 = 0x2949F4FFCF33F23ELL;
static uint8_t g_13 = 249UL;
static uint8_t g_17 = 0UL;
static uint8_t g_45[3][1] = {{0x13L},{0x13L},{0x13L}};
static int32_t g_52 = 0x90294961L;
static int32_t g_53 = 0x24D3E44EL;
static struct S1 g_62 = {18446744073709551615UL,0x455490EB022B26CBLL,0xC796L,0x6318E2BBL,0x1FE8L,0UL,18446744073709551610UL};
static uint32_t g_64 = 0x5D8D6691L;
static uint16_t g_66 = 0x5906L;
static uint32_t g_110 = 18446744073709551615UL;
static int32_t **g_113 = (void*)0;
static uint8_t *g_141 = &g_62.f5;
static uint8_t **g_140 = &g_141;
static int16_t g_143 = 1L;
static int16_t g_146 = 0x04A0L;
static struct S3 g_149 = {-1L,18446744073709551615UL,65531UL,1UL,0xDEL,0x82C3DD90FB3CCEB7LL};
static union U4 g_156 = {65530UL};
static int64_t g_179 = 0x52427BCE4062863DLL;
static uint64_t g_180 = 0x95D41F0D64EE2F41LL;
static uint16_t g_184 = 0x4B80L;
static uint32_t g_225 = 18446744073709551615UL;
static uint32_t g_233 = 0x635AC337L;
static uint32_t g_236 = 0xCA9A2DDAL;
static int16_t g_240 = 1L;
static int16_t g_241 = 0x6AB6L;
static uint32_t g_242 = 1UL;
static int32_t g_268 = 1L;
static struct S2 g_273 = {0x2DE7F64FL,0x6539B9ACD65DFEDCLL};
static uint64_t g_276 = 5UL;
static int32_t g_294[1][2][3] = {{{0xA6AAD285L,0xA6AAD285L,0xA6AAD285L},{0xA6AAD285L,0xA6AAD285L,0xA6AAD285L}}};
static uint16_t g_324[4][3] = {{0x0245L,0x0245L,0x0245L},{0x0245L,0x0245L,0x0245L},{0x0245L,0x0245L,0x0245L},{0x0245L,0x0245L,0x0245L}};
static union U4 *g_333 = &g_156;
static union U4 **g_332 = &g_333;
static struct S0 g_367 = {0x18DE7A7047D0D4D9LL,-3L,4294967295UL,0xF1L,2UL,18446744073709551615UL,0x82E1B5934FF26DDALL,4294967295UL};
static const struct S0 *g_366[2] = {&g_367,&g_367};
static struct S1 g_391 = {0x8683411CL,18446744073709551615UL,2UL,-4L,0x67A1L,255UL,0x3EBF0EA038C23034LL};
static struct S1 *g_390 = &g_391;
static int32_t *g_423 = &g_149.f0;
static uint16_t g_466 = 65531UL;
static int16_t g_528[1] = {0xBE78L};
static struct S0 g_794 = {0x9A99535F1C996095LL,-1L,0x10C72BB0L,0x25L,0UL,0x4CDF41D5L,0xD55A0DDBA5649657LL,0x31742010L};
static uint32_t g_862 = 4294967295UL;
static struct S0 g_935 = {0xE0ED89003149FBA3LL,0x5DB9L,4294967289UL,0x68L,0x821BADFCL,0xA10763E7L,0x0C7E1D077A281E0CLL,4294967290UL};
static struct S0 *g_945 = (void*)0;
static struct S0 g_947 = {0xE0F3DCF02B69E4A9LL,0xC253L,4294967295UL,1L,0x042D220CL,7UL,1L,1UL};
static struct S0 *g_946 = &g_947;
static struct S0 g_949 = {0UL,0L,6UL,0x87L,1UL,0xEB404B02L,0L,4294967295UL};
static struct S0 *g_948[1][6][2] = {{{&g_949,&g_949},{&g_949,&g_949},{&g_949,&g_949},{&g_949,&g_949},{&g_949,&g_949},{&g_949,&g_949}}};
static uint16_t *g_1053[7][5] = {{&g_324[0][1],&g_324[0][1],&g_324[0][1],&g_324[0][1],&g_324[0][1]},{&g_391.f4,&g_62.f4,&g_391.f4,&g_62.f4,&g_391.f4},{&g_324[0][1],&g_324[0][1],&g_324[0][1],&g_324[0][1],&g_324[0][1]},{&g_391.f4,&g_62.f4,&g_391.f4,&g_62.f4,&g_391.f4},{&g_324[0][1],&g_324[0][1],&g_324[0][1],&g_324[0][1],&g_324[0][1]},{&g_391.f4,&g_62.f4,&g_391.f4,&g_62.f4,&g_391.f4},{&g_324[0][1],&g_324[0][1],&g_324[0][1],&g_324[0][1],&g_324[0][1]}};
static uint16_t **g_1052 = &g_1053[3][0];
static union U4 g_1244 = {1UL};
static struct S0 **g_1258[6] = {&g_948[0][0][0],&g_948[0][0][0],&g_948[0][0][0],&g_948[0][0][0],&g_948[0][0][0],&g_948[0][0][0]};
static int32_t *g_1293 = &g_294[0][0][0];



static uint32_t  func_1(void);
static struct S0  func_8(int32_t  p_9);
static struct S0  func_22(uint8_t * const  p_23, int16_t  p_24, uint8_t * p_25);
static uint8_t * const  func_27(uint8_t  p_28, int64_t  p_29, uint64_t  p_30);
static const struct S1  func_36(int16_t  p_37);
static int32_t * func_40(uint8_t * p_41, int32_t  p_42, int32_t * p_43);
static int32_t * func_46(const struct S3  p_47, uint8_t  p_48, uint8_t * p_49);
static int32_t ** func_54(uint16_t  p_55);




static uint32_t  func_1(void)
{ 
    uint8_t *l_12 = &g_13;
    uint8_t *l_16 = &g_17;
    int32_t l_31 = 0xDCD6A9B0L;
    uint8_t *l_933 = &g_391.f5;
    uint32_t *l_936 = &g_233;
    int32_t *l_1352[4][7] = {{&g_52,&l_31,(void*)0,&g_52,(void*)0,&l_31,&g_52},{&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52,&g_52,&g_52,&l_31,&g_52},{&g_52,&g_52,&g_52,&g_52,&g_52,&g_52,&g_52}};
    int8_t l_1353 = (-8L);
    int i, j;
    g_52 ^= (safe_rshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s(((!g_7) ^ 0xD0B5486BL), g_7)) || (func_8(((safe_lshift_func_uint8_t_u_u(((*l_16) = ((*l_12)--)), 0)) <= ((safe_add_func_uint32_t_u_u(((*l_936) = ((safe_mod_func_int32_t_s_s((g_7 >= g_7), (func_22(((!0x70L) , func_27(l_31, l_31, l_31)), l_31, l_933) , l_31))) < 0x82L)), g_794.f0)) < l_31))) , l_31)), l_31));
    return l_1353;
}



static struct S0  func_8(int32_t  p_9)
{ 
    struct S0 *l_944 = &g_935;
    struct S0 **l_943[7][6][1] = {{{&l_944},{&l_944},{&l_944},{&l_944},{&l_944},{(void*)0}},{{&l_944},{(void*)0},{&l_944},{&l_944},{&l_944},{&l_944}},{{&l_944},{(void*)0},{&l_944},{&l_944},{&l_944},{&l_944}},{{&l_944},{(void*)0},{&l_944},{(void*)0},{&l_944},{&l_944}},{{&l_944},{&l_944},{&l_944},{(void*)0},{&l_944},{&l_944}},{{&l_944},{&l_944},{&l_944},{(void*)0},{&l_944},{(void*)0}},{{&l_944},{&l_944},{&l_944},{&l_944},{&l_944},{(void*)0}}};
    union U4 l_955 = {0x7B45L};
    struct S2 *l_956 = &g_273;
    struct S2 **l_957 = &l_956;
    int8_t *l_958 = &g_947.f3;
    int8_t *l_959 = &g_935.f3;
    int32_t *l_960 = &g_53;
    union U4 **l_963 = &g_333;
    uint64_t *l_970[2][2][5] = {{{&g_391.f1,(void*)0,(void*)0,&g_391.f1,&g_7},{&g_391.f1,&g_276,&g_62.f1,&g_62.f1,&g_276}},{{&g_7,(void*)0,&g_62.f1,&g_62.f1,&g_62.f1},{(void*)0,&g_7,(void*)0,&g_62.f1,&g_62.f1}}};
    int32_t l_971[7] = {6L,0x63B4A99CL,0x63B4A99CL,6L,0x63B4A99CL,0x63B4A99CL,6L};
    uint16_t *l_972 = (void*)0;
    uint16_t *l_973[1];
    struct S3 *l_1009 = &g_149;
    int32_t *l_1018 = &l_971[2];
    int16_t l_1025 = 0xE76BL;
    uint64_t l_1028 = 0xB5B0224B550B92E0LL;
    uint32_t *l_1068 = &g_236;
    int64_t l_1073[6] = {0x683BD45725F8BE92LL,0x683BD45725F8BE92LL,0x683BD45725F8BE92LL,0x683BD45725F8BE92LL,0x683BD45725F8BE92LL,0x683BD45725F8BE92LL};
    uint8_t l_1108 = 255UL;
    uint32_t l_1206 = 18446744073709551615UL;
    int32_t ***l_1209 = (void*)0;
    int32_t ****l_1208 = &l_1209;
    int32_t *****l_1207 = &l_1208;
    int32_t l_1322 = 0L;
    uint8_t l_1329 = 0x08L;
    uint8_t **l_1349 = &g_141;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_973[i] = &g_324[0][1];
    (*l_960) = ((*g_423) &= (((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(0x05E294BEL, (safe_lshift_func_int16_t_s_s(((g_946 = (g_945 = &g_367)) == (g_948[0][2][1] = &g_947)), ((*g_141) >= (safe_sub_func_int8_t_s_s(p_9, ((*l_959) = ((*l_958) = (!(((((safe_lshift_func_uint16_t_u_u(((((*l_957) = (l_955 , l_956)) == &g_273) != g_794.f5), p_9)) >= (-1L)) < 0x1043D0A9C86E98FBLL) , g_947.f2) , l_955.f0))))))))))), l_955.f0)) , l_955.f0) < p_9));
    return (*g_945);
}



static struct S0  func_22(uint8_t * const  p_23, int16_t  p_24, uint8_t * p_25)
{ 
    int32_t **l_934 = &g_423;
    (*l_934) = &g_294[0][0][0];
    return g_935;
}



static uint8_t * const  func_27(uint8_t  p_28, int64_t  p_29, uint64_t  p_30)
{ 
    int64_t l_832 = 0x77A6BD1FD2BA4A3FLL;
    int32_t l_834 = 0x7B05D664L;
    int32_t l_838 = 0x07090DF1L;
    struct S2 l_846[7] = {{4294967295UL,1UL},{4294967295UL,1UL},{4294967295UL,1UL},{4294967295UL,1UL},{4294967295UL,1UL},{4294967295UL,1UL},{4294967295UL,1UL}};
    int32_t l_852 = 0x56ADAA84L;
    int32_t l_853 = (-7L);
    int32_t l_857 = 1L;
    int32_t l_860[4][6][6] = {{{0xFB6D695BL,0xBF7712EBL,0x8C829EB7L,0xBF7712EBL,0xFB6D695BL,0x8C829EB7L},{0xBF7712EBL,0xFB6D695BL,0x8C829EB7L,(-6L),(-6L),0x8C829EB7L},{(-6L),(-6L),0x8C829EB7L,0xFB6D695BL,0xBF7712EBL,0x8C829EB7L},{0xFB6D695BL,0xBF7712EBL,0x8C829EB7L,0xBF7712EBL,0xFB6D695BL,0x8C829EB7L},{0xBF7712EBL,0xFB6D695BL,0x8C829EB7L,(-6L),(-6L),0x8C829EB7L},{(-6L),(-6L),0x8C829EB7L,0xFB6D695BL,0xBF7712EBL,0x8C829EB7L}},{{0xFB6D695BL,0xBF7712EBL,0x8C829EB7L,0xBF7712EBL,0xFB6D695BL,0x8C829EB7L},{0xBF7712EBL,0xFB6D695BL,0x8C829EB7L,(-6L),(-6L),0x8C829EB7L},{(-6L),(-6L),(-6L),0x637819A0L,5L,(-6L)},{0x637819A0L,5L,(-6L),5L,0x637819A0L,(-6L)},{5L,0x637819A0L,(-6L),(-4L),(-4L),(-6L)},{(-4L),(-4L),(-6L),0x637819A0L,5L,(-6L)}},{{0x637819A0L,5L,(-6L),5L,0x637819A0L,(-6L)},{5L,0x637819A0L,(-6L),(-4L),(-4L),(-6L)},{(-4L),(-4L),(-6L),0x637819A0L,5L,(-6L)},{0x637819A0L,5L,(-6L),5L,0x637819A0L,(-6L)},{5L,0x637819A0L,(-6L),(-4L),(-4L),(-6L)},{(-4L),(-4L),(-6L),0x637819A0L,5L,(-6L)}},{{0x637819A0L,5L,(-6L),5L,0x637819A0L,(-6L)},{5L,0x637819A0L,(-6L),(-4L),(-4L),(-6L)},{(-4L),(-4L),(-6L),0x637819A0L,5L,(-6L)},{0x637819A0L,5L,(-6L),5L,0x637819A0L,(-6L)},{5L,0x637819A0L,(-6L),(-4L),(-4L),(-6L)},{(-4L),(-4L),(-6L),0x637819A0L,5L,(-6L)}}};
    struct S1 l_888 = {0x17FECC86L,0xDF1E400E7D33B7F2LL,0xB1A3L,9L,0x9E00L,0x00L,0xDD687A3093D317E8LL};
    const struct S3 l_902 = {1L,0xC62EBC48L,0xFC28L,1UL,0x39L,0xCBC6C15A95856787LL};
    uint8_t *l_903[6][5] = {{&g_45[0][0],&g_149.f3,&g_149.f3,&g_149.f3,&g_45[0][0]},{&g_45[0][0],&g_149.f3,&g_149.f3,&g_149.f3,&g_45[0][0]},{&g_45[0][0],&g_149.f3,&g_149.f3,&g_149.f3,&g_45[0][0]},{&g_45[0][0],&g_149.f3,&g_149.f3,&g_149.f3,&g_45[0][0]},{&g_45[0][0],&g_149.f3,&g_149.f3,&g_149.f3,&g_45[0][0]},{&g_45[0][0],&g_149.f3,&g_149.f3,&g_149.f3,&g_45[0][0]}};
    struct S2 *l_906 = &l_846[4];
    union U4 *l_911 = &g_156;
    int32_t l_929 = (-3L);
    struct S0 l_930 = {18446744073709551615UL,0L,0x67E07089L,0L,0xDAFDF538L,0x13354574L,-4L,0xFBA7609AL};
    int i, j, k;
    for (p_28 = 0; (p_28 <= 13); p_28 = safe_add_func_int64_t_s_s(p_28, 1))
    { 
        uint32_t l_34[1][7][6] = {{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}}};
        int32_t l_837[3];
        int32_t **l_904 = (void*)0;
        int32_t **l_905 = &g_423;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_837[i] = 0x9EA516ADL;
    }
    (*l_906) = l_846[4];
    for (g_146 = (-25); (g_146 != (-21)); g_146 = safe_add_func_int8_t_s_s(g_146, 4))
    { 
        int32_t *l_912 = &g_53;
        uint8_t l_917 = 247UL;
        uint32_t *l_920 = &g_273.f0;
        uint32_t l_923 = 18446744073709551611UL;
        uint16_t *l_924 = (void*)0;
        uint16_t *l_925[6];
        const struct S3 l_926 = {5L,8UL,0x2883L,0xF1L,0xB5L,0x15F46C7562CADA47LL};
        int32_t **l_931 = &g_423;
        int i;
        for (i = 0; i < 6; i++)
            l_925[i] = &g_391.f4;
    }
    (*g_423) &= (+((l_834 <= (&l_930 != &g_794)) & (-5L)));
    return l_903[3][2];
}



static const struct S1  func_36(int16_t  p_37)
{ 
    uint32_t l_38 = 4294967288UL;
    int32_t l_39 = 0L;
    uint8_t *l_44[2][1][7] = {{{&g_45[0][0],&g_45[0][0],&g_45[0][0],&g_45[1][0],&g_45[0][0],&g_45[0][0],&g_45[0][0]}},{{&g_45[0][0],&g_45[0][0],&g_45[0][0],&g_45[1][0],&g_45[0][0],&g_45[0][0],&g_45[0][0]}}};
    const struct S3 l_50 = {0x6264A05AL,18446744073709551615UL,0xB407L,0x35L,1L,0xC2B46DFF61739BB5LL};
    int32_t *l_812 = &g_294[0][0][0];
    int i, j, k;
    l_39 ^= l_38;
    l_812 = func_40(l_44[0][0][6], (l_44[0][0][2] != (void*)0), func_46(l_50, l_39, l_44[0][0][2]));
    return g_391;
}



static int32_t * func_40(uint8_t * p_41, int32_t  p_42, int32_t * p_43)
{ 
    union U4 l_248 = {0xA76EL};
    int32_t l_263[4];
    int32_t l_264 = 0x7F8B4A4EL;
    int32_t l_304 = 0x2C98B792L;
    struct S1 l_340 = {6UL,1UL,0x5477L,-9L,0x517FL,255UL,18446744073709551610UL};
    int32_t *** const l_345 = &g_113;
    struct S2 l_371 = {7UL,0x0DD6895FE2990527LL};
    int64_t l_395 = 1L;
    uint16_t l_396[7][6] = {{65535UL,0x2BE4L,0x31FFL,65535UL,0x2BE4L,65535UL},{65535UL,65535UL,65535UL,65535UL,0x31FFL,1UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,1UL,65535UL,65535UL,65535UL},{65535UL,0x31FFL,65535UL,65535UL,0x31FFL,1UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,1UL,65535UL,65535UL,65535UL}};
    struct S0 l_426 = {0UL,5L,4294967294UL,5L,0xA5DBACF1L,0xA7E938B8L,5L,4294967292UL};
    uint64_t l_502 = 1UL;
    int32_t l_526 = 0x47802D02L;
    int32_t ** const *l_543 = (void*)0;
    int32_t *l_560 = (void*)0;
    struct S2 *l_575 = &l_371;
    int32_t *l_599 = &g_294[0][1][2];
    uint8_t l_638 = 3UL;
    union U4 l_652 = {65533UL};
    int8_t l_714[1];
    uint64_t l_726 = 1UL;
    int8_t *l_737 = &l_426.f3;
    int8_t **l_736 = &l_737;
    union U4 **l_745 = &g_333;
    uint8_t l_767 = 0xAAL;
    const struct S3 l_803 = {0x02A12239L,18446744073709551607UL,0x1D7DL,0x4FL,5L,18446744073709551614UL};
    int32_t *l_808[2][5] = {{&g_52,(void*)0,&g_52,&g_52,(void*)0},{(void*)0,&g_52,&g_52,(void*)0,&g_52}};
    uint64_t l_809[3];
    int i, j;
    for (i = 0; i < 4; i++)
        l_263[i] = 8L;
    for (i = 0; i < 1; i++)
        l_714[i] = 0x99L;
    for (i = 0; i < 3; i++)
        l_809[i] = 1UL;
    for (p_42 = 0; (p_42 >= 0); p_42 -= 1)
    { 
        int32_t l_258 = 0x1837497FL;
        struct S2 *l_272 = &g_273;
        struct S2 **l_271[7][3][6] = {{{&l_272,&l_272,&l_272,&l_272,(void*)0,&l_272},{&l_272,&l_272,&l_272,&l_272,(void*)0,&l_272},{(void*)0,&l_272,&l_272,&l_272,&l_272,(void*)0}},{{&l_272,&l_272,&l_272,&l_272,&l_272,&l_272},{&l_272,&l_272,(void*)0,&l_272,&l_272,&l_272},{(void*)0,(void*)0,&l_272,&l_272,&l_272,&l_272}},{{&l_272,&l_272,&l_272,(void*)0,&l_272,&l_272},{&l_272,&l_272,&l_272,(void*)0,&l_272,&l_272},{&l_272,&l_272,(void*)0,&l_272,&l_272,&l_272}},{{(void*)0,&l_272,&l_272,&l_272,&l_272,(void*)0},{&l_272,&l_272,&l_272,(void*)0,&l_272,&l_272},{&l_272,(void*)0,&l_272,&l_272,&l_272,&l_272}},{{&l_272,&l_272,&l_272,(void*)0,&l_272,(void*)0},{&l_272,&l_272,&l_272,&l_272,&l_272,&l_272},{(void*)0,&l_272,&l_272,&l_272,&l_272,&l_272}},{{&l_272,&l_272,&l_272,(void*)0,(void*)0,&l_272},{&l_272,&l_272,&l_272,(void*)0,(void*)0,(void*)0},{&l_272,&l_272,&l_272,&l_272,(void*)0,&l_272}},{{(void*)0,&l_272,&l_272,&l_272,&l_272,&l_272},{&l_272,&l_272,&l_272,&l_272,&l_272,&l_272},{&l_272,&l_272,&l_272,&l_272,&l_272,&l_272}}};
        int32_t *l_292[1];
        int32_t *l_293 = (void*)0;
        uint16_t l_361 = 6UL;
        struct S1 l_384 = {0x9C1E547EL,0x3D72817AE39055FALL,4UL,1L,65531UL,9UL,0UL};
        const struct S3 l_394 = {2L,0x8A6F3EC9L,0xACC5L,0x33L,1L,0xB3E68CF0417D36FELL};
        struct S0 *l_414[7][7] = {{&g_367,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367},{(void*)0,(void*)0,(void*)0,&g_367,(void*)0,&g_367,&g_367},{&g_367,&g_367,&g_367,&g_367,&g_367,(void*)0,&g_367},{&g_367,(void*)0,&g_367,&g_367,&g_367,&g_367,&g_367},{&g_367,(void*)0,(void*)0,&g_367,&g_367,(void*)0,(void*)0},{&g_367,&g_367,(void*)0,&g_367,&g_367,(void*)0,(void*)0},{&g_367,&g_367,&g_367,&g_367,&g_367,&g_367,&g_367}};
        int64_t l_433 = 0xFCD2DCC7508A6BBFLL;
        uint64_t l_434[6][7][4] = {{{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL}},{{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL}},{{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL}},{{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL}},{{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL}},{{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL},{0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL,0xA85EE1C573C2F3DCLL}}};
        int32_t *l_544[6][4] = {{&l_263[0],&l_526,&g_294[0][0][0],&l_263[0]},{&l_263[0],&g_294[0][0][0],&l_304,&g_294[0][0][0]},{&l_304,&g_294[0][0][0],&l_263[0],&l_263[0]},{&g_294[0][0][0],&l_526,&l_263[0],&l_304},{&g_294[0][0][0],(void*)0,(void*)0,&g_294[0][0][0]},{&g_294[0][0][0],&l_263[0],&l_263[0],(void*)0}};
        const struct S1 **l_565 = (void*)0;
        struct S0 **l_581 = &l_414[6][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_292[i] = &l_258;
        for (g_52 = 0; (g_52 >= 0); g_52 -= 1)
        { 
            struct S1 l_249[1][6] = {{{18446744073709551613UL,0x2E61DC0C745326B0LL,0UL,-1L,0x5F65L,4UL,0UL},{1UL,18446744073709551615UL,0xF98AL,-1L,2UL,0x93L,0x81A31060E604657DLL},{1UL,18446744073709551615UL,0xF98AL,-1L,2UL,0x93L,0x81A31060E604657DLL},{18446744073709551613UL,0x2E61DC0C745326B0LL,0UL,-1L,0x5F65L,4UL,0UL},{1UL,18446744073709551615UL,0xF98AL,-1L,2UL,0x93L,0x81A31060E604657DLL},{1UL,18446744073709551615UL,0xF98AL,-1L,2UL,0x93L,0x81A31060E604657DLL}}};
            int32_t l_295 = 0xA310EAAEL;
            int32_t l_296 = 0x0D6DFFD7L;
            int32_t l_297 = 0xE77DB131L;
            int32_t l_298 = 0xD78C674DL;
            int32_t l_299 = 0L;
            int32_t l_300 = 0xB05920B8L;
            uint64_t l_301 = 0xF06DE3E1FD3E1314LL;
            int32_t l_311 = 0L;
            uint16_t l_328[4][4][2] = {{{0x276CL,0x276CL},{65528UL,65534UL},{0x7A93L,65534UL},{65528UL,0x276CL}},{{0x276CL,65528UL},{65534UL,0x7A93L},{65534UL,65528UL},{0x276CL,0x276CL}},{{65528UL,65534UL},{0x7A93L,65534UL},{65528UL,0x276CL},{0x276CL,65528UL}},{{65534UL,0x7A93L},{65534UL,65528UL},{0x276CL,0x276CL},{65528UL,65534UL}}};
            uint16_t *l_329[6][4][6] = {{{&l_328[2][2][1],&g_62.f2,&l_328[1][2][1],(void*)0,&g_62.f2,&g_62.f4},{&l_328[2][2][1],(void*)0,(void*)0,&g_62.f2,&g_62.f2,(void*)0},{&g_62.f2,&g_62.f2,(void*)0,(void*)0,&l_328[2][2][1],&g_62.f4},{&g_62.f2,(void*)0,&l_328[1][2][1],&g_62.f2,&l_328[2][2][1],(void*)0}},{{&l_328[2][2][1],&g_62.f2,&l_328[1][2][1],(void*)0,&g_62.f2,&g_62.f4},{&l_328[2][2][1],(void*)0,(void*)0,&g_62.f2,&g_62.f2,(void*)0},{&g_62.f2,&g_62.f2,(void*)0,(void*)0,&l_328[2][2][1],&g_62.f4},{&g_62.f2,(void*)0,&l_328[1][2][1],&g_62.f2,&l_328[2][2][1],(void*)0}},{{&l_328[2][2][1],&g_62.f2,&l_328[1][2][1],(void*)0,&g_62.f2,&g_62.f4},{&l_328[2][2][1],(void*)0,(void*)0,&g_62.f2,&g_62.f2,(void*)0},{&g_62.f2,&g_62.f2,(void*)0,(void*)0,&l_328[2][2][1],&g_62.f4},{&g_62.f2,(void*)0,&l_328[1][2][1],&g_62.f2,&l_328[2][2][1],(void*)0}},{{&l_328[2][2][1],&g_62.f2,&l_328[1][2][1],(void*)0,&g_62.f2,&g_62.f4},{&l_328[2][2][1],(void*)0,(void*)0,&g_62.f2,&g_62.f2,(void*)0},{&g_62.f2,&g_62.f2,(void*)0,(void*)0,&l_328[2][2][1],&g_62.f4},{&g_62.f2,(void*)0,&l_328[1][2][1],&g_62.f2,&l_328[2][2][1],(void*)0}},{{&l_328[2][2][1],&g_62.f2,&l_328[1][2][1],(void*)0,&g_62.f2,&g_62.f4},{&l_328[2][2][1],(void*)0,(void*)0,&g_62.f2,&g_62.f2,(void*)0},{&g_62.f2,&g_62.f2,(void*)0,(void*)0,&l_328[2][2][1],&g_62.f4},{&g_62.f2,(void*)0,&l_328[1][2][1],&g_62.f2,&l_328[2][2][1],(void*)0}},{{&l_328[2][2][1],&g_62.f2,&l_328[1][2][1],(void*)0,&g_62.f2,&g_62.f4},{&l_249[0][1].f2,&l_328[2][2][1],&g_149.f2,&l_249[0][1].f4,&l_249[0][1].f4,&g_149.f2},{&l_249[0][1].f4,&l_249[0][1].f4,&g_149.f2,&l_328[2][2][1],&l_249[0][1].f2,&l_328[2][2][1]},{&l_249[0][1].f4,&l_328[2][2][1],(void*)0,&l_249[0][1].f4,&l_249[0][1].f2,&g_149.f2}}};
            struct S2 l_370 = {0x751C18EDL,0x463A2B6B0734E148LL};
            int i, j, k;
            if (g_45[(p_42 + 2)][p_42])
            { 
                int16_t *l_261 = (void*)0;
                int16_t *l_262[1];
                int32_t *l_265 = &g_149.f0;
                struct S2 * const *l_269 = (void*)0;
                struct S2 * const **l_270 = &l_269;
                int32_t *l_274 = (void*)0;
                int32_t *l_275 = &l_264;
                int i;
                for (i = 0; i < 1; i++)
                    l_262[i] = (void*)0;
                for (g_53 = 0; (g_53 >= 0); g_53 -= 1)
                { 
                    uint32_t *l_63 = &g_64;
                    uint8_t *l_70 = &g_62.f5;
                    uint8_t **l_69 = &l_70;
                    int32_t ***l_245 = &g_113;
                    int i, j;
                    (*l_245) = func_54((g_45[g_52][g_53] , (safe_mod_func_int32_t_s_s(((((*l_63) = (safe_add_func_uint64_t_u_u((g_62 , 0x8E356D6BBB239257LL), 0x7B7A4FD34EA093EALL))) ^ ((g_66 &= (~p_42)) , (safe_mod_func_int16_t_s_s(((&g_45[0][0] != ((*l_69) = &g_45[0][0])) >= p_42), p_42)))) < 0L), g_53))));
                }
                (*l_265) = (safe_rshift_func_int8_t_s_u((((((l_248 , (0L || (l_249[0][1] , (safe_mod_func_uint64_t_u_u(g_62.f1, g_66))))) != (safe_div_func_int16_t_s_s((l_264 = (l_263[1] = ((safe_div_func_int8_t_s_s((g_149.f4 = ((safe_mul_func_int8_t_s_s((l_258 <= (safe_rshift_func_uint16_t_u_u((0x4EL == l_249[0][1].f0), g_149.f3))), (*p_41))) | g_241)), 2L)) != g_45[(p_42 + 2)][p_42]))), g_149.f5))) , p_42) , &l_248) == (void*)0), 2));
                (*l_275) ^= (l_258 |= ((g_233 , g_268) != (((g_110 , ((*l_265) = ((((&g_149 != (void*)0) , ((*l_270) = l_269)) == l_271[5][2][4]) < g_7))) , p_41) == p_41)));
            }
            else
            { 
                int32_t *l_277 = &l_264;
                (*l_277) ^= g_276;
                for (g_156.f1 = 0; (g_156.f1 <= 0); g_156.f1 += 1)
                { 
                    int16_t *l_287 = &g_241;
                    int32_t l_289 = (-1L);
                    int64_t *l_290[6][2][7] = {{{&g_179,&g_179,&g_179,&g_179,&g_179,&g_179,&g_179},{&g_179,(void*)0,(void*)0,&g_179,(void*)0,&g_179,&g_179}},{{&g_179,&g_179,(void*)0,(void*)0,&g_179,&g_179,(void*)0},{&g_179,&g_179,&g_179,&g_179,&g_179,&g_179,&g_179}},{{&g_179,(void*)0,&g_179,&g_179,(void*)0,(void*)0,&g_179},{&g_179,&g_179,&g_179,(void*)0,&g_179,(void*)0,(void*)0}},{{&g_179,&g_179,&g_179,&g_179,&g_179,&g_179,&g_179},{&g_179,(void*)0,(void*)0,&g_179,(void*)0,(void*)0,&g_179}},{{&g_179,&g_179,(void*)0,(void*)0,&g_179,(void*)0,(void*)0},{&g_179,&g_179,&g_179,&g_179,&g_179,&g_179,&g_179}},{{&g_179,(void*)0,(void*)0,&g_179,(void*)0,&g_179,&g_179},{&g_179,&g_179,(void*)0,(void*)0,&g_179,&g_179,(void*)0}}};
                    int i, j, k;
                    (*l_277) ^= (-3L);
                    l_258 &= (0UL | ((safe_rshift_func_uint16_t_u_u((((!g_66) & (((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((((((*l_287) = p_42) > p_42) , p_42) >= (!p_42)) == 0x308C6F95L) == (*l_277)), g_149.f5)), 255UL)) , g_268) != p_42)) != g_52), g_62.f1)) >= 0x98C0L));
                    (*l_277) = l_289;
                    if (l_289)
                        continue;
                    (*l_277) |= (0xD6L && ((l_289 = l_248.f1) & (-3L)));
                }
                for (g_149.f3 = 0; (g_149.f3 <= 0); g_149.f3 += 1)
                { 
                    return &g_53;
                }
            }
            for (g_62.f1 = 0; (g_62.f1 <= 0); g_62.f1 += 1)
            { 
                int32_t *l_291 = &l_258;
                return l_293;
            }
            --l_301;
            for (l_297 = 0; (l_297 <= 0); l_297 += 1)
            { 
                uint32_t l_307[4][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
                int32_t l_310 = 0x127BC0C0L;
                int32_t l_312 = 0x88D47356L;
                int32_t l_313 = 0xA488AD1CL;
                int32_t l_315 = 0x9F4E4425L;
                int32_t l_316 = 0xC8D1C3F7L;
                int32_t l_317 = (-10L);
                int32_t l_318 = 0x014EA22CL;
                int32_t l_319 = 0x9892182EL;
                int32_t l_323 = 0x32267AD0L;
                int i, j;
                if (p_42)
                    break;
                if (p_42)
                    continue;
                for (l_298 = 0; (l_298 <= 0); l_298 += 1)
                { 
                    int32_t l_305 = (-1L);
                    int32_t l_306 = 0xC643EAFBL;
                    int32_t l_314 = 0x03350E35L;
                    int32_t l_320 = (-4L);
                    int32_t l_321 = 0xEF710C32L;
                    int32_t l_322 = (-3L);
                    int32_t **l_327 = &l_292[0];
                    int i, j, k;
                    g_273 = (((g_45[(g_52 + 2)][l_298] , &p_43) == g_113) , g_273);
                    l_307[2][0]--;
                    g_324[0][1]++;
                    (*l_327) = &l_258;
                }
                for (l_304 = 0; (l_304 >= 0); l_304 -= 1)
                { 
                    return &g_294[0][1][0];
                }
                if (l_328[1][1][0])
                    break;
            }
            if ((p_42 >= (g_62.f4 = g_62.f2)))
            { 
                uint32_t l_344 = 0x3C03B8CAL;
                int32_t l_362 = (-1L);
                if (((safe_add_func_int64_t_s_s((((g_294[0][1][0] = (l_304 || ((void*)0 != g_332))) & 0x08F58A27L) <= ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((l_300 = (p_42 , (++g_62.f0))) , (l_340 , (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u(0x89L)), 15)))), l_340.f4)), l_344)) < (*p_41))), 0xC0C72F8FDAF4DD61LL)) > p_42))
                { 
                    uint16_t l_346 = 0x8125L;
                    l_346 ^= (&g_113 == l_345);
                }
                else
                { 
                    uint32_t l_359 = 0UL;
                    uint64_t *l_360 = &g_62.f1;
                    int i, j;
                    g_149.f0 ^= (l_344 , (safe_rshift_func_uint16_t_u_s((p_42 , (safe_mul_func_int16_t_s_s(((1UL == g_149.f3) || (safe_mod_func_int16_t_s_s(((((*l_360) = ((safe_mod_func_int8_t_s_s(g_149.f4, ((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((g_45[(p_42 + 2)][p_42] = (g_242 < g_45[2][0])), 3)) <= l_299), p_42)) , p_42))) != l_359)) == p_42) , l_361), p_42))), 65535UL))), 7)));
                    g_294[0][0][0] = (-3L);
                    g_53 |= (l_362 = p_42);
                    g_294[0][0][0] = l_300;
                }
            }
            else
            { 
                for (l_295 = 0; (l_295 <= (-9)); l_295 = safe_sub_func_int8_t_s_s(l_295, 8))
                { 
                    uint16_t l_365 = 0x30FDL;
                    const struct S0 **l_368 = &g_366[0];
                    const struct S2 l_369 = {2UL,1UL};
                    if (l_365)
                        break;
                    (*l_368) = g_366[0];
                    if (g_233)
                        continue;
                    (*l_272) = l_369;
                    l_371 = l_370;
                }
                for (g_276 = 0; (g_276 <= 1); g_276 += 1)
                { 
                    int32_t *l_372 = &g_52;
                    int32_t **l_373 = &l_292[0];
                    (*l_373) = l_372;
                }
            }
        }
        for (l_264 = 3; (l_264 >= 0); l_264 -= 1)
        { 
            int32_t l_376 = 0xBBADC442L;
            int32_t l_385 = 0x43DBAF13L;
            struct S2 l_393 = {0xF4559BD9L,18446744073709551615UL};
            struct S0 **l_415 = &l_414[1][1];
            const int32_t *l_447[5][6][7] = {{{&l_394.f0,&g_53,&g_294[0][0][0],&l_263[2],&g_294[0][0][0],&l_263[1],&g_52},{(void*)0,&l_376,&g_294[0][0][2],&l_376,&g_53,(void*)0,&l_263[1]},{&l_385,(void*)0,&l_304,&l_263[1],&l_385,&g_53,&l_376},{&g_294[0][0][0],(void*)0,&l_304,&g_294[0][0][0],(void*)0,(void*)0,&g_53},{&l_376,&l_385,&g_53,&g_294[0][0][0],&g_52,(void*)0,&g_53},{&g_52,&g_294[0][0][0],&g_294[0][0][0],&l_263[1],&l_264,&l_264,&l_263[1]}},{{(void*)0,(void*)0,(void*)0,&l_376,&l_394.f0,&g_294[0][0][0],&l_385},{&g_53,&g_53,&g_52,&l_263[2],&l_376,&l_385,&l_304},{&l_304,&g_294[0][0][0],&l_263[1],&l_263[2],&g_53,&g_294[0][0][0],(void*)0},{&l_263[1],&g_294[0][0][0],&l_304,&l_394.f0,&g_52,&l_264,&l_385},{&l_376,&g_294[0][0][0],&g_52,&l_304,&l_385,(void*)0,&l_304},{&g_294[0][0][0],&l_385,&l_385,&l_385,&l_263[2],&l_385,&l_394.f0}},{{&l_385,&g_53,&l_385,&l_264,&l_376,(void*)0,&l_264},{&g_294[0][0][2],&g_294[0][0][0],&g_53,&g_53,&g_53,&g_294[0][0][0],&g_294[0][0][2]},{&g_53,&g_52,&l_304,&l_385,&g_53,&l_263[1],&l_376},{&g_294[0][0][0],&l_385,&g_294[0][0][2],&l_263[1],(void*)0,&g_53,(void*)0},{(void*)0,&g_294[0][0][0],&l_304,(void*)0,&g_294[0][0][0],(void*)0,&g_53},{&l_258,&g_53,&g_53,&l_376,&g_294[0][0][0],&l_394.f0,&l_385}},{{&l_394.f0,(void*)0,&l_385,(void*)0,&g_52,&g_53,&g_52},{&l_304,&l_385,&l_376,&l_263[2],&g_52,&g_53,&g_53},{&l_376,&g_52,(void*)0,&l_304,&g_294[0][0][0],&g_52,&g_294[0][0][0]},{&g_53,&l_376,&l_376,&g_53,&g_294[0][0][0],&l_263[2],&l_304},{&l_263[1],&l_304,&g_53,(void*)0,(void*)0,&l_258,(void*)0},{&l_394.f0,(void*)0,&l_258,&g_52,&g_53,&l_304,&l_304}},{{&g_52,&l_263[1],&l_258,&g_53,&g_53,&l_376,&g_294[0][0][0]},{(void*)0,&g_53,&g_53,&l_385,&l_376,&l_304,&g_53},{&g_53,&l_258,&l_376,&g_294[0][1][2],&l_263[2],&l_376,&g_52},{&l_304,&l_258,&l_264,&l_376,&g_294[0][0][0],&l_263[2],&l_385},{&l_263[1],&g_53,&g_294[0][0][0],&l_258,&l_258,&g_294[0][0][0],&g_53},{(void*)0,&l_263[1],&l_304,&g_53,&g_53,&g_294[0][0][2],(void*)0}}};
            const int32_t **l_446 = &l_447[3][2][3];
            int i, j, k;
            if (g_45[p_42][p_42])
            { 
                int i, j;
                l_376 ^= (safe_mul_func_int16_t_s_s((-9L), g_45[(p_42 + 1)][p_42]));
            }
            else
            { 
                struct S1 *l_387 = &l_340;
                struct S1 **l_386 = &l_387;
                struct S1 *l_389 = &l_340;
                struct S1 **l_388[3];
                struct S2 l_392 = {0xF21A1B9FL,6UL};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_388[i] = &l_389;
                for (l_340.f2 = 0; (l_340.f2 <= 2); l_340.f2 += 1)
                { 
                    uint64_t l_377 = 0x2161BBA088D73E62LL;
                    l_377--;
                }
                g_390 = ((*l_386) = ((safe_div_func_uint8_t_u_u((g_45[(p_42 + 2)][p_42] = 0xDCL), ((**g_140) = (((safe_add_func_uint8_t_u_u((((g_273.f0 = (l_263[l_264] < (l_385 = ((*g_141) , (l_376 = (0L ^ (l_384 , ((((void*)0 == (*g_140)) < l_340.f4) < (*g_141))))))))) != 0x7093241FL) <= 6L), 1L)) , 0xC1L) | 7L)))) , (void*)0));
                for (g_143 = 0; (g_143 <= 2); g_143 += 1)
                { 
                    l_393 = ((*l_272) = l_392);
                    return &g_53;
                }
            }
            for (l_371.f0 = 0; (l_371.f0 <= 1); l_371.f0 += 1)
            { 
                const int64_t l_399 = 0xAE1563AD9B7FC35FLL;
                struct S2 *l_410[4][7][1] = {{{(void*)0},{&l_371},{(void*)0},{(void*)0},{(void*)0},{&l_371},{(void*)0}},{{(void*)0},{(void*)0},{&l_371},{(void*)0},{(void*)0},{(void*)0},{&l_371}},{{(void*)0},{(void*)0},{(void*)0},{&l_371},{(void*)0},{(void*)0},{(void*)0}},{{&l_371},{(void*)0},{(void*)0},{(void*)0},{&l_371},{(void*)0},{(void*)0}}};
                int i, j, k;
                for (g_52 = 0; (g_52 <= 1); g_52 += 1)
                { 
                    union U4 l_397 = {0x0176L};
                    const struct S2 *l_398 = &l_393;
                    struct S2 *l_411 = (void*)0;
                    l_263[1] = (l_396[1][4] &= (l_376 = (((*l_272) = g_273) , (l_394 , l_395))));
                    g_294[0][0][0] ^= ((l_397 , l_398) != (l_411 = (((l_399 | (safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((0x5A193536L >= 0L), (safe_mod_func_int32_t_s_s((-6L), (safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_156.f1, 5UL)), g_143)))))), 8UL))) > 0x71L) , l_410[2][3][0])));
                }
            }
        }
        for (g_273.f0 = 0; (g_273.f0 <= 0); g_273.f0 += 1)
        { 
            int32_t l_480 = (-4L);
            uint64_t l_481[6] = {0xA1C98D9228FCCAE5LL,0xA1C98D9228FCCAE5LL,0x9B85E26AE9B6DB01LL,0xA1C98D9228FCCAE5LL,0xA1C98D9228FCCAE5LL,0x9B85E26AE9B6DB01LL};
            int32_t l_482 = 0x5DE87172L;
            struct S0 **l_494 = (void*)0;
            int32_t l_495 = 8L;
            int32_t **l_498 = &l_292[0];
            uint16_t *l_499 = (void*)0;
            uint16_t *l_500[6][4] = {{&l_396[1][4],&l_396[1][4],&g_466,&l_396[1][4]},{&l_396[1][4],&g_324[0][1],&g_324[0][1],&l_396[1][4]},{&g_324[0][1],&l_396[1][4],&g_324[0][1],&g_324[0][1]},{&l_396[1][4],&l_396[1][4],&g_466,&l_396[1][4]},{&l_396[1][4],&g_324[0][1],&g_324[0][1],&l_396[1][4]},{&g_324[0][1],&l_396[1][4],&g_324[0][1],&g_324[0][1]}};
            int8_t *l_501 = &g_149.f4;
            struct S3 l_540[7][1] = {{{0x39025D52L,0UL,0UL,254UL,0x28L,0UL}},{{0x4360E00CL,0x00C0CB39L,0xEDB2L,0x4BL,0x3CL,18446744073709551615UL}},{{0x39025D52L,0UL,0UL,254UL,0x28L,0UL}},{{0x4360E00CL,0x00C0CB39L,0xEDB2L,0x4BL,0x3CL,18446744073709551615UL}},{{0x39025D52L,0UL,0UL,254UL,0x28L,0UL}},{{0x4360E00CL,0x00C0CB39L,0xEDB2L,0x4BL,0x3CL,18446744073709551615UL}},{{0x39025D52L,0UL,0UL,254UL,0x28L,0UL}}};
            const int8_t l_556 = (-1L);
            uint16_t **l_574[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_574[i] = &l_500[0][0];
        }
        for (l_395 = (-29); (l_395 > (-6)); l_395 = safe_add_func_int8_t_s_s(l_395, 4))
        { 
            struct S0 ***l_582 = (void*)0;
            struct S0 ***l_583 = &l_581;
            int32_t l_584[2][2][5] = {{{(-1L),1L,(-1L),1L,(-1L)},{0L,0L,0L,0L,0L}},{{(-1L),1L,(-1L),1L,(-1L)},{0L,0L,0L,0L,0L}}};
            uint16_t *l_585 = (void*)0;
            uint16_t *l_586 = &g_391.f2;
            int8_t *l_590[2][1];
            int32_t l_591 = 0L;
            int32_t l_592[5][6] = {{0L,0x115BEE49L,(-10L),(-10L),0x115BEE49L,0L},{1L,0L,(-10L),0L,1L,1L},{1L,0L,0L,1L,0x115BEE49L,1L},{1L,0x115BEE49L,1L,0L,0L,1L},{1L,1L,0L,(-10L),0L,1L}};
            int32_t *l_593 = &l_592[4][5];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_590[i][j] = &l_426.f3;
            }
            (*g_423) = (-4L);
            l_263[1] ^= ((*p_41) | ((l_584[0][1][2] = ((*g_141) = (&g_366[1] != ((*l_583) = l_581)))) ^ ((g_149.f0 && (((*l_586)++) , ((safe_unary_minus_func_uint64_t_u((((((((*p_41) < (l_591 = g_391.f0)) ^ (p_42 , g_180)) & 0UL) || g_391.f3) > g_367.f2) > l_592[4][5]))) , p_42))) , (*p_41))));
            l_593 = (p_43 = func_46(g_149, (*p_41), p_41));
        }
    }
lbl_685:
    (*l_599) ^= (((safe_add_func_uint16_t_u_u(0x096FL, p_42)) , ((void*)0 != &l_395)) != (0xC077L != (g_149.f0 > (safe_lshift_func_uint16_t_u_s((!g_367.f0), p_42)))));
    for (g_367.f2 = 0; (g_367.f2 <= 0); g_367.f2 += 1)
    { 
        int8_t l_600[7][1] = {{0xF6L},{0xF6L},{0x46L},{0xF6L},{0xF6L},{0x46L},{0xF6L}};
        int32_t l_626 = 1L;
        int32_t l_627 = 0x9232ECF6L;
        int32_t l_628 = 0L;
        int32_t l_630 = 0xAA7C2732L;
        int32_t l_634 = 0xCCDDDF7CL;
        int32_t l_635 = 0xD585770FL;
        int32_t l_637 = 0xF24D53C6L;
        struct S2 l_641 = {0xEF8645B0L,0UL};
        struct S1 l_654 = {6UL,18446744073709551615UL,0xC9D4L,1L,0xDA07L,0x8FL,0UL};
        int64_t *l_753 = &l_395;
        struct S0 l_754 = {0xB8F203F0494ACD7ALL,0L,0xC35FFDCEL,-1L,18446744073709551608UL,0xA78A0C35L,0x48A2AD2C867BAA2ELL,0UL};
        struct S3 *l_755 = &g_149;
        int16_t *l_756 = &g_367.f1;
        uint16_t l_759 = 1UL;
        int16_t l_773 = 2L;
        uint16_t l_800 = 0x9E65L;
        int i, j;
        for (l_426.f1 = 0; (l_426.f1 >= 0); l_426.f1 -= 1)
        { 
            int64_t l_614 = (-1L);
            int32_t l_623 = 0x6F88119AL;
            int32_t l_624 = 1L;
            int32_t l_625 = 0xEFC858A6L;
            int32_t l_629 = 0L;
            int32_t l_631 = 0xE5BD73EDL;
            int32_t l_632 = (-10L);
            int32_t l_633 = (-9L);
            int32_t l_636 = 0x5AD8E647L;
            struct S0 *l_665 = &g_367;
            struct S0 **l_664 = &l_665;
            int32_t *l_684 = &l_263[1];
            const uint16_t * const l_703 = &g_391.f2;
            const uint16_t * const *l_702 = &l_703;
            int32_t l_718[3];
            uint32_t l_720[3];
            int64_t l_729 = (-1L);
            int i;
            for (i = 0; i < 3; i++)
                l_718[i] = 1L;
            for (i = 0; i < 3; i++)
                l_720[i] = 0xF190E7F8L;
            for (l_340.f0 = 0; (l_340.f0 <= 0); l_340.f0 += 1)
            { 
                int32_t *l_601 = (void*)0;
                int32_t *l_602 = &g_52;
                int32_t *l_603 = &g_149.f0;
                int32_t *l_604 = &l_263[1];
                int32_t *l_605 = &l_264;
                int32_t *l_606 = &l_263[1];
                int32_t *l_607 = &g_149.f0;
                int32_t *l_608 = &g_294[0][0][0];
                int32_t *l_609 = &g_52;
                int32_t *l_610 = &g_53;
                int32_t *l_611 = (void*)0;
                int32_t *l_612 = &g_294[0][0][0];
                int32_t *l_613 = (void*)0;
                int32_t *l_615 = &g_294[0][0][0];
                int32_t *l_616 = &g_294[0][0][0];
                int32_t l_617[5] = {0x38C36FF3L,0x38C36FF3L,0x38C36FF3L,0x38C36FF3L,0x38C36FF3L};
                int32_t *l_618 = (void*)0;
                int32_t *l_619 = &g_53;
                int32_t *l_620 = &g_52;
                int32_t *l_621 = &l_526;
                int32_t *l_622[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_622[i] = &l_263[1];
                l_638--;
                (*l_575) = l_641;
                for (l_623 = 3; (l_623 >= 0); l_623 -= 1)
                { 
                    uint16_t *l_657 = &l_654.f4;
                    uint32_t *l_675 = &g_64;
                    uint32_t *l_676 = &l_426.f2;
                    uint32_t *l_677 = &l_371.f0;
                    struct S1 **l_682 = &g_390;
                    uint64_t l_683 = 0x1C494CB656137AF4LL;
                    int i, j;
                    l_263[(g_367.f2 + 2)] = (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((18446744073709551606UL || ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s((l_652 , l_263[l_623]), ((!((void*)0 == &p_43)) == 18446744073709551611UL))) != g_45[g_367.f2][l_426.f1]), l_627)), l_634)) >= 0UL)), (**g_140))), p_42));
                    l_263[(l_340.f0 + 1)] |= ((l_654 , ((((safe_div_func_uint64_t_u_u((((l_657 != (void*)0) & ((g_367.f3 ^= (safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((0x53F8D572L > (0xEAL > ((void*)0 == l_664))) ^ g_180), p_42)), 246UL))) && (*p_41))) & (**g_140)), g_391.f6)) , (*l_619)) || (*g_423)) < g_7)) , (*g_423));
                    (*l_620) ^= ((safe_add_func_int64_t_s_s(p_42, (p_42 ^ (g_324[1][2] ^ g_146)))) != (safe_unary_minus_func_uint64_t_u(0x48592F2378E59058LL)));
                    l_683 = ((safe_sub_func_uint32_t_u_u((l_635 = (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((-1L), ((((0x642EL > ((*l_657) |= ((*g_141) > l_625))) || ((*l_677) = ((*l_676) = ((*l_675) |= 4294967294UL)))) | (safe_sub_func_uint64_t_u_u(g_241, ((safe_mod_func_uint32_t_u_u(((l_682 != (void*)0) > p_42), 0x3F2E3C17L)) || p_42)))) , (-9L)))), 0xF9L))), p_42)) ^ g_52);
                }
                (*l_664) = &l_426;
            }
            for (l_634 = 0; (l_634 <= 2); l_634 += 1)
            { 
                uint16_t **l_705 = (void*)0;
                struct S2 *l_712 = &l_641;
                int32_t l_715 = 0x17C8D26AL;
                int32_t l_716 = 0x73C8CE24L;
                int32_t l_717 = (-5L);
                int32_t l_719 = 1L;
                int32_t *l_723[7][2][1] = {{{&l_263[2]},{&l_263[2]}},{{(void*)0},{&l_263[2]}},{{&l_263[2]},{(void*)0}},{{&l_263[2]},{&l_263[2]}},{{(void*)0},{&l_263[2]}},{{&l_263[2]},{(void*)0}},{{&l_263[2]},{&l_263[2]}}};
                int32_t l_724 = (-1L);
                int32_t l_725 = 2L;
                int i, j, k;
                if (l_263[(g_367.f2 + 1)])
                    break;
                l_684 = &g_52;
                if (g_45[(g_367.f2 + 1)][l_426.f1])
                    break;
            }
            if (l_248.f0)
                goto lbl_685;
            for (g_391.f2 = 0; (g_391.f2 <= 0); g_391.f2 += 1)
            { 
                l_729 = 0xCF9573A0L;
                for (l_654.f4 = 0; (l_654.f4 <= 3); l_654.f4 += 1)
                { 
                    int8_t *l_735 = &l_600[0][0];
                    int8_t **l_734 = &l_735;
                    int8_t ***l_738 = &l_736;
                    int16_t *l_743[7][2][4] = {{{&l_426.f1,&g_528[g_391.f2],&g_146,&g_528[g_391.f2]},{&g_528[0],&g_528[0],&g_146,&g_528[0]}},{{&l_426.f1,&g_528[g_391.f2],&g_528[0],&g_528[0]},{&g_528[0],&g_528[0],&g_528[0],&g_528[g_391.f2]}},{{&g_528[0],&g_528[g_391.f2],&g_528[0],&g_528[0]},{&l_426.f1,&g_528[g_391.f2],&g_146,&g_528[g_391.f2]}},{{&g_528[0],&g_528[0],&g_146,&g_528[0]},{&l_426.f1,&g_528[g_391.f2],&g_528[0],&g_528[0]}},{{&g_528[0],&g_528[0],&g_528[0],&g_528[g_391.f2]},{&g_528[0],&g_528[g_391.f2],&g_528[0],&g_528[0]}},{{&l_426.f1,&g_528[g_391.f2],&g_146,&g_528[g_391.f2]},{&g_528[0],&g_528[0],&g_146,&g_528[0]}},{{&l_426.f1,&g_528[g_391.f2],&g_528[0],&g_528[0]},{&g_528[0],&g_528[0],&g_528[0],&g_528[g_391.f2]}}};
                    uint16_t *l_744 = &g_324[0][1];
                    int i, j, k;
                    (*g_423) ^= (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((*l_734) = &l_714[0]) != g_141), (((((*l_738) = l_736) != (void*)0) & ((l_263[(g_367.f2 + 3)] , ((((**g_140) &= g_45[l_426.f1][g_367.f2]) ^ (safe_mul_func_int8_t_s_s((((l_718[(g_391.f2 + 2)] , g_528[g_391.f2]) , (void*)0) != &g_324[0][1]), (-1L)))) <= g_528[g_391.f2])) , 0xA0L)) != p_42))), p_42));
                    if (l_263[(g_367.f2 + 3)])
                        break;
                    (*g_423) |= ((++(*p_41)) || ((**g_140) = (((p_42 || ((*l_684) = (l_654.f3 || p_42))) == (((((*l_744) &= g_66) < 0x1AA5L) >= 1UL) , ((l_745 != &g_333) >= g_528[g_391.f2]))) | p_42)));
                }
            }
            (*l_664) = &g_367;
        }
        p_43 = ((((l_263[(g_367.f2 + 2)] & (l_426 , (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_263[(g_367.f2 + 3)], (safe_unary_minus_func_int64_t_s(g_179)))), ((*l_756) ^= ((safe_mod_func_int8_t_s_s(((((((*l_753) |= 0x5925C77025579BE0LL) < ((l_754 , l_755) != &g_149)) == 0x809FL) > p_42) <= g_225), p_42)) || p_42)))))) & g_240) == 0xA57CL) , &l_637);
        for (l_340.f0 = 0; (l_340.f0 <= 0); l_340.f0 += 1)
        { 
            uint32_t l_760 = 0x44CF53A0L;
            struct S1 l_770[5] = {{0x1293516FL,0x2396D397A77455ADLL,65526UL,0L,65532UL,0x5FL,8UL},{0x1293516FL,0x2396D397A77455ADLL,65526UL,0L,65532UL,0x5FL,8UL},{0x1293516FL,0x2396D397A77455ADLL,65526UL,0L,65532UL,0x5FL,8UL},{0x1293516FL,0x2396D397A77455ADLL,65526UL,0L,65532UL,0x5FL,8UL},{0x1293516FL,0x2396D397A77455ADLL,65526UL,0L,65532UL,0x5FL,8UL}};
            int16_t l_777 = (-1L);
            int32_t l_787 = 5L;
            struct S0 *l_793[3];
            struct S1 **l_807 = &g_390;
            int i;
            for (i = 0; i < 3; i++)
                l_793[i] = &g_794;
            for (l_502 = 0; (l_502 <= 0); l_502 += 1)
            { 
                struct S1 l_776 = {0UL,0xE77DE8DE3926BA7DLL,65530UL,-1L,0x8521L,252UL,0xA2B88B223FCA03D2LL};
                int32_t *l_778 = &l_634;
                int32_t **l_779 = &l_778;
                int32_t ***l_781 = &g_113;
                int32_t ****l_780 = &l_781;
                union U4 **l_784 = &g_333;
                uint16_t l_789 = 65535UL;
                uint64_t *l_806 = &l_340.f1;
            }
            (*l_807) = &l_770[1];
        }
    }
    --l_809[0];
    return &g_294[0][1][0];
}



static int32_t * func_46(const struct S3  p_47, uint8_t  p_48, uint8_t * p_49)
{ 
    int32_t *l_51 = (void*)0;
    return l_51;
}



static int32_t ** func_54(uint16_t  p_55)
{ 
    int32_t l_76 = (-1L);
    int32_t l_82 = 0xC114349BL;
    int32_t *l_91[6];
    uint8_t **l_177 = (void*)0;
    struct S1 l_202[5] = {{18446744073709551611UL,0x2E776E5D696A6714LL,0xD737L,0x1C8D9C58L,65535UL,255UL,0UL},{18446744073709551611UL,0x2E776E5D696A6714LL,0xD737L,0x1C8D9C58L,65535UL,255UL,0UL},{18446744073709551611UL,0x2E776E5D696A6714LL,0xD737L,0x1C8D9C58L,65535UL,255UL,0UL},{18446744073709551611UL,0x2E776E5D696A6714LL,0xD737L,0x1C8D9C58L,65535UL,255UL,0UL},{18446744073709551611UL,0x2E776E5D696A6714LL,0xD737L,0x1C8D9C58L,65535UL,255UL,0UL}};
    union U4 *l_229 = (void*)0;
    int32_t l_239[2];
    int i;
    for (i = 0; i < 6; i++)
        l_91[i] = &l_82;
    for (i = 0; i < 2; i++)
        l_239[i] = 0x25FB43AFL;
    for (p_55 = 9; (p_55 >= 35); p_55 = safe_add_func_uint64_t_u_u(p_55, 2))
    { 
        uint8_t *l_74[4];
        uint8_t ** const l_73 = &l_74[0];
        union U4 l_75 = {0xD530L};
        int32_t *l_81 = (void*)0;
        int32_t **l_92 = &l_81;
        uint64_t l_107 = 0x502624D59534E3A6LL;
        struct S3 *l_148[3][6][2] = {{{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149}},{{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149}},{{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149},{&g_149,&g_149}}};
        struct S0 l_161 = {0UL,-1L,0xB70EE5EEL,0x85L,0x6AE0BEDEL,0xAE182EB9L,0L,0x82E1C061L};
        uint32_t l_164 = 0x06F248DDL;
        int8_t l_181 = (-1L);
        int32_t l_183[3][2];
        int32_t l_222 = 5L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_74[i] = &g_45[0][0];
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_183[i][j] = 0xD828C4DAL;
        }
        l_82 |= (g_62 , (((l_73 != (l_75 , (void*)0)) < l_76) == (safe_mul_func_int8_t_s_s(l_76, (safe_add_func_uint8_t_u_u(0xC0L, l_76))))));
        if (((safe_sub_func_int8_t_s_s((0x13A23B15L < (0L < (safe_add_func_int16_t_s_s((3UL != ((safe_rshift_func_uint16_t_u_u(0x73B7L, 9)) , (((*l_92) = l_91[5]) == &g_52))), (g_62.f5 & g_52))))), p_55)) || (-4L)))
        { 
            int32_t l_97 = 1L;
            struct S1 l_106 = {0xA7570BAEL,0x4427A07EE3387E9ALL,65535UL,-1L,0x69D6L,5UL,0x9ACA868CE927CFDALL};
            const struct S3 l_114 = {1L,1UL,0xC92FL,0x57L,0xD6L,0UL};
            struct S0 l_115[1] = {{0xB4028A08A75D01A8LL,0xC39FL,4294967289UL,0x9CL,18446744073709551615UL,0x233B6E2EL,0xB36A152264B8EAE7LL,1UL}};
            uint8_t *l_121[3][2][3];
            uint8_t **l_120 = &l_121[0][1][1];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_121[i][j][k] = (void*)0;
                }
            }
            (**l_92) = (((0xFE41L | (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_97, (safe_div_func_uint8_t_u_u(((~((**l_92) >= (safe_mul_func_uint16_t_u_u(((g_62.f2 = (((0xE1L ^ (g_62.f2 , (safe_unary_minus_func_uint64_t_u((safe_sub_func_uint64_t_u_u((l_106 , 0x4F8EFC5DF5A5DA86LL), 18446744073709551607UL)))))) == p_55) >= 0x2CED7563L)) == 0x673FL), l_107)))) && p_55), p_55)))), g_62.f6))) < 0xBF85L) , l_106.f6);
            for (l_106.f0 = 0; (l_106.f0 > 51); ++l_106.f0)
            { 
                ++g_110;
                return g_113;
            }
            (*l_92) = func_46(l_114, (l_115[0] , ((-10L) <= (safe_lshift_func_uint8_t_u_s(((l_115[0].f7 , g_7) , (safe_rshift_func_uint8_t_u_u(((**l_73) &= (*l_81)), 1))), 5)))), ((*l_120) = (*l_73)));
        }
        else
        { 
            uint32_t l_130 = 1UL;
            uint8_t **l_139[3][3][7] = {{{&l_74[0],&l_74[0],&l_74[2],&l_74[0],&l_74[3],&l_74[0],&l_74[2]},{&l_74[3],&l_74[0],&l_74[0],&l_74[0],&l_74[0],&l_74[2],(void*)0},{(void*)0,&l_74[0],&l_74[2],&l_74[0],&l_74[2],&l_74[0],&l_74[0]}},{{&l_74[3],&l_74[0],(void*)0,&l_74[0],&l_74[0],&l_74[2],&l_74[0]},{&l_74[0],&l_74[0],&l_74[0],(void*)0,&l_74[2],&l_74[0],&l_74[0]},{&l_74[0],&l_74[0],(void*)0,(void*)0,(void*)0,&l_74[0],&l_74[0]}},{{&l_74[2],&l_74[1],(void*)0,&l_74[0],(void*)0,&l_74[2],&l_74[3]},{&l_74[1],&l_74[2],&l_74[0],&l_74[0],(void*)0,&l_74[0],&l_74[1]},{&l_74[2],(void*)0,(void*)0,&l_74[0],&l_74[3],&l_74[2],(void*)0}}};
            int16_t *l_142 = &g_143;
            int16_t *l_144 = (void*)0;
            int16_t *l_145 = &g_146;
            uint8_t l_162[7];
            int32_t l_182 = 9L;
            uint64_t *l_198 = &g_180;
            int8_t *l_201 = &g_149.f4;
            int32_t l_215 = 0L;
            int32_t *l_228 = &l_215;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_162[i] = 255UL;
            l_130 ^= ((safe_rshift_func_int8_t_s_s(((0xC0FC352BBFD28FE8LL < (((*l_92) != (*l_92)) & p_55)) && g_62.f3), ((+(safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((p_55 , ((((~(((0xCD6AL ^ (**l_92)) , g_110) ^ p_55)) >= g_62.f2) && g_52) && (**l_92))), 0L)), 0x4C8FCCF9L))) == p_55))) & 4294967291UL);
            if ((safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((l_75 , g_62.f5), ((((safe_mod_func_int16_t_s_s(((g_64 != 0x5EB5DA64128449A3LL) | (safe_sub_func_int16_t_s_s(((*l_145) = ((*l_142) ^= (((g_62.f6 , l_139[0][2][4]) != g_140) != p_55))), l_130))), l_130)) | p_55) & g_62.f1) ^ g_110))), 1UL)))
            { 
                int32_t *l_147 = &l_82;
                uint32_t l_163 = 0x2605C497L;
                l_91[5] = l_147;
                for (l_107 = 0; (l_107 <= 0); l_107 += 1)
                { 
                    struct S3 **l_150 = (void*)0;
                    struct S3 *l_151[6][2][3] = {{{&g_149,&g_149,(void*)0},{(void*)0,(void*)0,&g_149}},{{&g_149,&g_149,(void*)0},{(void*)0,(void*)0,&g_149}},{{&g_149,&g_149,(void*)0},{(void*)0,(void*)0,&g_149}},{{&g_149,&g_149,(void*)0},{(void*)0,(void*)0,&g_149}},{{&g_149,&g_149,(void*)0},{(void*)0,(void*)0,&g_149}},{{&g_149,&g_149,(void*)0},{(void*)0,(void*)0,&g_149}}};
                    int i, j, k;
                    l_151[1][0][2] = l_148[2][2][0];
                }
                for (g_62.f4 = 0; (g_62.f4 <= 38); g_62.f4++)
                { 
                    (*l_92) = l_147;
                    (*l_147) ^= p_55;
                    l_164 &= (safe_div_func_int8_t_s_s((18446744073709551615UL && ((0x56L | ((**g_140) >= ((((*l_147) = (g_156 , ((safe_add_func_int8_t_s_s((((0UL >= l_130) | (((safe_add_func_uint32_t_u_u(((l_161 , g_149.f3) , l_162[2]), p_55)) , &g_141) != &g_141)) ^ p_55), 0xD1L)) > l_163))) > g_62.f3) | p_55))) , 0x43311D11F0E80B64LL)), 0x29L));
                }
                (**l_92) = 0x602EF286L;
                for (g_149.f4 = 0; (g_149.f4 > 2); ++g_149.f4)
                { 
                    return g_113;
                }
            }
            else
            { 
                int64_t *l_178 = &g_179;
                if ((*l_81))
                    break;
                l_182 ^= (((0xFE8FEF8690FF8399LL > (((((g_180 = ((safe_rshift_func_int8_t_s_u(g_149.f5, 3)) <= ((safe_mod_func_uint64_t_u_u((g_149.f1 && (0L >= (**g_140))), 0x5245F2AE77BACE08LL)) == (((*l_178) = (safe_div_func_uint64_t_u_u((((((safe_mod_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((0x2E74L || p_55), p_55)) > (-1L)), 0x961142FEL)) ^ 2L) , l_139[2][0][5]) == l_177) && p_55), p_55))) ^ p_55)))) <= g_66) & l_181) & l_130) != p_55)) , p_55) < p_55);
            }
            g_184++;
            if ((((safe_unary_minus_func_int16_t_s(0xE761L)) < (p_55 && ((safe_lshift_func_int16_t_s_s(((*l_142) = g_62.f6), (safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((((safe_add_func_int8_t_s_s(((*l_201) = (safe_sub_func_int16_t_s_s(((++(*l_198)) >= (-1L)), p_55))), (((l_202[3] , (void*)0) == &g_7) >= 0xC4A1L))) != (-7L)) , g_149.f0) >= 0x4DBDL), 6)), p_55)))) > g_149.f0))) , p_55))
            { 
                int8_t l_214 = 0xFCL;
                struct S2 l_219 = {0xFF06D840L,0UL};
                int32_t l_224 = 0x98489994L;
                l_215 |= ((safe_add_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(5L, g_156.f1)) != (((*l_145) = (safe_mod_func_uint64_t_u_u((((p_55 && (g_141 == l_201)) , ((**g_140) = (l_182 |= p_55))) ^ (~(l_214 |= (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(p_55, 0x3C60L)), g_45[0][0]))))), g_184))) > 0x76FAL)), 0x6AL)) < l_130);
                for (g_66 = 0; (g_66 != 14); g_66 = safe_add_func_uint32_t_u_u(g_66, 7))
                { 
                    struct S2 l_218 = {1UL,4UL};
                    struct S2 *l_221 = &l_218;
                    struct S2 **l_220 = &l_221;
                    int32_t l_223 = 1L;
                    l_219 = l_218;
                }
                l_228 = &l_82;
            }
            else
            { 
                union U4 **l_230 = &l_229;
                union U4 *l_232 = &l_75;
                union U4 **l_231 = &l_232;
                (*l_231) = ((*l_230) = l_229);
                --g_233;
                (*l_81) |= p_55;
                if (g_149.f5)
                    break;
                (*l_92) = (void*)0;
            }
        }
        ++g_236;
        g_242++;
        if (p_55)
            continue;
    }
    return g_113;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_45[i][j], "g_45[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_62.f1, "g_62.f1", print_hash_value);
    transparent_crc(g_62.f2, "g_62.f2", print_hash_value);
    transparent_crc(g_62.f3, "g_62.f3", print_hash_value);
    transparent_crc(g_62.f4, "g_62.f4", print_hash_value);
    transparent_crc(g_62.f5, "g_62.f5", print_hash_value);
    transparent_crc(g_62.f6, "g_62.f6", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_149.f1, "g_149.f1", print_hash_value);
    transparent_crc(g_149.f2, "g_149.f2", print_hash_value);
    transparent_crc(g_149.f3, "g_149.f3", print_hash_value);
    transparent_crc(g_149.f4, "g_149.f4", print_hash_value);
    transparent_crc(g_149.f5, "g_149.f5", print_hash_value);
    transparent_crc(g_156.f0, "g_156.f0", print_hash_value);
    transparent_crc(g_156.f1, "g_156.f1", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_273.f0, "g_273.f0", print_hash_value);
    transparent_crc(g_273.f1, "g_273.f1", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_294[i][j][k], "g_294[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_324[i][j], "g_324[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_367.f0, "g_367.f0", print_hash_value);
    transparent_crc(g_367.f1, "g_367.f1", print_hash_value);
    transparent_crc(g_367.f2, "g_367.f2", print_hash_value);
    transparent_crc(g_367.f3, "g_367.f3", print_hash_value);
    transparent_crc(g_367.f4, "g_367.f4", print_hash_value);
    transparent_crc(g_367.f5, "g_367.f5", print_hash_value);
    transparent_crc(g_367.f6, "g_367.f6", print_hash_value);
    transparent_crc(g_367.f7, "g_367.f7", print_hash_value);
    transparent_crc(g_391.f0, "g_391.f0", print_hash_value);
    transparent_crc(g_391.f1, "g_391.f1", print_hash_value);
    transparent_crc(g_391.f2, "g_391.f2", print_hash_value);
    transparent_crc(g_391.f3, "g_391.f3", print_hash_value);
    transparent_crc(g_391.f4, "g_391.f4", print_hash_value);
    transparent_crc(g_391.f5, "g_391.f5", print_hash_value);
    transparent_crc(g_391.f6, "g_391.f6", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_528[i], "g_528[i]", print_hash_value);

    }
    transparent_crc(g_794.f0, "g_794.f0", print_hash_value);
    transparent_crc(g_794.f1, "g_794.f1", print_hash_value);
    transparent_crc(g_794.f2, "g_794.f2", print_hash_value);
    transparent_crc(g_794.f3, "g_794.f3", print_hash_value);
    transparent_crc(g_794.f4, "g_794.f4", print_hash_value);
    transparent_crc(g_794.f5, "g_794.f5", print_hash_value);
    transparent_crc(g_794.f6, "g_794.f6", print_hash_value);
    transparent_crc(g_794.f7, "g_794.f7", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_935.f0, "g_935.f0", print_hash_value);
    transparent_crc(g_935.f1, "g_935.f1", print_hash_value);
    transparent_crc(g_935.f2, "g_935.f2", print_hash_value);
    transparent_crc(g_935.f3, "g_935.f3", print_hash_value);
    transparent_crc(g_935.f4, "g_935.f4", print_hash_value);
    transparent_crc(g_935.f5, "g_935.f5", print_hash_value);
    transparent_crc(g_935.f6, "g_935.f6", print_hash_value);
    transparent_crc(g_935.f7, "g_935.f7", print_hash_value);
    transparent_crc(g_947.f0, "g_947.f0", print_hash_value);
    transparent_crc(g_947.f1, "g_947.f1", print_hash_value);
    transparent_crc(g_947.f2, "g_947.f2", print_hash_value);
    transparent_crc(g_947.f3, "g_947.f3", print_hash_value);
    transparent_crc(g_947.f4, "g_947.f4", print_hash_value);
    transparent_crc(g_947.f5, "g_947.f5", print_hash_value);
    transparent_crc(g_947.f6, "g_947.f6", print_hash_value);
    transparent_crc(g_947.f7, "g_947.f7", print_hash_value);
    transparent_crc(g_949.f0, "g_949.f0", print_hash_value);
    transparent_crc(g_949.f1, "g_949.f1", print_hash_value);
    transparent_crc(g_949.f2, "g_949.f2", print_hash_value);
    transparent_crc(g_949.f3, "g_949.f3", print_hash_value);
    transparent_crc(g_949.f4, "g_949.f4", print_hash_value);
    transparent_crc(g_949.f5, "g_949.f5", print_hash_value);
    transparent_crc(g_949.f6, "g_949.f6", print_hash_value);
    transparent_crc(g_949.f7, "g_949.f7", print_hash_value);
    transparent_crc(g_1244.f0, "g_1244.f0", print_hash_value);
    transparent_crc(g_1244.f1, "g_1244.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
