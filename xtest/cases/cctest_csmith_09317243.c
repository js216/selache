// SPDX-License-Identifier: MIT
// cctest_csmith_09317243.c --- cctest case csmith_09317243 (csmith seed 154235459)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x62620fd7 */
/* @exp_ticks 0x70d2 */

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

// Options:   -s 154235459 -o /tmp/csmith_gen_dx9z1vbv/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint16_t  f0;
   const int64_t  f1;
   int8_t  f2;
   uint16_t  f3;
   int8_t  f4;
   uint8_t  f5;
   const int16_t  f6;
};

union U1 {
   uint16_t  f0;
   const int32_t  f1;
   uint32_t  f2;
};


static int32_t g_2 = 0xAD4351CDL;
static uint8_t g_12 = 0x96L;
static uint32_t g_37 = 0xED6C34F1L;
static uint16_t g_67 = 0x9068L;
static int32_t g_78 = 0xC61C9C8AL;
static int8_t g_97[7] = {0x4EL,0x4EL,0x4EL,0x4EL,0x4EL,0x4EL,0x4EL};
static struct S0 g_103 = {0UL,3L,0x52L,0x1A88L,1L,254UL,-7L};
static uint32_t *g_107 = &g_37;
static uint32_t **g_106[4][4][3] = {{{&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107}},{{&g_107,(void*)0,(void*)0},{&g_107,(void*)0,(void*)0},{&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107}},{{&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107},{&g_107,&g_107,(void*)0},{(void*)0,&g_107,&g_107}},{{&g_107,(void*)0,(void*)0},{&g_107,&g_107,&g_107},{&g_107,(void*)0,(void*)0},{&g_107,&g_107,(void*)0}}};
static int8_t g_120 = 1L;
static int16_t g_136 = (-1L);
static int32_t g_137 = 0x4A10173AL;
static uint16_t *g_165 = (void*)0;
static int32_t g_219 = (-8L);
static int8_t g_220[5] = {3L,3L,3L,3L,3L};
static uint64_t g_223[3] = {9UL,9UL,9UL};
static const int32_t **g_231 = (void*)0;
static int8_t g_248 = 0xFAL;
static uint32_t g_249 = 1UL;
static int32_t g_265 = 0x68A72DF7L;
static uint32_t g_288 = 0x5BBC914BL;
static int64_t g_299[3] = {2L,2L,2L};
static uint8_t g_300 = 253UL;
static uint32_t g_348 = 4294967295UL;
static union U1 g_364 = {1UL};
static int32_t *g_391 = &g_219;
static struct S0 g_394 = {0x2C1FL,0xBCAB0556257B961ALL,0x78L,0xDA1DL,1L,255UL,-10L};
static struct S0 *g_393 = &g_394;
static int16_t g_400 = 0xF0C6L;
static uint64_t g_403 = 0xA643C4D1B4668484LL;
static uint32_t ***g_435 = &g_106[3][0][1];
static uint32_t ****g_434[5] = {&g_435,&g_435,&g_435,&g_435,&g_435};
static uint32_t *****g_433 = &g_434[0];
static uint32_t *****g_437[1] = {&g_434[3]};
static const uint32_t g_444 = 1UL;
static uint8_t g_468 = 0x62L;
static int16_t *g_508 = (void*)0;
static int16_t **g_507 = &g_508;
static int8_t g_542 = (-7L);
static uint64_t g_543[1] = {0xA43AA1151E71A03ALL};
static int32_t *g_551 = &g_137;
static int64_t g_564 = 1L;
static int32_t g_565[2] = {0x0675A4FCL,0x0675A4FCL};
static uint16_t g_566 = 65529UL;
static uint32_t g_630 = 0x58127078L;
static uint16_t **g_642 = &g_165;
static uint8_t g_650[2] = {0x58L,0x58L};
static int64_t g_683 = 1L;
static uint16_t g_684[4] = {0UL,0UL,0UL,0UL};
static int8_t g_757 = (-8L);
static uint64_t g_793 = 1UL;
static uint64_t g_800[4][7] = {{0x1B2832F21633B24CLL,18446744073709551615UL,0x7CA4D3C5E13B1BD4LL,0xE288652E85F38D22LL,0x7CA4D3C5E13B1BD4LL,18446744073709551615UL,0x1B2832F21633B24CLL},{0x1B2832F21633B24CLL,18446744073709551615UL,0x7CA4D3C5E13B1BD4LL,0xE288652E85F38D22LL,0x7CA4D3C5E13B1BD4LL,18446744073709551615UL,0x1B2832F21633B24CLL},{0x1B2832F21633B24CLL,18446744073709551615UL,0x7CA4D3C5E13B1BD4LL,0xE288652E85F38D22LL,0x7CA4D3C5E13B1BD4LL,18446744073709551615UL,0x1B2832F21633B24CLL},{0x1B2832F21633B24CLL,18446744073709551615UL,0x7CA4D3C5E13B1BD4LL,0xE288652E85F38D22LL,0x7CA4D3C5E13B1BD4LL,18446744073709551615UL,0x1B2832F21633B24CLL}};
static uint16_t g_881 = 0UL;
static uint32_t g_920 = 4294967290UL;
static const struct S0 ***g_947 = (void*)0;
static int32_t g_951 = 0x21EFC748L;
static int8_t g_952 = 0x65L;
static uint32_t g_953 = 18446744073709551615UL;
static int16_t g_974 = 0x48E0L;
static int16_t g_975 = 0x7274L;
static union U1 g_1004 = {0x8D62L};
static uint32_t g_1074[3][6][6] = {{{0xD4CFDF54L,0x5B58D80DL,0xD4CFDF54L,0x98677280L,0UL,0x5B58D80DL},{0xB45B9E85L,0x5B58D80DL,4294967286UL,0x5B58D80DL,0xB45B9E85L,2UL},{0UL,0x98677280L,0xD4CFDF54L,0x5B58D80DL,0xD4CFDF54L,0x98677280L},{0xB45B9E85L,0x1051CEA7L,4294967286UL,0x98677280L,0xB45B9E85L,0x98677280L},{0xD4CFDF54L,2UL,0xD4CFDF54L,0x1051CEA7L,0UL,2UL},{0xB45B9E85L,2UL,4294967286UL,2UL,0xB45B9E85L,0x5B58D80DL}},{{0UL,0x1051CEA7L,0xD4CFDF54L,2UL,0xD4CFDF54L,0x1051CEA7L},{0xB45B9E85L,0x98677280L,4294967286UL,0x1051CEA7L,0xB45B9E85L,0x1051CEA7L},{0xD4CFDF54L,0x5B58D80DL,0xD4CFDF54L,0x98677280L,0UL,0x5B58D80DL},{0xB45B9E85L,0x5B58D80DL,4294967286UL,0x5B58D80DL,0xB45B9E85L,2UL},{0UL,0x98677280L,0xD4CFDF54L,0x5B58D80DL,0xD4CFDF54L,0x98677280L},{0xB45B9E85L,0x1051CEA7L,4294967286UL,0x98677280L,0xB45B9E85L,0x98677280L}},{{0xD4CFDF54L,2UL,0xD4CFDF54L,0x1051CEA7L,0UL,2UL},{0xB45B9E85L,2UL,4294967286UL,2UL,0xB45B9E85L,0x5B58D80DL},{0UL,0x1051CEA7L,0xD4CFDF54L,2UL,0xD4CFDF54L,0x1051CEA7L},{0xB45B9E85L,0x98677280L,4294967286UL,0x1051CEA7L,0xB45B9E85L,0x1051CEA7L},{0xD4CFDF54L,0x5B58D80DL,0xD4CFDF54L,0x98677280L,0UL,0x5B58D80DL},{0xB45B9E85L,0x5B58D80DL,4294967286UL,0x5B58D80DL,0xB45B9E85L,2UL}}};
static int32_t **g_1104 = &g_551;
static int32_t ***g_1103[4][4][7] = {{{(void*)0,(void*)0,&g_1104,&g_1104,&g_1104,(void*)0,&g_1104},{&g_1104,(void*)0,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104},{&g_1104,(void*)0,&g_1104,&g_1104,&g_1104,&g_1104,(void*)0},{&g_1104,&g_1104,&g_1104,(void*)0,&g_1104,&g_1104,&g_1104}},{{&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,(void*)0,&g_1104},{&g_1104,(void*)0,&g_1104,(void*)0,&g_1104,&g_1104,(void*)0},{&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104},{&g_1104,(void*)0,&g_1104,(void*)0,&g_1104,(void*)0,&g_1104}},{{&g_1104,&g_1104,&g_1104,&g_1104,(void*)0,&g_1104,(void*)0},{&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104},{&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,(void*)0},{&g_1104,&g_1104,(void*)0,&g_1104,(void*)0,&g_1104,&g_1104}},{{&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104},{&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,(void*)0},{&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104},{&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104,&g_1104}}};
static uint8_t g_1113 = 1UL;
static int8_t *g_1125 = &g_394.f2;
static uint64_t *g_1145[2] = {&g_793,&g_793};
static uint64_t **g_1144[5][6][6] = {{{&g_1145[1],&g_1145[1],&g_1145[0],(void*)0,&g_1145[0],&g_1145[0]},{&g_1145[0],&g_1145[0],&g_1145[1],&g_1145[1],&g_1145[1],&g_1145[1]},{&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[1]},{&g_1145[1],&g_1145[1],(void*)0,&g_1145[0],(void*)0,&g_1145[0]},{(void*)0,&g_1145[1],(void*)0,&g_1145[0],&g_1145[0],&g_1145[1]},{&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[1],&g_1145[1]}},{{&g_1145[0],&g_1145[1],&g_1145[1],&g_1145[0],&g_1145[0],&g_1145[0]},{&g_1145[0],&g_1145[1],&g_1145[0],&g_1145[0],(void*)0,&g_1145[1]},{(void*)0,&g_1145[0],(void*)0,&g_1145[0],(void*)0,&g_1145[1]},{&g_1145[1],&g_1145[1],&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[0]},{&g_1145[0],&g_1145[1],&g_1145[1],&g_1145[1],&g_1145[1],&g_1145[0]},{&g_1145[0],&g_1145[0],&g_1145[0],(void*)0,&g_1145[0],&g_1145[1]}},{{&g_1145[1],&g_1145[1],(void*)0,&g_1145[0],(void*)0,&g_1145[1]},{&g_1145[1],&g_1145[1],&g_1145[0],(void*)0,&g_1145[0],&g_1145[0]},{&g_1145[0],&g_1145[0],&g_1145[1],&g_1145[1],&g_1145[1],&g_1145[1]},{&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[1]},{&g_1145[0],&g_1145[0],&g_1145[1],&g_1145[1],&g_1145[0],&g_1145[1]},{&g_1145[1],&g_1145[0],&g_1145[1],&g_1145[1],&g_1145[0],&g_1145[1]}},{{(void*)0,&g_1145[1],&g_1145[1],&g_1145[0],&g_1145[0],&g_1145[0]},{&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[1],&g_1145[1]},{(void*)0,&g_1145[1],&g_1145[0],&g_1145[1],&g_1145[1],&g_1145[0]},{&g_1145[1],&g_1145[1],&g_1145[0],&g_1145[1],&g_1145[1],&g_1145[0]},{&g_1145[0],&g_1145[1],(void*)0,&g_1145[0],&g_1145[1],&g_1145[0]},{&g_1145[0],&g_1145[0],&g_1145[1],&g_1145[1],&g_1145[0],&g_1145[0]}},{{&g_1145[0],&g_1145[1],(void*)0,&g_1145[1],&g_1145[0],&g_1145[0]},{&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[0]},{&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[1],(void*)0,&g_1145[1]},{&g_1145[0],&g_1145[0],&g_1145[0],&g_1145[1],&g_1145[1],&g_1145[0]},{&g_1145[0],&g_1145[0],&g_1145[1],&g_1145[0],(void*)0,&g_1145[1]},{&g_1145[0],&g_1145[0],&g_1145[1],&g_1145[1],&g_1145[0],&g_1145[1]}}};
static uint8_t g_1285 = 8UL;
static uint8_t *g_1284 = &g_1285;
static int32_t g_1313 = 0xACD3E337L;
static uint16_t ****g_1395 = (void*)0;
static uint32_t g_1422[6] = {5UL,5UL,5UL,5UL,5UL,5UL};
static int64_t g_1435 = 1L;
static struct S0 g_1487 = {65530UL,0xFB75CF891B22CA08LL,0L,5UL,6L,254UL,0L};



static int8_t  func_1(void);
static uint16_t  func_17(uint8_t * p_18, uint32_t  p_19, uint32_t  p_20, uint32_t  p_21, int16_t  p_22);
static uint8_t * func_23(uint8_t * const  p_24, uint8_t * p_25, uint64_t  p_26);
static uint8_t * const  func_27(int32_t  p_28, uint32_t  p_29, uint64_t  p_30, uint8_t * p_31);
static int32_t  func_38(uint8_t * p_39, uint32_t * p_40, uint64_t  p_41, uint8_t * p_42);
static uint32_t  func_50(uint64_t  p_51, uint32_t  p_52, uint32_t * p_53);
static const uint16_t  func_57(const uint64_t  p_58, const struct S0  p_59, uint32_t * p_60);
static struct S0  func_61(uint32_t  p_62);




static int8_t  func_1(void)
{ 
    uint16_t l_32 = 0UL;
    const uint8_t *l_35[7] = {&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12};
    uint64_t l_1298 = 18446744073709551615UL;
    int32_t l_1314 = 0x13F58A59L;
    uint32_t l_1359 = 0xC50B815EL;
    uint32_t l_1364 = 18446744073709551611UL;
    const uint8_t l_1396 = 255UL;
    int32_t l_1413 = (-7L);
    uint16_t l_1414 = 0x41A5L;
    int32_t *l_1420 = &g_137;
    const int32_t l_1452 = 1L;
    uint32_t *****l_1466 = &g_434[0];
    int32_t *l_1480 = &g_951;
    int32_t *l_1491 = &g_2;
    int32_t *l_1492 = &g_265;
    int32_t *l_1493 = &g_78;
    int32_t *l_1494 = &l_1314;
    int32_t *l_1495[5][7][6] = {{{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2}},{{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313}},{{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2}},{{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313}},{{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2},{&g_1313,&g_1313,&g_2,&g_2,&g_1313,&g_1313},{&g_1313,&g_2,&g_2,&g_1313,&g_1313,&g_2}}};
    int16_t l_1496 = 1L;
    uint8_t l_1497 = 1UL;
    int8_t l_1500[2];
    uint32_t l_1501 = 0xF97AE1C6L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1500[i] = 0xE2L;
lbl_1469:
    for (g_2 = 0; (g_2 <= 5); ++g_2)
    { 
        uint8_t *l_11 = &g_12;
        int32_t l_15 = 0xEE4E9120L;
        int16_t l_16 = 0x57E7L;
        uint32_t *l_36 = &g_37;
        uint16_t *l_1310 = &g_67;
        int16_t *l_1311 = &g_974;
        int32_t *l_1312[3];
        uint32_t l_1327 = 4294967291UL;
        uint32_t *l_1362 = &g_920;
        uint32_t l_1387[4] = {18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL};
        int i;
        for (i = 0; i < 3; i++)
            l_1312[i] = &g_1313;
    }
    for (l_1314 = 0; (l_1314 > 29); l_1314++)
    { 
        const int16_t l_1419 = 9L;
        int32_t *l_1421[2];
        uint64_t l_1432 = 0xE89E3D9B6218C64FLL;
        int16_t ***l_1438 = &g_507;
        int16_t ****l_1437[2];
        uint8_t * const l_1446 = &g_12;
        uint8_t *l_1447 = &g_103.f5;
        int32_t l_1459 = 4L;
        int8_t **l_1460 = (void*)0;
        uint32_t l_1477 = 0UL;
        int i;
        for (i = 0; i < 2; i++)
            l_1421[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_1437[i] = &l_1438;
        (*g_551) = l_1419;
        l_1420 = (void*)0;
        l_1421[0] = ((*g_1104) = (*g_1104));
        if (g_1422[0])
        { 
            int32_t l_1425 = 6L;
            int32_t *l_1431 = &g_1313;
            for (g_394.f4 = 0; (g_394.f4 < (-22)); g_394.f4--)
            { 
                if (l_1425)
                    break;
                for (g_12 = 5; (g_12 <= 2); g_12 = safe_sub_func_int16_t_s_s(g_12, 9))
                { 
                    int32_t *l_1428 = &l_1413;
                    int32_t **l_1429 = (void*)0;
                    int32_t **l_1430 = &l_1420;
                    (*l_1430) = ((*g_1104) = l_1428);
                    (*l_1430) = l_1431;
                    if ((*g_551))
                        break;
                }
            }
            ++l_1432;
        }
        else
        { 
            int16_t l_1448 = 1L;
            int8_t *l_1449 = &g_220[3];
            int32_t *l_1454 = &l_1413;
            int32_t l_1468 = 0x17BE171DL;
            union U1 l_1485 = {1UL};
            if (((((*g_1104) == &l_1314) ^ (g_1435 < ((!4294967288UL) , (l_1437[1] != &l_1438)))) == 0xBB0FFFE2L))
            { 
                int16_t *l_1441 = (void*)0;
                int32_t *l_1453 = &g_565[0];
                int32_t l_1463 = 7L;
                (**g_1104) = (((*l_1449) = (safe_mod_func_uint16_t_u_u((((*g_507) = l_1441) != (((*g_391) = 0x756A727CL) , &g_136)), (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((g_1125 = func_23(l_1446, l_1447, (g_364 , ((0xB17EC0F1L | l_1448) > g_684[3])))) == l_1449), (*g_1284))), g_97[1]))))) < g_951);
                for (g_78 = 0; (g_78 <= 1); g_78 += 1)
                { 
                    return (*g_1125);
                }
                (*g_551) &= (safe_rshift_func_int16_t_s_s(g_37, l_1452));
                (*g_1104) = ((l_1453 != (void*)0) , l_1454);
                if ((safe_rshift_func_uint16_t_u_s(((((safe_add_func_int16_t_s_s(l_1414, l_1459)) <= ((l_1460 == &g_1125) == 0x1988064DL)) && (safe_unary_minus_func_uint64_t_u(((!((void*)0 != &g_630)) && g_265)))) != l_1463), 5)))
                { 
                    struct S0 *l_1464[7][2][6] = {{{(void*)0,(void*)0,&g_103,(void*)0,(void*)0,&g_103},{(void*)0,(void*)0,(void*)0,&g_103,&g_103,&g_103}},{{(void*)0,(void*)0,(void*)0,&g_103,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_103}},{{&g_103,(void*)0,(void*)0,(void*)0,&g_103,&g_103},{(void*)0,&g_103,&g_103,&g_103,&g_103,(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_103,(void*)0,(void*)0},{(void*)0,(void*)0,&g_103,(void*)0,(void*)0,&g_103}},{{(void*)0,(void*)0,(void*)0,&g_103,&g_103,&g_103},{(void*)0,(void*)0,(void*)0,&g_103,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_103},{&g_103,(void*)0,(void*)0,(void*)0,&g_103,(void*)0}},{{(void*)0,&g_103,(void*)0,(void*)0,&g_103,(void*)0},{&g_103,(void*)0,&g_103,&g_103,&g_103,(void*)0}}};
                    struct S0 **l_1465 = &g_393;
                    int32_t l_1467 = 1L;
                    int i, j, k;
                    g_433 = ((l_1464[4][0][5] != ((*l_1465) = &g_394)) , l_1466);
                    l_1468 |= ((*l_1454) = l_1467);
                    return (*g_1125);
                }
                else
                { 
                    if (g_1435)
                        goto lbl_1469;
                    if ((*g_551))
                        continue;
                }
            }
            else
            { 
                uint64_t * const ** const * const l_1471 = (void*)0;
                int32_t l_1476 = 0xD21C08C3L;
                if ((!(*g_1125)))
                { 
                    uint64_t * const ** const **l_1472 = (void*)0;
                    uint64_t * const *l_1475 = &g_1145[1];
                    uint64_t * const ** const l_1474 = &l_1475;
                    uint64_t * const ** const *l_1473 = &l_1474;
                    if ((*g_551))
                        break;
                    l_1473 = l_1471;
                    l_1477++;
                    if (g_394.f4)
                        goto lbl_1469;
                }
                else
                { 
                    struct S0 *l_1486 = &g_1487;
                    struct S0 * const l_1488 = &g_103;
                    l_1480 = &l_1314;
                    (*l_1454) = (safe_div_func_uint16_t_u_u((((*l_1454) <= (((void*)0 == g_1395) , (&g_508 != (l_1485 , (void*)0)))) < ((l_1486 = &g_394) != l_1488)), g_103.f3));
                }
                return (*g_1125);
            }
            for (g_793 = 0; (g_793 >= 2); g_793++)
            { 
                (*l_1480) |= (*g_551);
            }
        }
    }
    l_1497++;
    l_1501--;
    (*g_1104) = (*g_1104);
    return (*g_1125);
}



static uint16_t  func_17(uint8_t * p_18, uint32_t  p_19, uint32_t  p_20, uint32_t  p_21, int16_t  p_22)
{ 
    int16_t l_1305 = 0xA4CEL;
    uint64_t **l_1306 = &g_1145[0];
    int32_t l_1309 = 0x4451E00FL;
    for (g_403 = 0; (g_403 <= 3); g_403 = safe_add_func_uint16_t_u_u(g_403, 1))
    { 
        uint64_t ***l_1307 = &g_1144[2][2][4];
        int32_t l_1308 = 0x0CF2B264L;
        l_1309 = (safe_rshift_func_int16_t_s_s((((safe_div_func_uint64_t_u_u(p_21, p_20)) != l_1305) > (((*l_1307) = l_1306) != l_1306)), l_1308));
    }
    return l_1305;
}



static uint8_t * func_23(uint8_t * const  p_24, uint8_t * p_25, uint64_t  p_26)
{ 
    int16_t l_1292 = 0x2ADCL;
    int32_t l_1297 = 0xF8202470L;
    l_1297 = (safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((((((safe_add_func_int64_t_s_s((p_26 & l_1292), g_67)) | (safe_rshift_func_uint16_t_u_s((1UL | l_1292), 11))) < 9L) , ((safe_add_func_uint32_t_u_u(0x1CE08C92L, l_1292)) | p_26)) && (-5L)), l_1292)) == p_26) , p_26), 0x2364L));
    return p_25;
}



static uint8_t * const  func_27(int32_t  p_28, uint32_t  p_29, uint64_t  p_30, uint8_t * p_31)
{ 
    uint8_t *l_47[6][4][6] = {{{(void*)0,(void*)0,&g_12,(void*)0,(void*)0,(void*)0},{(void*)0,&g_12,(void*)0,(void*)0,&g_12,&g_12},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_12,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_12,(void*)0,(void*)0,&g_12,&g_12},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_12,(void*)0,(void*)0,(void*)0},{(void*)0,&g_12,(void*)0,(void*)0,&g_12,&g_12}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_12,(void*)0,(void*)0,(void*)0},{(void*)0,&g_12,(void*)0,(void*)0,&g_12,&g_12},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_12,(void*)0,(void*)0,(void*)0},{(void*)0,&g_12,(void*)0,(void*)0,&g_12,&g_12},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_12,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_12,(void*)0,(void*)0,&g_12,&g_12},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_12,(void*)0,(void*)0,(void*)0},{(void*)0,&g_12,(void*)0,(void*)0,&g_12,&g_12}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_12,(void*)0,(void*)0,(void*)0},{(void*)0,&g_12,(void*)0,(void*)0,&g_12,&g_12},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_56 = 0x20A3D576L;
    uint32_t *l_724 = (void*)0;
    struct S0 *l_995 = &g_103;
    uint32_t *** const l_1070 = &g_106[1][2][1];
    uint32_t l_1077 = 3UL;
    int32_t *l_1080 = &g_951;
    int32_t l_1106[4];
    int8_t *l_1126 = &g_103.f4;
    int16_t l_1251 = 0x876AL;
    int64_t *l_1252 = &g_564;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1106[i] = (-9L);
    if (func_38(&g_12, (((safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(((l_47[5][0][1] != ((((safe_add_func_uint32_t_u_u(func_50((safe_rshift_func_uint16_t_u_u(l_56, func_57(l_56, func_61(p_28), &g_37))), p_30, &g_37), p_29)) <= l_56) > g_542) , (void*)0)) ^ g_394.f0), (*p_31))) < l_56), l_56)) , p_30) , l_724), l_56, &g_300))
    { 
        int32_t *l_949 = &g_265;
        int32_t *l_950[7][3] = {{&g_137,&g_78,&g_78},{&g_137,&g_137,&g_78},{&g_137,&g_78,&g_78},{&g_78,&g_2,&g_78},{&g_137,&g_2,&g_137},{&g_137,&g_78,&g_78},{&g_137,&g_137,&g_78}};
        int16_t *l_963 = &g_400;
        uint32_t *l_965 = (void*)0;
        uint32_t **l_964 = &l_965;
        union U1 *l_1003 = &g_1004;
        uint32_t l_1059 = 0xA35E2B17L;
        int16_t l_1071 = (-1L);
        int64_t *l_1118[4];
        int8_t *l_1124 = &g_120;
        int8_t **l_1123[2];
        uint16_t ***l_1136 = &g_642;
        uint16_t ****l_1135 = &l_1136;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1118[i] = &g_299[0];
        for (i = 0; i < 2; i++)
            l_1123[i] = &l_1124;
lbl_1008:
        g_953--;
        if ((p_28 = ((safe_mul_func_int16_t_s_s((((*l_949) = (*l_949)) != (safe_unary_minus_func_uint64_t_u((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(((*l_963) = (g_394.f0 && 0x43L)), (0xE3803A9486EE7CFFLL == ((((-9L) ^ (l_949 == ((*l_964) = l_724))) < 0xD51C3837L) , p_29)))), p_30))))), 0x1F89L)) , p_29)))
        { 
            uint32_t l_992 = 0UL;
            int32_t l_1007[3];
            struct S0 **l_1011[7][4][4] = {{{&g_393,&g_393,&g_393,(void*)0},{&g_393,(void*)0,&l_995,&g_393},{&l_995,&g_393,(void*)0,&g_393},{&l_995,&l_995,&l_995,(void*)0}},{{&g_393,&g_393,&l_995,&g_393},{&g_393,&l_995,&l_995,&g_393},{&l_995,&g_393,&g_393,&g_393},{&g_393,&g_393,&l_995,&l_995}},{{&g_393,&l_995,&l_995,&l_995},{&l_995,&g_393,&g_393,&l_995},{(void*)0,&g_393,&g_393,&l_995},{&g_393,&l_995,&g_393,&l_995}},{{(void*)0,&g_393,&g_393,&g_393},{&l_995,&g_393,(void*)0,&g_393},{&g_393,&l_995,&g_393,&g_393},{(void*)0,&g_393,&l_995,(void*)0}},{{&g_393,&l_995,&g_393,&g_393},{(void*)0,&l_995,(void*)0,&g_393},{&g_393,&g_393,&l_995,&g_393},{&g_393,&g_393,&g_393,&g_393}},{{&g_393,&g_393,&l_995,&l_995},{&l_995,&l_995,(void*)0,&g_393},{&l_995,&l_995,&l_995,&l_995},{&g_393,&g_393,&g_393,&l_995}},{{&g_393,(void*)0,&l_995,&g_393},{&g_393,&l_995,(void*)0,&g_393},{(void*)0,&g_393,&g_393,(void*)0},{&g_393,&g_393,&l_995,&g_393}}};
            struct S0 *** const l_1010 = &l_1011[6][3][1];
            union U1 l_1095 = {0x7CCCL};
            int64_t l_1096[2][4] = {{9L,0L,9L,0L},{9L,0L,9L,0L}};
            int32_t **l_1102 = &l_949;
            int32_t ***l_1101 = &l_1102;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1007[i] = 0x51734FA3L;
            for (p_29 = 0; (p_29 <= 1); p_29 += 1)
            { 
                uint64_t l_991[3][7] = {{0xA85E1F2315C8128CLL,7UL,0xA85E1F2315C8128CLL,0UL,7UL,0xC03372F19E9F229CLL,0xC03372F19E9F229CLL},{7UL,0x22272B746E1A442FLL,1UL,0x22272B746E1A442FLL,7UL,1UL,0x841958787A7BFECFLL},{0x841958787A7BFECFLL,0xC03372F19E9F229CLL,0UL,0x841958787A7BFECFLL,0UL,0xC03372F19E9F229CLL,0x841958787A7BFECFLL}};
                int32_t l_993 = 0x04012A5CL;
                uint32_t * const *l_1052[2];
                uint32_t * const **l_1051 = &l_1052[0];
                uint32_t * const ***l_1050 = &l_1051;
                uint16_t *l_1053[7][3][7] = {{{&g_1004.f0,&g_67,&g_684[(p_29 + 1)],&g_364.f0,(void*)0,&g_684[2],&g_103.f3},{&g_684[3],&g_684[3],&g_684[3],(void*)0,&g_67,&g_684[(p_29 + 1)],(void*)0},{&g_684[1],&g_364.f0,&g_684[3],&g_684[(p_29 + 1)],&g_364.f0,&g_684[(p_29 + 1)],&g_684[3]}},{{&g_881,&g_881,&g_566,&g_566,(void*)0,&g_103.f3,&g_103.f3},{&g_103.f3,&g_881,&g_566,&g_684[(p_29 + 1)],&g_103.f3,&g_364.f0,&g_881},{&g_684[2],&g_881,(void*)0,&g_684[3],(void*)0,&g_684[(p_29 + 1)],&g_566}},{{(void*)0,&g_684[3],(void*)0,&g_881,&g_364.f0,&g_103.f3,&g_1004.f0},{&g_364.f0,&g_364.f0,(void*)0,&g_684[(p_29 + 1)],&g_67,&g_67,(void*)0},{&g_881,&g_364.f0,&g_684[(p_29 + 1)],&g_684[3],(void*)0,&g_881,&g_364.f0}},{{(void*)0,&g_684[2],&g_364.f0,&g_684[(p_29 + 1)],&g_103.f3,&g_566,&g_684[(p_29 + 1)]},{&g_684[3],&g_103.f3,&g_364.f0,&g_684[1],&g_566,&g_566,&g_103.f3},{&g_684[(p_29 + 1)],&g_364.f0,&g_684[2],&g_881,&g_103.f3,&g_364.f0,&g_103.f3}},{{&g_881,&g_684[(p_29 + 1)],&g_684[(p_29 + 1)],&g_881,&g_103.f3,&g_566,&g_684[(p_29 + 1)]},{&g_684[3],&g_364.f0,&g_684[1],&g_67,&g_684[(p_29 + 1)],&g_364.f0,&g_881},{&g_684[(p_29 + 1)],&g_364.f0,&g_1004.f0,&g_67,&g_566,(void*)0,&g_684[(p_29 + 1)]}},{{&g_566,&g_881,&g_684[3],&g_684[1],&g_1004.f0,&g_364.f0,&g_103.f3},{&g_684[(p_29 + 1)],&g_103.f3,&g_684[3],&g_67,&g_881,&g_684[2],&g_103.f3},{(void*)0,&g_684[(p_29 + 1)],&g_684[(p_29 + 1)],&g_566,&g_364.f0,&g_684[(p_29 + 1)],&g_684[(p_29 + 1)]}},{{&g_364.f0,(void*)0,&g_684[(p_29 + 1)],&g_1004.f0,&g_1004.f0,&g_364.f0,&g_364.f0},{&g_364.f0,&g_364.f0,(void*)0,&g_684[(p_29 + 1)],(void*)0,(void*)0,&g_684[(p_29 + 1)]},{(void*)0,&g_566,(void*)0,&g_566,&g_684[(p_29 + 1)],&g_566,&g_684[3]}}};
                int8_t l_1054 = 0xBDL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1052[i] = &l_724;
                if ((safe_sub_func_int8_t_s_s(((g_684[(p_29 + 1)] &= (2UL >= ((g_650[p_29] < (safe_mod_func_int16_t_s_s((-1L), (safe_add_func_uint8_t_u_u(g_650[p_29], g_565[p_29]))))) && (safe_rshift_func_int8_t_s_s(((void*)0 != &g_249), 0))))) == g_565[p_29]), g_37)))
                { 
                    uint16_t l_976 = 0x0631L;
                    if (p_29)
                        break;
                    --l_976;
                    if (p_29)
                        break;
                }
                else
                { 
                    uint64_t *l_987 = (void*)0;
                    uint64_t *l_988 = &g_403;
                    int32_t l_996[1][2];
                    union U1 *l_1002 = &g_364;
                    union U1 **l_1001[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int16_t *l_1005 = (void*)0;
                    int16_t *l_1006 = &g_136;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_996[i][j] = 7L;
                    }
                    l_993 = ((safe_rshift_func_uint8_t_u_s(g_952, (0x867A7C6361CC8933LL >= (safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((g_394.f5 < ((*l_988) = p_30)), (((0x892FL > (((safe_div_func_uint32_t_u_u((0x3BL | (l_991[2][2] &= ((p_29 ^ p_29) || p_29))), p_29)) != g_299[1]) == l_992)) ^ l_56) & l_56))), (-4L))), g_951))))) , 0x3C30E288L);
                    (*l_949) = 0x2942D23EL;
                    l_1007[1] &= (+((((l_995 != l_995) == l_996[0][0]) || (safe_rshift_func_int16_t_s_s(((*l_1006) = ((*l_963) = (safe_add_func_int16_t_s_s(p_28, (func_61((p_29 || (&g_364 != (l_1003 = ((p_30 , g_136) , (void*)0))))) , p_29))))), 3))) >= p_29));
                    p_28 &= 0x9E42AD43L;
                }
                for (g_12 = 0; (g_12 <= 1); g_12 += 1)
                { 
                    const uint32_t *l_1012 = &g_249;
                    uint64_t *l_1015 = &g_223[0];
                    int8_t *l_1032 = &g_757;
                    const struct S0 l_1033 = {0xC62AL,-1L,3L,1UL,-3L,0xC5L,0x9882L};
                    int64_t *l_1034[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1034[i] = &g_683;
                    if (g_400)
                        goto lbl_1008;
                    if (p_30)
                        continue;
                    g_951 ^= (((0L && 255UL) ^ 0xE71FL) | ((~((void*)0 != l_1010)) && ((((*l_1015) ^= (l_1012 != ((safe_sub_func_int8_t_s_s(g_683, (*p_31))) , (*l_964)))) ^ 0x4055988870D866BCLL) != p_30)));
                    (*l_949) = (g_37 != ((l_993 = (safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((((((0xDD7F0814L ^ (((*l_1015) = 0x1082ED848AA77AA4LL) , (((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s(l_56, 0xB9L)), (safe_mul_func_uint8_t_u_u((((-8L) <= ((*l_1032) = (((&g_231 != (void*)0) && l_56) <= 0x4A606017L))) > p_29), 1L)))), p_30)) && g_975) < (*p_31)))) <= g_650[p_29]) , l_1033) , p_29) <= p_29), 13)), 0xA6D13835FAE8E429LL)), l_1007[1]))) == p_29));
                }
                (*l_949) = 1L;
                (*l_949) |= ((!((safe_sub_func_int16_t_s_s(p_28, (8L <= ((safe_sub_func_int64_t_s_s(g_103.f0, ((safe_mul_func_int16_t_s_s((p_30 , p_30), ((((((++g_394.f3) <= (l_56 &= (safe_div_func_uint8_t_u_u(g_565[p_29], (safe_add_func_uint64_t_u_u(((void*)0 == l_1050), 5UL)))))) >= p_30) , g_881) , 65527UL) >= p_30))) || l_1054))) < p_28)))) || l_56)) & 0x85428F4FL);
            }
            for (g_1004.f2 = 2; (g_1004.f2 <= 6); g_1004.f2 += 1)
            { 
                uint64_t *l_1067 = &g_223[1];
                int32_t l_1072 = 0x82E76EA7L;
                int i;
                if (((*l_949) , (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_1059, p_28)), (safe_unary_minus_func_int8_t_s(((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((((*l_995) , l_1003) == (void*)0), (--(*l_1067)))) , (((((g_97[g_1004.f2] = g_565[1]) , 0x47A525B3L) , (**g_433)) != l_1070) != (-7L))), p_28)), 0xE0L)) , l_1071)))))))
                { 
                    int32_t l_1073 = (-1L);
                    int i;
                    --g_1074[0][1][4];
                    ++l_1077;
                    l_1080 = l_949;
                    (*l_949) = (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_s(0x0AL, (p_29 && ((safe_rshift_func_int8_t_s_u((p_30 && (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((&g_508 == (void*)0) && (safe_add_func_int8_t_s_s((g_97[g_1004.f2] = (l_1095 , g_394.f6)), l_1072))), g_951)), (-1L))), (*p_31)))), g_394.f2)) , 0UL)))) , 0x0BL) >= l_1096[0][2]), 5));
                }
                else
                { 
                    int32_t *l_1097 = (void*)0;
                    int32_t **l_1098 = &l_1097;
                    int32_t ****l_1105 = &g_1103[3][0][2];
                    l_1080 = ((*l_1098) = l_1097);
                    l_1106[3] = ((safe_mul_func_int16_t_s_s((-4L), ((((g_394.f0 <= l_1072) , 0xF0FDE956L) , l_1101) != ((*l_1105) = g_1103[3][0][2])))) & (p_29 <= 0xCF14L));
                    p_28 = ((***l_1101) = p_30);
                    (**l_1102) = (!(safe_mul_func_int16_t_s_s((0x1A25L < ((((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(p_30)), 0x70L)) == (((p_29 = p_29) | (((-8L) || (1UL < g_300)) > g_951)) == g_630)) || g_650[1]) & g_223[0])), g_1113)));
                }
                return &g_468;
            }
        }
        else
        { 
            union U1 **l_1116 = &l_1003;
            for (g_103.f3 = 13; (g_103.f3 <= 45); g_103.f3++)
            { 
                for (g_364.f2 = 0; (g_364.f2 <= 3); g_364.f2 += 1)
                { 
                    int i, j;
                    if (g_394.f6)
                        goto lbl_1008;
                    (*l_949) = 0xD95C94F6L;
                    if (g_800[g_364.f2][(g_364.f2 + 1)])
                        continue;
                    return &g_650[1];
                }
            }
            (*l_1116) = l_1003;
        }
        for (p_30 = 0; p_30 < 2; p_30 += 1)
        {
            g_650[p_30] = 0x55L;
        }
        (*l_949) = (~(((*l_1080) &= ((void*)0 == (*g_1104))) <= (((((((safe_mod_func_int32_t_s_s(((((*g_391) &= (safe_rshift_func_int8_t_s_s((g_394.f2 = ((*l_1124) |= (((g_1125 = p_31) != (l_1126 = &g_542)) != ((safe_add_func_int8_t_s_s(((*p_31) ^ (*l_949)), ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((p_30 >= 0x049AE6B5L), 4)), p_29)) > 0x80F68BDDL), (*l_949))) < 2L))) | p_30)))), g_299[1]))) , 1UL) , p_28), p_30)) , (void*)0) != l_1135) & 0L) <= g_952) != 0xEB8BL) | 1L)));
        return p_31;
    }
    else
    { 
        uint64_t **l_1146 = (void*)0;
        struct S0 **l_1157 = (void*)0;
        struct S0 ***l_1156 = &l_1157;
        int32_t l_1165 = 0x6E13DC8BL;
        int32_t l_1166 = 0L;
        int32_t l_1168 = 0x006A6642L;
        int32_t l_1169 = 0xF111FFA6L;
        uint8_t l_1171 = 0xBFL;
        int32_t *l_1174 = &l_1106[3];
        int16_t ***l_1212 = &g_507;
        union U1 l_1253 = {0UL};
        int32_t l_1273 = 0x63024BACL;
        uint32_t *l_1280[6];
        uint32_t **l_1279 = &l_1280[4];
        uint32_t ***l_1278 = &l_1279;
        const struct S0 *l_1282 = &g_394;
        const struct S0 **l_1283 = &l_1282;
        int i;
        for (i = 0; i < 6; i++)
            l_1280[i] = &g_630;
        if (((safe_mod_func_int16_t_s_s(0L, 1UL)) < (*l_1080)))
        { 
            int32_t l_1162 = 0x7B9875C0L;
            int32_t l_1163 = 0x5CA825E4L;
            int32_t l_1167 = 0xC820E9F0L;
            int32_t l_1170 = 0xF106B18BL;
            for (g_630 = 0; (g_630 == 17); ++g_630)
            { 
                struct S0 **l_1150 = &g_393;
                struct S0 ***l_1149 = &l_1150;
                int32_t l_1151 = (-2L);
                int64_t *l_1155 = &g_299[1];
                int64_t *l_1158 = (void*)0;
                int64_t *l_1159 = &g_683;
                int32_t l_1164[5][7][4] = {{{0x119F8147L,0x4EC9C954L,0xD491A332L,0xEFB87922L},{(-1L),0L,0x191C046DL,0xD491A332L},{0xC45B7D61L,7L,0x0D3CA3BFL,9L},{0x0D3CA3BFL,9L,0x013C226BL,1L},{0L,0x013C226BL,(-10L),0x191C046DL},{9L,0x6B41BD10L,(-1L),(-1L)},{(-1L),(-1L),0L,0xCC74C62CL}},{{1L,0x4EC9C954L,0xCBFE2C26L,9L},{(-1L),0x6BD760B4L,0x191C046DL,0xCBFE2C26L},{0x8F7DEA4FL,0x6BD760B4L,(-10L),9L},{0x6BD760B4L,0x4EC9C954L,(-9L),0xCC74C62CL},{0L,(-1L),0x6BD760B4L,(-1L)},{0xC45B7D61L,0x6B41BD10L,0xD6D851FFL,0x191C046DL},{(-1L),0x013C226BL,0L,1L}},{{9L,9L,0xD491A332L,9L},{0x013C226BL,7L,(-1L),0xD491A332L},{0x8F7DEA4FL,0L,0x6BD760B4L,0xEFB87922L},{0x0D3CA3BFL,0x4EC9C954L,(-1L),0x119F8147L},{0x0D3CA3BFL,0x013C226BL,0x6BD760B4L,0xD6D851FFL},{0x8F7DEA4FL,0x119F8147L,(-1L),0x191C046DL},{0x013C226BL,0L,0xD491A332L,0xCC74C62CL}},{{9L,0x8F7DEA4FL,0L,0xEFB87922L},{(-1L),7L,0xD6D851FFL,0L},{0xC45B7D61L,0x6BD760B4L,0x6BD760B4L,0xC45B7D61L},{0L,9L,(-9L),0x119F8147L},{0x6BD760B4L,0x71EA3A4EL,0x6B41BD10L,0xA4DAC252L},{0x6BD760B4L,0x191C046DL,0xCBFE2C26L,0xA4DAC252L},{0xBBC9432EL,0x71EA3A4EL,(-9L),0xD6D851FFL}},{{(-1L),0x0D3CA3BFL,(-1L),(-10L)},{2L,1L,0xA4DAC252L,(-1L)},{0x0D3CA3BFL,9L,0x6B41BD10L,7L},{0x119F8147L,0x6BD760B4L,0x2BBC33F9L,0L},{0xCC74C62CL,0x71EA3A4EL,0xCC74C62CL,0xCBFE2C26L},{(-10L),0xD6D851FFL,0xCBFE2C26L,0xD491A332L},{2L,0x2BBC33F9L,0L,0xD6D851FFL}}};
                int i, j, k;
                if (((*l_1080) = (((*l_1159) = (safe_mod_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((((0x250C5A66C1B875A5LL ^ 0UL) || (((l_1146 = g_1144[2][2][4]) == &g_1145[0]) != (++(*p_31)))) <= (l_1149 != (((l_1151 > ((+(safe_sub_func_int64_t_s_s(((*l_1155) &= g_542), 0x89C2C0908FFC4EA9LL))) ^ 0x8CBEL)) || 8UL) , l_1156))))), (*g_1125)))) != (*l_1080))))
                { 
                    int32_t *l_1160 = (void*)0;
                    int32_t *l_1161[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1161[i] = &g_137;
                    --l_1171;
                    (*g_1104) = &l_1106[3];
                    (*g_1104) = &p_28;
                }
                else
                { 
                    return p_31;
                }
                (*g_1104) = (l_1163 , &p_28);
                if ((*l_1080))
                    continue;
                return p_31;
            }
        }
        else
        { 
            uint16_t *l_1175 = &g_103.f3;
            uint32_t * const l_1179 = &g_630;
            uint32_t * const *l_1178 = &l_1179;
            union U1 l_1180 = {0x20CEL};
            int32_t l_1216 = 0L;
            uint8_t l_1254[6][6][1] = {{{0UL},{0UL},{0UL},{249UL},{0UL},{0UL}},{{0UL},{249UL},{0UL},{0UL},{0UL},{249UL}},{{0UL},{0UL},{0UL},{249UL},{0UL},{0UL}},{{0UL},{249UL},{0UL},{0UL},{0UL},{249UL}},{{0UL},{0UL},{0UL},{249UL},{0UL},{0UL}},{{0UL},{249UL},{0UL},{0UL},{0UL},{249UL}}};
            int i, j, k;
            (*g_1104) = l_1174;
            if (((l_1175 != (void*)0) || ((p_30 < (safe_add_func_int8_t_s_s((((*l_995) , ((void*)0 != l_1178)) >= (l_1180 , (*l_1174))), 3L))) ^ 0x614DAF86L)))
            { 
                uint8_t l_1185 = 0x1FL;
                uint64_t *l_1223 = &g_793;
                for (g_1113 = 0; (g_1113 >= 40); g_1113 = safe_add_func_uint32_t_u_u(g_1113, 2))
                { 
                    const int32_t l_1197 = 0x33555EC2L;
                    int16_t ****l_1209 = (void*)0;
                    int16_t ***l_1211[2][1][3] = {{{&g_507,&g_507,&g_507}},{{&g_507,&g_507,&g_507}}};
                    int16_t ****l_1210 = &l_1211[1][0][2];
                    int32_t *l_1213 = &g_137;
                    int i, j, k;
                    p_28 = (~(safe_unary_minus_func_uint32_t_u(((l_1185 == ((*l_1080) == (safe_mod_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((((*g_391) = (1UL <= (safe_div_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s((((safe_mul_func_uint16_t_u_u(((*l_1175) ^= ((safe_rshift_func_int8_t_s_u(((((void*)0 == &g_165) > 0UL) , (*l_1080)), l_1197)) , 8UL)), g_975)) == 1L) != l_1185))) < g_394.f3), 0xC3BEL)))) , 0x24L), (*g_1125))) && 255UL), l_1185)))) && 0xC6048F780EB93D5ELL))));
                    if ((*l_1174))
                        continue;
                    (*l_1213) ^= (!(((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s(l_1197, 4)) != (l_1180.f0 || (l_1180.f0 , (((**g_1104) = (((safe_sub_func_uint8_t_u_u((((*p_31) & (safe_div_func_uint16_t_u_u(((((*l_1210) = &g_507) == l_1212) < (*l_1080)), (-6L)))) != (**g_1104)), 0xBCL)) , l_1185) , 0x674510B5L)) ^ p_29)))) | (*l_1080)), l_1197)), g_300)) , (-8L)) , 0x2EFB3CB1L));
                    if (g_683)
                        goto lbl_1281;
                }
                (*l_1174) = ((safe_div_func_int8_t_s_s(((((--(*l_1175)) != ((1UL == ((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(0xC035L, 7)) < l_1185), p_29)) , ((*l_1223)--))) ^ (((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((((*p_31) = (((safe_sub_func_uint32_t_u_u(p_28, ((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u((*l_1174), (((safe_mul_func_uint8_t_u_u((((((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((~((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((*l_1080), p_28)), 14)), (*p_31))) , 0x60E94C30L)) && (**g_1104)), l_1251)), l_1216)) & (*l_1174)) != (*l_1080)) , l_1252) == (void*)0), 0x6FL)) >= p_28) == 0xE95FA2D7L))) , l_1185) , 0x6AL) | (*g_1125)), l_1180.f0)), p_29)) && 0xD52AL))) != l_1185) || 4294967291UL)) && (*g_1125)), p_29)), l_1185)) <= l_1185) == (-9L)))) , l_1253) , l_1254[2][2][0]), (*l_1174))) | (*l_1080));
            }
            else
            { 
                return &g_650[1];
            }
        }
lbl_1281:
        for (g_468 = 18; (g_468 == 14); g_468 = safe_sub_func_int16_t_s_s(g_468, 4))
        { 
            int8_t l_1271 = 0L;
            uint64_t **l_1272 = &g_1145[1];
            uint32_t **l_1277 = (void*)0;
            uint32_t *** const l_1276 = &l_1277;
            (*l_1080) &= (safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(p_28, g_103.f2)), 0UL)) < (*l_1174)), (p_28 , (((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(0UL, ((((safe_lshift_func_int16_t_s_u((0x80CFF2B4L != 0xAC251C78L), p_30)) == l_1271) , l_1272) == l_1272))) | l_1273), l_1271)), 0xD1L)) , (*g_1125)) && 0xDBL))));
            for (l_1168 = 0; (l_1168 == (-17)); l_1168--)
            { 
                (*l_1080) = (-1L);
            }
            l_1278 = l_1276;
        }
        (*l_1283) = l_1282;
        return p_31;
    }
}



static int32_t  func_38(uint8_t * p_39, uint32_t * p_40, uint64_t  p_41, uint8_t * p_42)
{ 
    uint32_t l_736 = 4294967295UL;
    int16_t l_739[5][4][6] = {{{0x652EL,0x43E5L,0x44F1L,(-8L),0x17A5L,0x1D29L},{(-4L),0L,0x652EL,0L,(-4L),0xFA51L},{0x43E5L,0x1E78L,(-1L),0xCCBAL,0x2B11L,0x3FECL},{(-1L),0x710CL,1L,0x1E78L,0xFA51L,0x3FECL}},{{8L,(-10L),(-1L),0L,0x0D31L,0xFA51L},{0xFA51L,0x9ADDL,0x652EL,0x429FL,(-1L),0x1D29L},{1L,8L,0x44F1L,0x2B11L,0x17AAL,0x9ADDL},{0xCBD5L,0x7EE3L,(-4L),(-6L),(-6L),0x2B11L}},{{0x3D1EL,1L,(-8L),0L,0xCBD5L,6L},{(-8L),(-1L),0x32E0L,0xCBD5L,0xA0ACL,0xA0ACL},{0x9E99L,0x2B11L,0x2B11L,0x9E99L,0L,(-6L)},{(-1L),(-1L),8L,0x1D29L,1L,0L}},{{0x0D31L,8L,8L,0x7EE3L,1L,5L},{0xD23CL,(-1L),(-8L),(-1L),0L,0x0D32L},{0x32E0L,0x2B11L,0x0D31L,1L,0xA0ACL,0x9E99L},{1L,(-1L),0x17A5L,8L,0xCBD5L,0x429FL}},{{1L,1L,0x1E41L,0xA0ACL,(-6L),0xAAF1L},{(-10L),0x7EE3L,0x9FC9L,0x1E41L,0x17AAL,9L},{0x2B11L,8L,(-10L),(-8L),0x9B91L,(-8L)},{(-1L),0xFA51L,(-1L),0xF344L,0L,0x429FL}}};
    uint32_t l_740 = 7UL;
    int32_t l_742 = 0L;
    int32_t l_743 = 0x3C929E09L;
    int32_t l_744 = 1L;
    uint32_t l_745[5];
    int32_t l_797 = 1L;
    union U1 *l_818 = (void*)0;
    union U1 **l_817 = &l_818;
    uint32_t ** const *l_824 = &g_106[1][3][1];
    int64_t l_825 = (-1L);
    int32_t **l_848[3];
    int32_t ***l_847 = &l_848[0];
    uint16_t ***l_863 = &g_642;
    uint16_t l_879[5][7] = {{65535UL,65535UL,5UL,5UL,65535UL,65535UL,5UL},{0UL,4UL,0UL,4UL,0UL,4UL,0UL},{65535UL,5UL,5UL,65535UL,65535UL,5UL,5UL},{0UL,4UL,0UL,4UL,0UL,4UL,0UL},{65535UL,65535UL,5UL,5UL,65535UL,65535UL,5UL}};
    uint8_t l_905 = 4UL;
    int16_t l_917[1];
    int32_t l_921[7][7] = {{0x4567380BL,0x2DE4BD19L,0xC969EE36L,0x4567380BL,0x7E58850FL,1L,1L},{0x30B488D1L,0x2DE4BD19L,0x5ED3E5EBL,0x30B488D1L,0x7E58850FL,0x9B2351B7L,0x7E58850FL},{0x30B488D1L,0xC969EE36L,0xC969EE36L,0x30B488D1L,1L,1L,0x7E58850FL},{0x4567380BL,0x2DE4BD19L,0xC969EE36L,0x4567380BL,0x7E58850FL,1L,1L},{0x30B488D1L,0x2DE4BD19L,0x5ED3E5EBL,0x30B488D1L,0x7E58850FL,0x9B2351B7L,0x7E58850FL},{0x30B488D1L,0xC969EE36L,0xC969EE36L,0x30B488D1L,1L,1L,0x7E58850FL},{0x4567380BL,0x2DE4BD19L,0xC969EE36L,0x4567380BL,0x7E58850FL,1L,1L}};
    int64_t l_936 = 0x04A960CE16381C14LL;
    struct S0 l_944 = {0UL,0xBB695628DE30D8F6LL,-1L,0xC91BL,0x50L,255UL,0x3C43L};
    int64_t *l_948 = &g_299[2];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_745[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_848[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_917[i] = 1L;
    if (((safe_sub_func_int32_t_s_s(((((safe_mod_func_int64_t_s_s(g_223[0], (safe_lshift_func_uint16_t_u_s((g_37 < (((((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((!(l_736 && ((safe_mul_func_uint16_t_u_u(l_736, (((-1L) && (&g_434[1] == &g_434[0])) >= 1UL))) <= p_41))), g_348)), l_739[4][0][3])) | l_740) || p_41) ^ g_468) , l_736)), p_41)))) && p_41) ^ p_41) > l_739[1][2][5]), 0xDD8C4067L)) < l_739[4][0][3]))
    { 
        int32_t *l_741[4];
        int i;
        for (i = 0; i < 4; i++)
            l_741[i] = &g_265;
        ++l_745[1];
    }
    else
    { 
        int64_t l_754 = 0xDDC3DC0952D8E61ALL;
        struct S0 l_764 = {0x0CD9L,1L,0x93L,0x0A2AL,0x87L,0x8CL,0x3597L};
        union U1 * const l_774 = &g_364;
        int64_t l_790 = (-1L);
        int32_t l_798 = (-1L);
        int32_t l_799 = 0L;
        uint16_t **l_822 = &g_165;
        uint8_t l_844 = 5UL;
        const struct S0 **l_845 = (void*)0;
        int8_t l_849 = 3L;
        union U1 *l_850 = (void*)0;
        int16_t l_860 = 1L;
        uint16_t ***l_862 = &g_642;
        uint16_t ****l_861 = &l_862;
        int16_t *l_880 = &g_136;
        int16_t *l_882 = &l_739[0][0][0];
        uint64_t *l_883 = &g_223[1];
        int16_t *l_884 = &g_400;
        int64_t *l_902 = &g_683;
        int64_t *l_903[4][4][7] = {{{&l_754,&l_754,&l_790,&l_754,&l_754,&l_790,(void*)0},{&g_299[1],&l_790,&g_299[1],&l_825,(void*)0,&g_299[1],(void*)0},{&g_299[1],&l_754,&l_754,&g_299[1],&l_754,&g_299[1],(void*)0},{&g_299[1],&l_825,&l_754,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_754,(void*)0,&l_754,&g_299[1],&l_790,&l_825,(void*)0},{&l_754,&l_825,(void*)0,&g_299[1],&l_790,&g_299[1],(void*)0},{&l_790,&l_790,&l_754,&g_299[1],&l_825,&l_825,(void*)0},{&l_825,&l_790,(void*)0,&l_790,(void*)0,(void*)0,&g_299[1]}},{{&l_754,&l_790,&l_790,&l_754,&l_825,&g_299[1],&g_299[1]},{(void*)0,&g_299[1],&l_790,&l_790,&l_790,&g_299[1],(void*)0},{&g_299[1],&g_299[1],&l_825,&l_754,&l_790,&l_790,&l_754},{&g_299[1],(void*)0,(void*)0,&l_790,(void*)0,&l_790,&l_825}},{{(void*)0,&l_825,&l_825,&g_299[1],&l_754,&l_790,&l_790},{(void*)0,&g_299[1],&l_790,&g_299[1],(void*)0,&g_299[1],&l_825},{&l_754,&l_754,&l_754,&l_790,&l_825,&g_299[1],&l_825},{&g_299[1],(void*)0,(void*)0,&l_790,&l_754,&l_825,(void*)0}}};
        uint32_t *l_904 = &g_630;
        int i, j, k;
        if ((safe_lshift_func_int8_t_s_u((p_41 <= (((l_745[1] , (safe_sub_func_int32_t_s_s(((safe_div_func_uint8_t_u_u(g_136, (-9L))) > ((l_744 ^= l_754) , ((((((((safe_mul_func_uint8_t_u_u(((&l_739[4][0][3] == (*g_507)) && (*p_39)), 0xAEL)) | l_754) == l_745[4]) , g_757) | (*p_39)) >= p_41) < p_41) ^ 0x0D6A1A69L))), l_754))) > l_754) >= l_742)), 2)))
        { 
            const int32_t *l_762 = (void*)0;
            for (g_683 = (-1); (g_683 == (-29)); g_683 = safe_sub_func_uint64_t_u_u(g_683, 2))
            { 
                int32_t *l_760 = &g_2;
                int32_t **l_761 = &l_760;
                const int32_t **l_763 = &l_762;
                int64_t *l_765 = &g_299[2];
                union U1 **l_775 = (void*)0;
                union U1 *l_777[1][4];
                union U1 **l_776[6][3][6] = {{{&l_777[0][3],&l_777[0][0],&l_777[0][3],&l_777[0][1],&l_777[0][3],&l_777[0][3]},{&l_777[0][3],&l_777[0][0],&l_777[0][2],&l_777[0][2],&l_777[0][0],&l_777[0][3]},{&l_777[0][0],&l_777[0][1],&l_777[0][3],(void*)0,&l_777[0][1],&l_777[0][3]}},{{&l_777[0][2],&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][3]},{&l_777[0][2],(void*)0,&l_777[0][3],(void*)0,&l_777[0][2],&l_777[0][1]},{&l_777[0][0],&l_777[0][1],&l_777[0][3],&l_777[0][2],&l_777[0][3],&l_777[0][3]}},{{&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][1],&l_777[0][3],&l_777[0][3]},{&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][1]},{&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][1],(void*)0,&l_777[0][3]}},{{&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][3],(void*)0,&l_777[0][3]},{&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][3]},{&l_777[0][1],&l_777[0][3],&l_777[0][2],&l_777[0][3],&l_777[0][3],&l_777[0][3]}},{{&l_777[0][1],&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][3],&l_777[0][3]},{&l_777[0][1],&l_777[0][1],&l_777[0][3],&l_777[0][3],&l_777[0][2],&l_777[0][3]},{&l_777[0][3],(void*)0,&l_777[0][1],&l_777[0][3],&l_777[0][3],&l_777[0][3]}},{{&l_777[0][3],&l_777[0][3],&l_777[0][1],&l_777[0][1],&l_777[0][1],&l_777[0][3]},{&l_777[0][3],&l_777[0][1],&l_777[0][3],&l_777[0][3],&l_777[0][0],&l_777[0][3]},{&l_777[0][3],&l_777[0][0],&l_777[0][3],&l_777[0][1],&l_777[0][3],&l_777[0][3]}}};
                union U1 **l_778 = (void*)0;
                union U1 **l_779[3][2][5] = {{{(void*)0,&l_777[0][3],&l_777[0][0],&l_777[0][3],(void*)0},{(void*)0,&l_777[0][3],&l_777[0][0],&l_777[0][3],(void*)0}},{{(void*)0,&l_777[0][3],&l_777[0][0],&l_777[0][3],(void*)0},{(void*)0,&l_777[0][3],&l_777[0][0],&l_777[0][3],(void*)0}},{{(void*)0,&l_777[0][3],&l_777[0][0],&l_777[0][3],(void*)0},{(void*)0,&l_777[0][3],&l_777[0][0],&l_777[0][3],(void*)0}}};
                union U1 **l_780 = (void*)0;
                union U1 **l_781 = &l_777[0][3];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_777[i][j] = &g_364;
                }
                (*l_761) = l_760;
                g_551 = p_40;
                l_743 ^= ((l_760 != ((*l_763) = l_762)) != (l_764 , ((((*l_765) = p_41) ^ ((safe_mul_func_int8_t_s_s(0x44L, ((((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((g_564 , (l_742 , p_41)) , (void*)0) != &g_542), g_136)), g_565[0])) && 0UL) && l_742) <= g_542))) <= 1UL)) > 0xC2BDE4BFL)));
                (*l_781) = l_774;
            }
        }
        else
        { 
            int32_t *l_788 = &l_743;
            int32_t *l_789[6];
            union U1 l_813 = {0x5818L};
            uint32_t ***l_814[4] = {&g_106[3][3][2],&g_106[3][3][2],&g_106[3][3][2],&g_106[3][3][2]};
            uint32_t l_820 = 0UL;
            int i;
            for (i = 0; i < 6; i++)
                l_789[i] = &l_742;
lbl_832:
            g_265 &= (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((-1L) <= (*p_42)) < (safe_add_func_int32_t_s_s(((*l_788) = (-1L)), ((l_744 = p_41) || l_790)))), ((safe_lshift_func_uint16_t_u_u((p_41 & (p_41 > g_564)), 6)) > g_793))), g_394.f0));
            for (g_300 = 0; (g_300 <= 5); g_300 += 1)
            { 
                int32_t l_794 = 0x75CA00D1L;
                int32_t l_796[3];
                union U1 **l_819[1];
                uint32_t ***l_823 = (void*)0;
                int32_t l_846 = 0xDE6C006EL;
                int i;
                for (i = 0; i < 3; i++)
                    l_796[i] = 0xA2FEBC39L;
                for (i = 0; i < 1; i++)
                    l_819[i] = &l_818;
                l_789[g_300] = l_789[g_300];
                if (p_41)
                    break;
                for (p_41 = 0; (p_41 <= 5); p_41 += 1)
                { 
                    int32_t l_795 = 0x24AE4F84L;
                    int i;
                    --g_800[1][5];
                }
                if ((((((*l_788) = p_41) == (safe_add_func_uint64_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(((((((safe_sub_func_int16_t_s_s((((**g_433) = (l_813 , (void*)0)) != l_814[0]), (safe_sub_func_int8_t_s_s(g_137, (l_817 != l_819[0]))))) <= p_41) == (*p_42)) || (-1L)) , g_364) , (*p_39)), g_630)) < p_41), p_41)), p_41)), p_41))) <= l_820) != p_41))
                { 
                    int32_t l_821 = 0x23B3553FL;
                    int i;
                    (*l_788) = (l_821 |= (&g_551 != (p_41 , &g_551)));
                    (*l_788) = 0x1FBC1BC0L;
                    l_822 = &g_165;
                }
                else
                { 
                    uint16_t l_826 = 1UL;
                    (*l_788) = ((l_823 != l_824) && l_825);
                    --l_826;
                }
                for (l_794 = 3; (l_794 >= 0); l_794 -= 1)
                { 
                    uint32_t l_829[1];
                    int32_t l_833 = 1L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_829[i] = 4294967286UL;
                    l_829[0]++;
                    if (l_764.f1)
                        goto lbl_832;
                    (*l_788) ^= ((((p_41 && (p_41 | (l_833 |= 0L))) , ((((((p_41 != (safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((l_799 = p_41) , (safe_lshift_func_uint16_t_u_s(p_41, (l_799 = p_41)))), 8)), l_740)) == 0x106163C3L) || p_41) & l_844), 0xF27137E8L)), 12))) , l_845) == (void*)0) ^ g_103.f6) == p_41) && l_846)) || g_444) & 18446744073709551615UL);
                }
            }
lbl_851:
            (*l_788) ^= (l_847 == ((p_41 & l_849) , &g_231));
            l_850 = (void*)0;
            for (g_683 = 2; (g_683 >= 0); g_683 -= 1)
            { 
                for (l_825 = 1; (l_825 >= 0); l_825 -= 1)
                { 
                    if (g_394.f0)
                        goto lbl_851;
                }
            }
        }
        if (g_37)
            goto lbl_907;
        l_798 |= (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s(((*l_884) ^= (((((safe_rshift_func_int16_t_s_u(l_860, 14)) & (((*l_861) = &g_642) == l_863)) ^ ((0L < (safe_sub_func_int8_t_s_s((((*l_883) = (((*l_882) = (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s((g_265 = ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((*l_880) = (safe_div_func_int16_t_s_s(0x712BL, ((safe_mod_func_uint32_t_u_u(0x689DFD0EL, l_879[4][5])) , l_754)))), l_849)), 0x4FL)), 6)) || g_881)))), 4))) || p_41)) , p_41), (-5L)))) || g_566)) && 0xEB76EB5031D23A3ELL) , 0x2BFFL)), 0x86AEL)) , (void*)0) == (void*)0) , g_630), 0xDCL)), 0));
        l_799 = ((((safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((*l_904) = ((safe_lshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((!(safe_lshift_func_uint8_t_u_s((++(*p_39)), p_41))) != (p_41 , ((void*)0 != &l_860))), (safe_mod_func_int64_t_s_s(((l_798 = ((((*l_902) |= (g_564 = l_754)) && (l_764 , 9L)) == g_120)) == 0x1C4D2918A449DAD4LL), p_41)))) ^ p_41), 0)) & 3UL)) , l_905), p_41)), 0xD661L)), 3UL)) < 0xB8822EB0L) , (void*)0) == &p_41);
    }
lbl_907:
    for (g_468 = 0; (g_468 <= 4); g_468 += 1)
    { 
        uint64_t l_906 = 3UL;
        g_78 &= p_41;
        l_906 = 0L;
    }
    if ((safe_mul_func_int16_t_s_s((((p_41 || p_41) | p_41) <= (3UL & (!(safe_mul_func_int16_t_s_s(((g_920 = ((safe_mod_func_uint8_t_u_u((l_917[0] != ((safe_sub_func_uint32_t_u_u(((((g_265 = (g_683 , (g_78 = (g_137 = p_41)))) && (*g_107)) & p_41) != g_757), 0xBAFBE0CAL)) <= p_41)), (*p_39))) || 0L)) | g_120), l_921[3][4]))))), p_41)))
    { 
        return g_565[1];
    }
    else
    { 
        uint8_t l_922 = 255UL;
        uint32_t ***l_927 = &g_106[3][0][1];
        int8_t *l_934 = &g_394.f4;
        int16_t l_935 = 0x9076L;
        int32_t l_937 = (-9L);
        int32_t l_938 = 0x71F84740L;
        l_938 |= (((l_922 != ((*p_39) = 249UL)) & (((((((safe_add_func_uint64_t_u_u(0UL, (safe_lshift_func_uint16_t_u_s(((((l_927 == l_927) & (g_265 = l_922)) , (safe_lshift_func_uint8_t_u_u(((g_265 = (l_937 |= ((safe_mod_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u((((*l_934) = p_41) || l_935), 18446744073709551615UL)) , g_103.f2) < p_41), l_936)) , 1L))) , 0UL), 2))) < p_41), 1)))) | g_299[1]) , (void*)0) == &g_551) | (*p_42)) < 0xA10BL) != 1L)) || 65526UL);
    }
    g_137 ^= (g_78 &= (65535UL < 0x74F5L));
    g_137 = (safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint8_t_u_u(g_566, 3)) , ((~(l_944 , ((safe_sub_func_int8_t_s_s(((void*)0 == g_947), (((*l_948) = p_41) || ((((p_41 && ((p_41 < g_394.f0) == g_223[0])) , l_944) , (void*)0) == &p_41)))) <= p_41))) , g_103.f3)) , p_41), g_97[5]));
    return p_41;
}



static uint32_t  func_50(uint64_t  p_51, uint32_t  p_52, uint32_t * p_53)
{ 
    uint32_t **l_117 = &g_107;
    uint16_t *l_123 = &g_67;
    int32_t *l_124 = (void*)0;
    int32_t *l_125 = &g_78;
    uint32_t *l_171 = &g_37;
    uint32_t *l_178[4];
    uint16_t l_195 = 65526UL;
    int32_t l_196 = (-1L);
    int32_t l_221 = 0x2F31F1FEL;
    uint8_t *l_229 = &g_103.f5;
    int8_t l_245 = 0x48L;
    int32_t l_247 = 0xBCF4E763L;
    uint32_t l_339 = 18446744073709551615UL;
    int32_t l_399 = 0x7327F36DL;
    int32_t l_402[7][7][4] = {{{0x8DF2F150L,0x783CF02EL,(-4L),0x336261CEL},{0x315EC5F7L,0L,0x3A752138L,0L},{0x783CF02EL,0x9D87B19FL,0x306CAAE0L,0x832173C7L},{8L,3L,0x9D87B19FL,8L},{3L,0L,(-5L),0x315EC5F7L},{3L,0x8DF2F150L,0x9D87B19FL,0xB1E97078L},{8L,0x315EC5F7L,0x306CAAE0L,0x306CAAE0L}},{{0x783CF02EL,0x783CF02EL,0x3A752138L,0x315EC5F7L},{0x315EC5F7L,(-1L),(-5L),0x9D87B19FL},{1L,0x336261CEL,0x3A752138L,(-5L)},{0x9D87B19FL,0x336261CEL,0x315EC5F7L,0x9D87B19FL},{0x336261CEL,(-1L),1L,0x306CAAE0L},{0x08C9777DL,1L,0x08C9777DL,0x3A752138L},{0x9D87B19FL,0x306CAAE0L,0x832173C7L,(-4L)}},{{1L,1L,(-5L),0x306CAAE0L},{0xC6FB8DEDL,0x9D87B19FL,(-5L),(-1L)},{1L,0x336261CEL,0x832173C7L,0x8DF2F150L},{0x9D87B19FL,0x08C9777DL,0x08C9777DL,0x9D87B19FL},{0x08C9777DL,0x9D87B19FL,1L,0xC6FB8DEDL},{0x336261CEL,1L,0x315EC5F7L,(-4L)},{0x9D87B19FL,0xC6FB8DEDL,0x3A752138L,(-4L)}},{{1L,1L,(-5L),0xC6FB8DEDL},{0x306CAAE0L,0x9D87B19FL,0x783CF02EL,0x9D87B19FL},{1L,0x08C9777DL,0x3A752138L,0x8DF2F150L},{(-1L),0x336261CEL,0x08C9777DL,(-1L)},{0x336261CEL,0x9D87B19FL,(-1L),0x306CAAE0L},{0x336261CEL,1L,0x08C9777DL,(-4L)},{(-1L),0x306CAAE0L,0x3A752138L,0x3A752138L}},{{1L,1L,0x783CF02EL,0x306CAAE0L},{0x306CAAE0L,(-1L),(-5L),0x9D87B19FL},{1L,0x336261CEL,0x3A752138L,(-5L)},{0x9D87B19FL,0x336261CEL,0x315EC5F7L,0x9D87B19FL},{0x336261CEL,(-1L),1L,0x306CAAE0L},{0x08C9777DL,1L,0x08C9777DL,0x3A752138L},{0x9D87B19FL,0x306CAAE0L,0x832173C7L,(-4L)}},{{1L,1L,(-5L),0x306CAAE0L},{0xC6FB8DEDL,0x9D87B19FL,(-5L),(-1L)},{1L,0x336261CEL,0x832173C7L,0x8DF2F150L},{0x9D87B19FL,0x08C9777DL,0x08C9777DL,0x9D87B19FL},{0x08C9777DL,0x9D87B19FL,1L,0xC6FB8DEDL},{0x336261CEL,1L,0x315EC5F7L,(-4L)},{0x9D87B19FL,0xC6FB8DEDL,0x3A752138L,(-4L)}},{{1L,1L,(-5L),0xC6FB8DEDL},{0x306CAAE0L,0x9D87B19FL,0x783CF02EL,0x9D87B19FL},{1L,0x08C9777DL,0x3A752138L,0x8DF2F150L},{(-1L),0x336261CEL,0x08C9777DL,(-1L)},{0x336261CEL,0x9D87B19FL,(-1L),0x306CAAE0L},{0x336261CEL,1L,0x08C9777DL,(-4L)},{(-1L),0x306CAAE0L,0x3A752138L,0x3A752138L}}};
    int16_t *l_417[6][4] = {{&g_400,&g_400,&g_400,&g_400},{&g_400,&g_400,&g_400,&g_400},{&g_400,&g_400,&g_400,&g_400},{&g_400,&g_400,&g_400,&g_400},{&g_400,&g_400,&g_400,&g_400},{&g_400,&g_400,&g_400,&g_400}};
    int16_t **l_416 = &l_417[2][2];
    uint32_t *****l_436 = &g_434[0];
    int32_t l_446 = (-1L);
    const int16_t *l_494[6][7][6] = {{{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6}},{{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0}},{{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6}},{{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0}},{{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6}},{{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0},{(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0,&g_394.f6},{(void*)0,(void*)0,&g_394.f6,&g_394.f6,(void*)0,(void*)0}}};
    int8_t l_495 = 0xBAL;
    uint64_t l_599 = 18446744073709551606UL;
    int32_t l_621 = 0x5ABD8DABL;
    uint64_t l_669 = 18446744073709551609UL;
    struct S0 **l_689 = &g_393;
    uint8_t **l_706 = &l_229;
    uint8_t ***l_705 = &l_706;
    int32_t *l_720 = &l_399;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_178[i] = &g_37;
    if (((*l_125) = ((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((l_117 == l_117) , &g_67) != ((((*l_123) = ((((((safe_mul_func_uint8_t_u_u((g_120 && ((*p_53) <= ((safe_mul_func_int16_t_s_s((-1L), 0x3162L)) , (*p_53)))), (-1L))) | (-9L)) , &p_52) == (*l_117)) ^ 0xF5L) <= p_51)) ^ g_103.f2) , (void*)0)), 7)), (-5L))) || 65535UL)))
    { 
        uint32_t ***l_133 = &g_106[3][0][1];
        uint32_t **l_134 = &g_107;
        int16_t *l_135 = &g_136;
        int8_t *l_138 = &g_120;
        uint64_t l_139[4][4];
        uint8_t **l_204 = (void*)0;
        int32_t l_216 = 5L;
        int16_t l_230 = 1L;
        int32_t l_246[3];
        int8_t l_254 = 1L;
        int32_t **l_266 = &l_125;
        uint64_t l_272 = 18446744073709551612UL;
        union U1 l_316 = {0xE623L};
        uint32_t ****l_344 = (void*)0;
        uint32_t *****l_343[5] = {&l_344,&l_344,&l_344,&l_344,&l_344};
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                l_139[i][j] = 0x54FBA12C33A15E26LL;
        }
        for (i = 0; i < 3; i++)
            l_246[i] = 4L;
    }
    else
    { 
        int16_t l_359[5];
        uint32_t l_361 = 18446744073709551612UL;
        uint32_t l_384[6][5][3] = {{{0x91710C86L,0x63DC83A2L,0x48F689BCL},{0x018F86AAL,0xBBC13778L,0UL},{0xA41E7763L,18446744073709551615UL,0x40504685L},{0x80E17275L,0x18C4556BL,0UL},{0UL,0x94A47CABL,3UL}},{{0x94A47CABL,0UL,0x63DC83A2L},{0x94A47CABL,0x018F86AAL,0x80E17275L},{0UL,0UL,0x91710C86L},{0x80E17275L,0xEFFA1776L,0xB7C97616L},{0xA41E7763L,18446744073709551612UL,18446744073709551612UL}},{{0x018F86AAL,18446744073709551612UL,18446744073709551615UL},{0x91710C86L,0xA41E7763L,18446744073709551612UL},{18446744073709551612UL,18446744073709551615UL,0xB7C97616L},{0xB7C97616L,4UL,0x91710C86L},{5UL,0xB7C97616L,0x80E17275L}},{{0x48F689BCL,0x40504685L,0x63DC83A2L},{0xEFFA1776L,0x40504685L,3UL},{0UL,0xB7C97616L,0UL},{1UL,4UL,0x40504685L},{3UL,18446744073709551615UL,0UL}},{{0x18C4556BL,0xA41E7763L,0x48F689BCL},{0x40504685L,18446744073709551612UL,0xCA4792FFL},{0x18C4556BL,18446744073709551612UL,5UL},{3UL,0xEFFA1776L,18446744073709551615UL},{1UL,0UL,0x94A47CABL}},{{0UL,0x018F86AAL,4UL},{0xEFFA1776L,0UL,4UL},{0x48F689BCL,0x94A47CABL,0x94A47CABL},{5UL,0x18C4556BL,18446744073709551615UL},{0xB7C97616L,18446744073709551615UL,5UL}}};
        int32_t * const l_385 = &g_219;
        int32_t l_398 = 7L;
        int32_t l_401[7] = {0L,0x0339AB71L,0L,0L,0x0339AB71L,0L,0L};
        uint16_t **l_488[3][4][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{&l_123,&g_165},{(void*)0,&g_165}},{{&l_123,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{&l_123,&g_165}},{{(void*)0,&g_165},{&l_123,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        uint64_t l_489 = 0x021AB8439B9D1C5ELL;
        int64_t *l_491 = &g_299[1];
        int16_t **l_505 = &l_417[2][0];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_359[i] = (-1L);
        if (((*l_125) |= (safe_lshift_func_int8_t_s_s(p_52, 1))))
        { 
            int32_t *l_347 = &l_221;
            g_348++;
        }
        else
        { 
            uint64_t l_356 = 0xA24DA4D433172247LL;
            int32_t l_360[6][7][2] = {{{0xCCB905C3L,0x1FC3AE16L},{0xCCB905C3L,9L},{0xA54FB761L,0xA54FB761L},{9L,9L},{(-6L),9L},{0x1FC3AE16L,0x0FCADF60L},{0x0FCADF60L,0x1FC3AE16L}},{{9L,(-6L)},{9L,0x1FC3AE16L},{0x0FCADF60L,0x0FCADF60L},{0x1FC3AE16L,9L},{(-6L),9L},{0x1FC3AE16L,0x0FCADF60L},{0x0FCADF60L,0x1FC3AE16L}},{{9L,(-6L)},{9L,0x1FC3AE16L},{0x0FCADF60L,0x0FCADF60L},{0x1FC3AE16L,9L},{(-6L),9L},{0x1FC3AE16L,0x0FCADF60L},{0x0FCADF60L,0x1FC3AE16L}},{{9L,(-6L)},{9L,0x1FC3AE16L},{0x0FCADF60L,0x0FCADF60L},{0x1FC3AE16L,9L},{(-6L),9L},{0x1FC3AE16L,0x0FCADF60L},{0x0FCADF60L,0x1FC3AE16L}},{{9L,(-6L)},{9L,0x1FC3AE16L},{0x0FCADF60L,0x0FCADF60L},{0x1FC3AE16L,9L},{(-6L),9L},{0x1FC3AE16L,0x0FCADF60L},{0x0FCADF60L,0x1FC3AE16L}},{{9L,(-6L)},{9L,0x1FC3AE16L},{0x0FCADF60L,0x0FCADF60L},{0x1FC3AE16L,9L},{(-6L),9L},{0x1FC3AE16L,0x0FCADF60L},{0x0FCADF60L,0x1FC3AE16L}}};
            int64_t l_379 = 0L;
            uint8_t **l_390 = &l_229;
            int32_t *l_395 = &g_78;
            int32_t *l_396 = &g_78;
            int32_t *l_397[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_397[i] = &g_137;
            for (g_103.f2 = 25; (g_103.f2 == (-21)); g_103.f2 = safe_sub_func_int32_t_s_s(g_103.f2, 9))
            { 
                int32_t *l_353 = &g_265;
                int32_t *l_354 = (void*)0;
                int32_t *l_355[7][6][1] = {{{&g_265},{(void*)0},{&l_221},{&l_221},{&g_137},{&g_137}},{{&l_221},{&l_221},{(void*)0},{&g_265},{&g_2},{&g_265}},{{(void*)0},{&l_221},{&l_221},{&g_137},{&g_137},{&l_221}},{{&l_221},{(void*)0},{&g_265},{&g_2},{&g_265},{(void*)0}},{{&l_221},{&l_221},{&g_137},{&g_137},{&l_221},{&l_221}},{{(void*)0},{&g_265},{&g_2},{&g_265},{(void*)0},{&l_221}},{{&l_221},{&g_137},{&g_137},{&l_221},{&l_221},{(void*)0}}};
                int8_t *l_392 = &g_220[3];
                int i, j, k;
                --l_356;
                l_361--;
                g_137 ^= ((g_364 , (safe_mul_func_int16_t_s_s((0xD0B9L | (safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*l_123) = p_51), (safe_lshift_func_int16_t_s_s((((p_51 & ((((safe_div_func_uint16_t_u_u(3UL, (safe_add_func_int64_t_s_s(g_2, ((*l_125) || 0xA68F6F8AA92CA923LL))))) != 0x5E838CCD62B2E020LL) , l_379) <= (*l_125))) >= g_103.f3) ^ (*l_353)), g_103.f0)))), p_51)) & l_360[2][2][1]), 7))), 0x196AL))) > 0UL);
                (*l_353) = (((*l_392) = (((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((*g_107) & (l_384[3][0][0] , 1UL)) >= (l_385 != (g_391 = ((safe_mod_func_uint32_t_u_u(((l_360[2][2][1] = 0xC9B5BF3AL) <= ((*l_125) ^= ((*l_353) >= (((void*)0 == l_390) > p_51)))), 0x24CAD0B5L)) , &g_219)))), g_103.f2)), 0L)) != l_379) ^ 1UL)) < p_52);
                return (*g_107);
            }
            g_393 = &g_103;
            --g_403;
            return (*l_396);
        }
lbl_572:
        for (g_394.f2 = 0; (g_394.f2 != 7); g_394.f2 = safe_add_func_int32_t_s_s(g_394.f2, 7))
        { 
            int8_t l_418 = 1L;
            int8_t l_423 = (-3L);
            int32_t l_424 = 0x3AF1E85BL;
            int32_t l_461 = 0x70C1F8C9L;
            int32_t l_463[3][5];
            uint32_t ***l_483[3];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                    l_463[i][j] = (-4L);
            }
            for (i = 0; i < 3; i++)
                l_483[i] = (void*)0;
            l_424 |= ((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((*l_125), (safe_add_func_int16_t_s_s((((((((l_416 == (((l_418 , g_220[2]) < (--(*l_229))) , (void*)0)) && (safe_sub_func_int32_t_s_s((l_398 > (l_423 , 0x2A08DDEFBBDF4469LL)), l_423))) , p_51) > 0x788666FDL) || 18446744073709551610UL) > l_398) <= l_423), l_418)))) , g_219), l_418)) == 9L), 3)) || l_361);
            for (g_103.f2 = 0; (g_103.f2 > 29); ++g_103.f2)
            { 
                uint8_t *l_438 = &g_394.f5;
                int32_t l_441 = 2L;
                uint16_t l_445 = 0xEAC2L;
                int32_t l_462 = 0x04F4B403L;
                int32_t l_464 = 1L;
                int32_t l_465 = 0x9C8C1FC9L;
                int32_t l_466 = 0xE2F5E56BL;
                int32_t l_467[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                if (g_394.f0)
                    break;
                g_137 = (((safe_mul_func_int8_t_s_s(((p_51 == ((((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_438) = ((*l_229) = (g_433 != (g_437[0] = l_436)))), 6)), ((*p_53) = (*p_53)))) | ((safe_div_func_uint32_t_u_u((4UL == l_441), (safe_sub_func_uint8_t_u_u(g_103.f6, (*l_125))))) || 7UL)) & p_52) && p_51) || g_444) >= l_445)) , l_445), g_394.f3)) || 0xBFL) , l_446);
                if (g_103.f1)
                    break;
                if ((*l_125))
                { 
                    uint32_t l_457 = 0UL;
                    uint32_t l_458[6] = {0x92CE790EL,0x92CE790EL,0x92CE790EL,0x92CE790EL,0x92CE790EL,0x92CE790EL};
                    int i;
                    (*l_125) |= (safe_sub_func_int8_t_s_s((p_52 || ((((safe_add_func_uint32_t_u_u((*g_107), l_424)) || (safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((l_424 = p_51) , (-5L)) | p_52), (((safe_sub_func_int32_t_s_s(((void*)0 != &l_245), l_457)) != l_457) > l_457))), g_394.f3))) != l_458[2]) & 0L)), (-3L)));
                    return l_458[2];
                }
                else
                { 
                    int32_t *l_459 = &l_221;
                    int32_t *l_460[4] = {&l_401[5],&l_401[5],&l_401[5],&l_401[5]};
                    int i;
                    (*l_125) = 1L;
                    --g_468;
                    (*l_125) = (p_51 , g_394.f2);
                }
                for (g_78 = 0; (g_78 != 27); ++g_78)
                { 
                    if (l_359[4])
                        break;
                }
            }
            l_461 |= (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((safe_mod_func_int16_t_s_s((((*g_393) , (**l_436)) == ((((((g_103.f1 , ((*l_125) &= 0x432158CEL)) <= (l_384[3][0][0] <= (safe_lshift_func_uint16_t_u_s(p_52, (safe_mod_func_int64_t_s_s(l_463[2][0], 0x153B35B1E5A7C2F7LL)))))) != 0L) , (void*)0) == (void*)0) , l_483[0])), p_51)) || p_52) || (*p_53)), (*p_53))), p_52));
        }
        if ((l_399 ^= ((0x66L ^ ((safe_mul_func_uint16_t_u_u((((*p_53) , ((((g_165 = &l_195) != (void*)0) || l_489) >= ((*l_491) = (~0x25L)))) == (l_495 = (((*l_125) = (safe_rshift_func_int8_t_s_u((((*l_416) = (*l_416)) == l_494[1][4][2]), 7))) >= 1UL))), 0xEAB6L)) , p_52)) || p_51)))
        { 
            struct S0 l_504 = {65535UL,1L,-5L,1UL,0xDFL,0xD7L,0x4F47L};
            union U1 l_527 = {0x67DEL};
            int64_t *l_528 = &g_299[1];
            int32_t *l_536 = &l_399;
            int32_t *l_549[7][3][2] = {{{&l_247,(void*)0},{(void*)0,&l_399},{&l_399,(void*)0}},{{(void*)0,&l_247},{(void*)0,(void*)0},{&l_399,&l_399}},{{(void*)0,(void*)0},{&l_247,(void*)0},{(void*)0,&l_399}},{{&l_399,(void*)0},{(void*)0,&l_247},{(void*)0,(void*)0}},{{&l_399,&l_399},{(void*)0,(void*)0},{&l_247,(void*)0}},{{(void*)0,&l_399},{&l_399,(void*)0},{(void*)0,&l_247}},{{(void*)0,(void*)0},{&l_399,&l_399},{(void*)0,(void*)0}}};
            int i, j, k;
            for (g_394.f3 = 0; (g_394.f3 <= 11); g_394.f3 = safe_add_func_int32_t_s_s(g_394.f3, 4))
            { 
                int16_t l_501[4] = {0x3A0EL,0x3A0EL,0x3A0EL,0x3A0EL};
                int64_t l_529 = 4L;
                int32_t *l_541[7] = {&g_78,&l_221,&l_221,&g_78,&l_221,&l_221,&g_78};
                int i;
                for (l_361 = 0; (l_361 < 14); ++l_361)
                { 
                    int32_t **l_500 = &l_124;
                    int16_t ***l_506 = &l_416;
                    union U1 l_509 = {0UL};
                    const uint64_t **l_530 = (void*)0;
                    const uint64_t ***l_531 = (void*)0;
                    const uint64_t ***l_532 = &l_530;
                    (*l_500) = &l_399;
                    if (l_384[2][4][2])
                        break;
                    l_446 ^= (l_501[2] || ((safe_mul_func_int16_t_s_s(l_501[2], (((((((((((*l_506) = (l_504 , l_505)) == ((((0UL == l_504.f3) <= ((**l_500) = p_52)) & (*g_165)) , g_507)) , l_501[3]) && 0UL) >= 0xC3L) , p_52) ^ g_265) , (-3L)) == 1L) && (*l_125)))) || l_501[2]));
                    (**l_500) ^= (l_509 , (((!(safe_mod_func_int16_t_s_s(((**l_416) = l_504.f1), (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((((safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(p_52, (((*g_165) || (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((l_527 , (((void*)0 == l_528) <= g_103.f1)), l_501[2])), 0xF791L))) ^ (*g_165)))), l_529)) , (void*)0) != &g_137) == 9L), (-1L))) ^ (*p_53)), l_527.f0)), 6))))) | 0x3B3C09FDL) >= p_52));
                    (*l_532) = l_530;
                }
                for (g_78 = 0; (g_78 <= (-4)); g_78--)
                { 
                    struct S0 **l_535 = &g_393;
                    int32_t **l_537 = &l_536;
                    int32_t *l_538 = &l_247;
                    (*l_535) = (void*)0;
                    if (l_401[3])
                        continue;
                    (*l_537) = l_536;
                    (*l_538) |= (g_265 ^= ((p_51 , (**l_537)) > l_359[4]));
                }
                for (l_504.f5 = 0; (l_504.f5 >= 41); l_504.f5 = safe_add_func_uint64_t_u_u(l_504.f5, 4))
                { 
                    if (p_52)
                        break;
                    if ((*l_536))
                        break;
                    return (*p_53);
                }
                g_543[0]++;
            }
            for (l_195 = 0; (l_195 <= 23); l_195 = safe_add_func_uint64_t_u_u(l_195, 6))
            { 
                int16_t l_548 = 0x215FL;
                int32_t l_552 = 7L;
                if (l_548)
                { 
                    if (l_548)
                        break;
                    l_549[4][1][0] = p_53;
                    if (l_548)
                        break;
                    if (g_364.f0)
                        break;
                }
                else
                { 
                    int32_t **l_550[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_550[i] = &l_125;
                    g_551 = (void*)0;
                }
                l_552 |= ((*l_125) |= p_52);
                if (l_548)
                    break;
            }
        }
        else
        { 
            uint32_t l_556[3];
            int32_t l_563 = (-1L);
            int i;
            for (i = 0; i < 3; i++)
                l_556[i] = 0x9EAC06E5L;
            for (l_495 = (-15); (l_495 > 24); ++l_495)
            { 
                int32_t *l_555[6][3] = {{&l_402[4][4][3],&l_402[4][4][3],&l_402[4][4][3]},{(void*)0,(void*)0,(void*)0},{&l_402[4][4][3],&l_402[4][4][3],&l_402[4][4][3]},{(void*)0,(void*)0,(void*)0},{&l_402[4][4][3],&l_402[4][4][3],&l_402[4][4][3]},{(void*)0,(void*)0,(void*)0}};
                int i, j;
                l_556[0]++;
                (*g_551) &= (*l_125);
                for (g_103.f3 = 0; (g_103.f3 <= 1); g_103.f3 += 1)
                { 
                    int32_t **l_559 = &l_124;
                    int32_t **l_560 = &l_555[5][1];
                    int32_t l_561 = 0x0370D91AL;
                    int32_t l_562 = 1L;
                    (*l_560) = ((*l_559) = l_555[3][1]);
                    ++g_566;
                    if (l_556[0])
                        break;
                }
                if (p_51)
                { 
                    uint32_t l_569[4][3] = {{0xC50D73C4L,1UL,0xC50D73C4L},{0xC50D73C4L,1UL,0xC50D73C4L},{0xC50D73C4L,1UL,0xC50D73C4L},{0xC50D73C4L,1UL,0xC50D73C4L}};
                    int i, j;
                    --l_569[1][0];
                    if ((*g_551))
                        break;
                    return (*g_107);
                }
                else
                { 
                    (*g_551) &= (-5L);
                }
                if (g_394.f2)
                    goto lbl_572;
            }
            return l_489;
        }
    }
lbl_672:
    for (g_566 = 0; (g_566 <= 2); g_566 += 1)
    { 
        uint32_t l_588 = 4294967295UL;
        int8_t *l_589 = &g_220[3];
        int64_t *l_590[2];
        int32_t l_591 = 0xDBECCE5CL;
        int32_t *l_592 = &l_591;
        int32_t l_593 = 0x6A45C7D8L;
        int32_t *l_594 = &l_247;
        int32_t *l_595 = (void*)0;
        int32_t *l_596 = &l_402[2][5][1];
        int32_t *l_597 = &g_78;
        int32_t *l_598[4][2][2] = {{{&l_446,&l_446},{&l_446,&l_446}},{{&l_446,&l_446},{&l_446,&l_446}},{{&l_446,&l_446},{&l_446,&l_446}},{{&l_446,&l_446},{&l_446,&l_446}}};
        uint16_t * const *l_625 = &g_165;
        uint32_t ***l_643 = &g_106[3][0][1];
        uint64_t *l_645 = &g_403;
        uint64_t **l_644 = &l_645;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_590[i] = (void*)0;
    }
    for (g_564 = (-11); (g_564 < (-4)); g_564++)
    { 
        int32_t **l_655 = &l_125;
        uint8_t * const **l_701 = (void*)0;
        (*l_655) = &l_402[2][2][3];
        if ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((18446744073709551607UL | ((safe_mul_func_int16_t_s_s(((**l_416) = (**l_655)), (l_669 = ((safe_rshift_func_uint16_t_u_s((**l_655), (**l_655))) | ((safe_sub_func_uint32_t_u_u((~0x67FDE18BC5BE8ED1LL), (safe_rshift_func_int16_t_s_s((func_61(g_265) , (**l_655)), p_52)))) != (-7L)))))) | g_288)), (*l_125))), 6)))
        { 
            if (p_52)
                break;
            for (g_348 = (-28); (g_348 > 5); ++g_348)
            { 
                if (g_103.f6)
                    goto lbl_672;
            }
            return (*p_53);
        }
        else
        { 
            int32_t *l_673 = &g_137;
            int32_t *l_674 = &l_399;
            int32_t *l_675 = &g_78;
            int32_t *l_676 = &g_78;
            int32_t *l_677 = (void*)0;
            int32_t l_678 = (-1L);
            int32_t l_679 = 0L;
            int32_t *l_680 = &g_137;
            int32_t *l_681 = &g_137;
            int32_t *l_682[5][1][1] = {{{&l_679}},{{&l_446}},{{&l_679}},{{&l_446}},{{&l_679}}};
            int i, j, k;
            --g_684[3];
            for (l_195 = 0; (l_195 <= 0); l_195 += 1)
            { 
                return (*p_53);
            }
        }
        for (l_495 = 0; (l_495 != (-18)); l_495 = safe_sub_func_uint8_t_u_u(l_495, 3))
        { 
            struct S0 ***l_690 = &l_689;
            struct S0 **l_692 = &g_393;
            struct S0 ***l_691 = &l_692;
            uint16_t *l_704 = (void*)0;
            (*l_691) = ((*l_690) = l_689);
            (*l_125) = ((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((p_52 & 0L), ((safe_lshift_func_int16_t_s_u(((0x2070L != (safe_div_func_uint16_t_u_u((l_701 == ((safe_mul_func_uint16_t_u_u((((0x7ABDD659L | (*p_53)) < (&l_195 == l_704)) & 0x237DL), p_51)) , l_705)), 0x2EF5L))) | 7UL), (*l_125))) , p_51))), 4294967291UL)) || 0x05L);
        }
    }
    (*l_720) |= (!(((safe_mul_func_uint16_t_u_u((p_52 > (safe_rshift_func_uint16_t_u_u((p_51 && 0x0F093525L), (safe_mul_func_uint16_t_u_u((p_52 || (safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(0xBCL, 3)), ((*l_705) == ((p_52 ^ 0x0954L) , (void*)0)))), g_394.f5))), g_683))))), p_52)) | (*l_125)) < 1L));
    (*l_720) |= (safe_sub_func_int32_t_s_s(((*l_125) &= (-10L)), (!p_52)));
    return (*p_53);
}



static const uint16_t  func_57(const uint64_t  p_58, const struct S0  p_59, uint32_t * p_60)
{ 
    int32_t *l_109 = &g_78;
    int32_t **l_110 = &l_109;
    uint8_t **l_111 = (void*)0;
    uint8_t ***l_112 = &l_111;
    (*l_110) = l_109;
    (*l_112) = l_111;
    return p_59.f2;
}



static struct S0  func_61(uint32_t  p_62)
{ 
    uint8_t *l_65 = &g_12;
    uint16_t *l_66 = &g_67;
    uint16_t l_76 = 0x093BL;
    int32_t *l_77 = &g_78;
    int8_t *l_95 = (void*)0;
    int8_t *l_96 = &g_97[5];
    uint32_t l_98 = 4294967289UL;
    uint16_t l_99 = 0xE53AL;
    uint32_t l_100[7][4] = {{0x1A92B6F8L,0x8C0F44DCL,0xE1F9A5DEL,3UL},{4294967293UL,4294967287UL,3UL,0xB2EC16D2L},{3UL,0xB2EC16D2L,1UL,0xB2EC16D2L},{0xE195D318L,4294967287UL,0xE11E7DC6L,3UL},{0xB0BAB1DDL,0x8C0F44DCL,0xB2EC16D2L,0x7C708470L},{0xE11E7DC6L,0xE195D318L,0x348D5C88L,0x348D5C88L},{0xE11E7DC6L,0xE11E7DC6L,0xB2EC16D2L,0x1A92B6F8L}};
    uint32_t *l_105 = &g_37;
    uint32_t **l_104 = &l_105;
    struct S0 l_108 = {0UL,0L,1L,65535UL,0xF0L,3UL,0xA7F2L};
    int i, j;
    (*l_77) = (safe_sub_func_int32_t_s_s(((-1L) > (((((*l_66) = ((void*)0 != l_65)) == (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(0x14L, g_12)), ((safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(g_12, g_12)), 0x58EFE572L)) ^ p_62)))) != 8UL) >= l_76)), g_12));
    (*l_77) = ((safe_mod_func_int8_t_s_s(((((p_62 >= (safe_lshift_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((*l_77), 0xBAL)) | (safe_sub_func_int16_t_s_s(((((-1L) > ((safe_mod_func_uint32_t_u_u(((*l_77) & g_2), (safe_add_func_int32_t_s_s(((l_99 = (((*l_96) = (safe_sub_func_int64_t_s_s(g_2, g_12))) & l_98)) < 1L), p_62)))) != 0xE14DAAE8D137083FLL)) || (*l_77)) && l_100[4][0]), p_62))) <= p_62), 2))) && 0xF693945F7E1E514DLL) && 0L) <= 1UL), 0xE5L)) , p_62);
    for (p_62 = (-22); (p_62 >= 28); p_62 = safe_add_func_uint64_t_u_u(p_62, 1))
    { 
        (*l_77) = g_78;
        return g_103;
    }
    g_106[3][0][1] = l_104;
    return l_108;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_97[i], "g_97[i]", print_hash_value);

    }
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_103.f2, "g_103.f2", print_hash_value);
    transparent_crc(g_103.f3, "g_103.f3", print_hash_value);
    transparent_crc(g_103.f4, "g_103.f4", print_hash_value);
    transparent_crc(g_103.f5, "g_103.f5", print_hash_value);
    transparent_crc(g_103.f6, "g_103.f6", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_220[i], "g_220[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_223[i], "g_223[i]", print_hash_value);

    }
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_299[i], "g_299[i]", print_hash_value);

    }
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_364.f0, "g_364.f0", print_hash_value);
    transparent_crc(g_394.f0, "g_394.f0", print_hash_value);
    transparent_crc(g_394.f1, "g_394.f1", print_hash_value);
    transparent_crc(g_394.f2, "g_394.f2", print_hash_value);
    transparent_crc(g_394.f3, "g_394.f3", print_hash_value);
    transparent_crc(g_394.f4, "g_394.f4", print_hash_value);
    transparent_crc(g_394.f5, "g_394.f5", print_hash_value);
    transparent_crc(g_394.f6, "g_394.f6", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_543[i], "g_543[i]", print_hash_value);

    }
    transparent_crc(g_564, "g_564", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_565[i], "g_565[i]", print_hash_value);

    }
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_650[i], "g_650[i]", print_hash_value);

    }
    transparent_crc(g_683, "g_683", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_684[i], "g_684[i]", print_hash_value);

    }
    transparent_crc(g_757, "g_757", print_hash_value);
    transparent_crc(g_793, "g_793", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_800[i][j], "g_800[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_881, "g_881", print_hash_value);
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_951, "g_951", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_953, "g_953", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    transparent_crc(g_975, "g_975", print_hash_value);
    transparent_crc(g_1004.f0, "g_1004.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1074[i][j][k], "g_1074[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1113, "g_1113", print_hash_value);
    transparent_crc(g_1285, "g_1285", print_hash_value);
    transparent_crc(g_1313, "g_1313", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1422[i], "g_1422[i]", print_hash_value);

    }
    transparent_crc(g_1435, "g_1435", print_hash_value);
    transparent_crc(g_1487.f0, "g_1487.f0", print_hash_value);
    transparent_crc(g_1487.f1, "g_1487.f1", print_hash_value);
    transparent_crc(g_1487.f2, "g_1487.f2", print_hash_value);
    transparent_crc(g_1487.f3, "g_1487.f3", print_hash_value);
    transparent_crc(g_1487.f4, "g_1487.f4", print_hash_value);
    transparent_crc(g_1487.f5, "g_1487.f5", print_hash_value);
    transparent_crc(g_1487.f6, "g_1487.f6", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
