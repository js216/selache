// SPDX-License-Identifier: MIT
// cctest_csmith_1eb3d6be.c --- cctest case csmith_1eb3d6be (csmith seed 515102398)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2ba2f93a */
/* @exp_ticks 0x3335 */

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

// Options:   -s 515102398 -o /tmp/csmith_gen_b8r_j_pa/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   uint64_t  f1;
};

struct S1 {
   const int16_t  f0;
   uint8_t  f1;
   uint16_t  f2;
   uint32_t  f3;
};

union U2 {
   uint32_t  f0;
   int32_t  f1;
   uint64_t  f2;
   uint8_t  f3;
};


static int32_t g_4 = 0x56251324L;
static uint16_t g_20 = 1UL;
static int32_t g_21[1] = {1L};
static int32_t g_24 = 9L;
static uint16_t g_28 = 65527UL;
static uint32_t g_31 = 0x60E2EFE8L;
static struct S0 g_48 = {0xC8FCBD0DL,0x94A3CE577E9FB133LL};
static struct S0 g_49 = {0UL,8UL};
static uint16_t g_94[4] = {0x12F8L,0x12F8L,0x12F8L,0x12F8L};
static uint8_t g_97 = 0x0BL;
static uint8_t g_100 = 1UL;
static uint8_t g_111 = 0x65L;
static struct S1 g_122 = {1L,0xE4L,0xFED4L,0UL};
static const uint32_t g_123 = 0x3C6A6534L;



static uint64_t  func_1(void);
static union U2  func_10(uint32_t  p_11, int8_t  p_12, struct S0  p_13, union U2  p_14);
static int8_t  func_15(int32_t  p_16, uint8_t  p_17, int32_t  p_18, uint16_t  p_19);
static struct S0  func_22(uint16_t  p_23);




static uint64_t  func_1(void)
{ 
    uint64_t l_2 = 0x59D568D526D2E858LL;
    int32_t l_124 = 0x2360892CL;
    int32_t l_125 = 0xC27D48C0L;
    if (l_2)
    { 
        int32_t l_3 = 0x3EB60693L;
        g_4 = l_3;
    }
    else
    { 
        uint16_t l_9 = 0UL;
        struct S0 l_103 = {0xC20B361CL,1UL};
        union U2 l_104 = {0UL};
        int64_t l_130 = 3L;
        int32_t l_131[5];
        int i;
        for (i = 0; i < 5; i++)
            l_131[i] = 0L;
        if (((safe_sub_func_int32_t_s_s((((l_9 || ((func_10(l_9, func_15(((g_20 = 1L) != 1L), l_2, l_9, g_4), l_103, l_104) , 0x61E74A9F0F70EDC5LL) && l_103.f1)) , 0xCAD7D98C00C08B14LL) == g_4), l_104.f3)) | 0UL))
        { 
            int32_t l_114 = (-5L);
            if ((g_21[0] &= g_97))
            { 
                g_111++;
            }
            else
            { 
                int8_t l_117 = 0x0AL;
                l_124 &= ((l_114 , func_22((((((l_114 | (safe_sub_func_int16_t_s_s(l_117, (safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((g_122 , g_123) == g_48.f1) != g_49.f0), 5)), g_31))))) <= l_114) , l_117) >= 0xDC40744711E6C6A7LL) <= l_117))) , l_117);
            }
        }
        else
        { 
            l_131[1] = (l_125 & (safe_mod_func_int64_t_s_s((g_122.f3 , (g_122.f3 , (l_104.f1 = (((safe_sub_func_uint8_t_u_u(0x3DL, l_9)) | 4294967295UL) || l_2)))), l_130)));
            for (g_122.f1 = 0; (g_122.f1 == 56); g_122.f1 = safe_add_func_uint32_t_u_u(g_122.f1, 2))
            { 
                g_49 = g_49;
            }
            l_125 = g_48.f0;
        }
    }
    return g_4;
}



static union U2  func_10(uint32_t  p_11, int8_t  p_12, struct S0  p_13, union U2  p_14)
{ 
    int32_t l_107 = (-10L);
    union U2 l_110[2] = {{0UL},{0UL}};
    int i;
    p_13 = func_22(((0xE6A653BE29DAAEC3LL > ((l_107 = (safe_mul_func_int8_t_s_s(g_94[1], 0L))) || (safe_mul_func_uint16_t_u_u(l_107, p_12)))) , g_94[3]));
    return l_110[0];
}



static int8_t  func_15(int32_t  p_16, uint8_t  p_17, int32_t  p_18, uint16_t  p_19)
{ 
    uint16_t l_50 = 0xA495L;
    int32_t l_82 = 0L;
    uint32_t l_84 = 18446744073709551607UL;
    struct S0 l_85[2][5] = {{{2UL,0x7C5103452746A0FELL},{1UL,0x3F51ED022C1C4229LL},{1UL,0x3F51ED022C1C4229LL},{2UL,0x7C5103452746A0FELL},{18446744073709551613UL,0x53184BC67B678304LL}},{{2UL,0x7C5103452746A0FELL},{1UL,0x3F51ED022C1C4229LL},{1UL,0x3F51ED022C1C4229LL},{2UL,0x7C5103452746A0FELL},{18446744073709551613UL,0x53184BC67B678304LL}}};
    uint32_t l_98[1];
    int32_t l_99[5][2];
    int i, j;
    for (i = 0; i < 1; i++)
        l_98[i] = 1UL;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_99[i][j] = (-5L);
    }
    for (g_20 = 0; (g_20 <= 0); g_20 += 1)
    { 
        int8_t l_58 = 0xB5L;
        int32_t l_83 = 0xC61BC9EFL;
        int64_t l_87 = 0xF0D8C8EF010E3964LL;
        int32_t l_89[2];
        int i;
        for (i = 0; i < 2; i++)
            l_89[i] = 0xBB11E403L;
        for (p_17 = 0; (p_17 <= 0); p_17 += 1)
        { 
            int32_t l_63 = 0x14F04B5AL;
            for (p_18 = 0; (p_18 >= 0); p_18 -= 1)
            { 
                int i;
                g_49 = func_22((g_24 = 65527UL));
                if (g_21[p_17])
                    break;
                g_21[p_17] &= (l_50 & (-10L));
            }
            for (g_49.f0 = 0; (g_49.f0 < 13); g_49.f0++)
            { 
                struct S0 l_53[3][4][1] = {{{{18446744073709551614UL,1UL}},{{18446744073709551606UL,0xC396C7BFB9E2BF2DLL}},{{18446744073709551614UL,1UL}},{{0xFB12B2C9L,0UL}}},{{{0x35A08C81L,0x8303F43C5EACAA09LL}},{{0xFB12B2C9L,0UL}},{{18446744073709551614UL,1UL}},{{18446744073709551606UL,0xC396C7BFB9E2BF2DLL}}},{{{18446744073709551614UL,1UL}},{{0xFB12B2C9L,0UL}},{{0x35A08C81L,0x8303F43C5EACAA09LL}},{{0xFB12B2C9L,0UL}}}};
                int i, j, k;
                g_48 = l_53[0][0][0];
                p_18 = (!(safe_div_func_int64_t_s_s(((0x0EL >= (~l_58)) , ((p_17 , ((safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((l_58 == g_31), 0xF13F3F2CL)) , (-8L)), p_17)) ^ g_49.f1)) , l_63)), p_19)));
                if (g_21[0])
                    break;
            }
        }
        if ((+(safe_mod_func_int32_t_s_s(p_18, g_21[0]))))
        { 
            int64_t l_69 = 0x217CF0AE94942BEBLL;
            l_83 = (safe_mul_func_int8_t_s_s((l_69 || g_28), (0x11625F1AL < (safe_mod_func_int16_t_s_s(((+((l_82 = (!(safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(l_50, l_50)) & 65532UL), l_69)) , g_49.f1), p_19)), g_48.f1)))) ^ p_18)) || 0UL), g_4)))));
            l_85[0][0] = func_22((g_28 = l_84));
        }
        else
        { 
            int32_t l_86 = 0L;
            int32_t l_88 = (-9L);
            g_24 = ((--g_31) , (p_18 > (safe_add_func_uint64_t_u_u(((g_94[3] = l_86) < (((safe_rshift_func_int16_t_s_u((g_97 = (-4L)), 13)) ^ (((((-1L) ^ g_49.f0) , g_24) < 0L) >= g_4)) | l_98[0])), 0xA465FDEB7949DEFBLL))));
        }
        ++g_100;
    }
    return g_20;
}



static struct S0  func_22(uint16_t  p_23)
{ 
    int64_t l_27 = 0xED09EB818F8F6A1CLL;
    int32_t l_32 = 0xFC53D8B3L;
    uint64_t l_33 = 1UL;
    l_33 = ((safe_lshift_func_int16_t_s_u((g_28 |= l_27), 13)) , ((safe_mul_func_uint16_t_u_u(65535UL, (l_32 ^= (g_31 = (g_28 == (l_27 , 1L)))))) != 4L));
    for (l_27 = 0; (l_27 <= 0); l_27 += 1)
    { 
        const uint32_t l_46[5] = {7UL,7UL,7UL,7UL,7UL};
        int32_t l_47[5][5] = {{0x663B350BL,1L,0L,1L,0x663B350BL},{1L,1L,1L,0x663B350BL,1L},{1L,1L,1L,0xAE446F94L,1L},{1L,0x663B350BL,0x663B350BL,1L,0x3B2B4B20L},{1L,0xAE446F94L,0L,0L,0xAE446F94L}};
        int i, j;
        for (g_31 = 0; (g_31 <= 0); g_31 += 1)
        { 
            int i;
            g_21[g_31] = (((safe_add_func_uint32_t_u_u((l_47[0][0] = (((safe_mul_func_int16_t_s_s(((((+(4294967295UL || ((((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((+g_21[l_27]), (p_23 = 65534UL))) != (((((safe_sub_func_uint32_t_u_u(((g_21[g_31] != g_28) == g_4), l_46[4])) & l_46[3]) >= 65530UL) > g_4) < g_24)), 9)) < g_21[l_27]) , 1L) == g_31))) & g_24) != 1L) || g_28), g_21[g_31])) != l_46[4]) || g_28)), 0x01672C65L)) ^ g_4) < l_33);
            return g_48;
        }
    }
    return g_48;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_21[i], "g_21[i]", print_hash_value);

    }
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
    transparent_crc(g_49.f0, "g_49.f0", print_hash_value);
    transparent_crc(g_49.f1, "g_49.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);

    }
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_122.f1, "g_122.f1", print_hash_value);
    transparent_crc(g_122.f2, "g_122.f2", print_hash_value);
    transparent_crc(g_122.f3, "g_122.f3", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
