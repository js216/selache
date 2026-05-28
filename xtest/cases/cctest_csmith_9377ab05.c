// SPDX-License-Identifier: MIT
// cctest_csmith_9377ab05.c --- cctest case csmith_9377ab05 (csmith seed 2474093317)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x10c39788 */
/* @exp_ticks 0x3d4a */

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

// Options:   -s 2474093317 -o /tmp/csmith_gen_jhh3a3zs/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint8_t  f0;
   int32_t  f1;
};

union U1 {
   const struct S0  f0;
   struct S0  f1;
   const uint64_t  f2;
};

union U2 {
   struct S0  f0;
   uint8_t  f1;
   uint8_t  f2;
   int16_t  f3;
};

union U4 {
   struct S0  f0;
};

union U5 {
   struct S0  f0;
   const int8_t  f1;
   uint32_t  f2;
};

union U6 {
   int16_t  f0;
};


static int32_t g_2[3] = {0x085C9E53L,0x085C9E53L,0x085C9E53L};
static union U6 g_18[2][1] = {{{0x33F2L}},{{0x33F2L}}};
static uint32_t g_30 = 18446744073709551610UL;
static int8_t g_41 = 0x2BL;
static uint32_t g_46 = 18446744073709551607UL;
static int16_t g_49 = (-6L);
static uint32_t g_50[5][3] = {{5UL,18446744073709551608UL,0x31364F2CL},{18446744073709551615UL,18446744073709551608UL,18446744073709551615UL},{0x35B5B06AL,5UL,0x31364F2CL},{0x35B5B06AL,0x35B5B06AL,5UL},{18446744073709551615UL,5UL,5UL}};
static uint32_t g_52 = 0xE9069002L;
static union U4 g_55 = {{255UL,-10L}};
static int32_t g_61 = 0x9F1A7DFAL;
static uint16_t g_75 = 65530UL;
static uint32_t g_99 = 1UL;
static uint8_t g_102 = 252UL;
static uint64_t g_105 = 0xCC60535321785A3FLL;
static uint64_t g_109 = 18446744073709551610UL;
static uint64_t g_129 = 0x285802EA21089BBDLL;
static int16_t g_142 = (-1L);
static int16_t g_143 = 0L;
static int16_t g_144 = 0xD083L;
static int32_t g_145 = 0xBCCD5419L;
static int16_t g_146 = 0x514AL;
static int32_t g_147[3] = {0xAF264BFDL,0xAF264BFDL,0xAF264BFDL};
static int32_t g_148 = (-9L);
static uint8_t g_149 = 253UL;
static uint32_t g_164 = 0xC8C0895BL;
static uint8_t g_188 = 0x3CL;
static int16_t g_199 = 0xBE7FL;
static int32_t g_252 = 4L;
static union U5 g_257[4] = {{{248UL,-1L}},{{248UL,-1L}},{{248UL,-1L}},{{248UL,-1L}}};



static uint8_t  func_1(void);
static uint64_t  func_14(const uint32_t  p_15, union U6  p_16, union U4  p_17);
static int16_t  func_22(int32_t  p_23, uint32_t  p_24);
static uint8_t  func_27(union U6  p_28);




static uint8_t  func_1(void)
{ 
    int32_t l_11[4][5] = {{0x145BA13BL,0L,0x145BA13BL,0x145BA13BL,0L},{1L,0L,0L,1L,0L},{0L,0L,0xBFA32A17L,0L,0L},{0L,1L,0L,0L,0L}};
    int32_t l_264 = (-9L);
    uint8_t l_269[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_269[i] = 248UL;
    for (g_2[2] = (-10); (g_2[2] >= 14); g_2[2]++)
    { 
        union U4 l_19 = {{253UL,0xE22401DBL}};
        int32_t l_253 = 0xDBD7DA9CL;
        if ((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((l_253 = (g_252 = (l_11[2][3] & ((l_11[3][4] <= (safe_mod_func_uint64_t_u_u(func_14(g_2[2], g_18[1][0], l_19), g_18[1][0].f0))) > l_19.f0.f1)))) != 1L), l_19.f0.f0)), l_11[2][3])), (-1L))))
        { 
            l_253 ^= (g_252 = (safe_unary_minus_func_uint16_t_u((g_102 < (safe_mul_func_int16_t_s_s(0L, (g_75 = 0UL)))))));
        }
        else
        { 
            uint64_t l_262 = 0x161C58A5ED254771LL;
            union U2 l_263 = {{3UL,0x2C6C6D99L}};
            if (((g_257[0] , ((((safe_mul_func_uint8_t_u_u(l_11[2][3], ((((((0xB6L >= ((safe_rshift_func_int16_t_s_u((g_18[1][0] , 0xDB4BL), l_11[1][1])) & 8L)) < l_262) | 0x814567EDCCD7B2C7LL) >= 0xAE51L) , l_262) && 0x6467L))) >= l_262) , 0UL) , 4294967292UL)) != 0x3470E8C4L))
            { 
                return g_147[0];
            }
            else
            { 
                if (g_252)
                    break;
            }
            l_264 = (l_263 , (l_11[2][3] ^= g_164));
            g_252 &= (g_75 >= (((safe_sub_func_uint8_t_u_u(((-9L) >= (g_257[0].f0.f1 ^ (g_61 & g_199))), g_188)) < l_269[0]) <= g_102));
        }
        l_253 &= (~65534UL);
    }
    return g_142;
}



static uint64_t  func_14(const uint32_t  p_15, union U6  p_16, union U4  p_17)
{ 
    int32_t l_53 = 0xFD1A6840L;
    int32_t l_101[5][2] = {{0xE9B23D7FL,0x1DD11AFFL},{0xDA4A23C0L,0xDA4A23C0L},{0xDA4A23C0L,0x1DD11AFFL},{0xE9B23D7FL,0x19BE197FL},{0x1DD11AFFL,0x19BE197FL}};
    union U1 l_128 = {{0x4DL,1L}};
    uint16_t l_174 = 0xBE5EL;
    int8_t l_187 = 0xB9L;
    int32_t l_226 = (-1L);
    int16_t l_228 = (-1L);
    int64_t l_231 = 2L;
    int32_t l_249[4][2][4] = {{{0x66721655L,1L,0x66721655L,0x64150C39L},{1L,0x4907F26BL,0x64150C39L,0x64150C39L}},{{1L,1L,0xE5EF4969L,0x4907F26BL},{0x4907F26BL,1L,0xE5EF4969L,1L}},{{1L,0x66721655L,0x64150C39L,0xE5EF4969L},{1L,0x66721655L,0x66721655L,1L}},{{0x66721655L,1L,1L,0x4907F26BL},{0x66721655L,1L,0x66721655L,0x64150C39L}}};
    int i, j, k;
    if (((-1L) == (safe_sub_func_uint32_t_u_u(p_15, (p_17.f0.f0 == func_22((safe_add_func_uint8_t_u_u(func_27(p_16), g_18[1][0].f0)), l_53))))))
    { 
        int8_t l_70 = (-1L);
        int8_t l_73 = 3L;
        int32_t l_74 = (-3L);
        if ((p_17.f0.f0 > (((g_49 ^= ((safe_rshift_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s((p_16.f0 || (p_16 , (!(safe_lshift_func_int16_t_s_s(g_41, 12))))), l_70)) , l_53) > 0x48L) <= 0xE3584F79AABF6635LL), 9)) , 9L)) | l_70) > l_53)))
        { 
            uint16_t l_83 = 0x9E73L;
            const union U5 l_84 = {{1UL,0xADEF089EL}};
            int32_t l_100 = 0x5EF5641EL;
            int32_t l_108 = 0x58C465D2L;
            for (g_52 = 29; (g_52 <= 50); g_52 = safe_add_func_int32_t_s_s(g_52, 1))
            { 
                g_61 = p_17.f0.f1;
                g_75--;
                if (g_52)
                    continue;
            }
            for (g_30 = (-6); (g_30 == 9); g_30++)
            { 
                uint16_t l_82 = 7UL;
                g_61 = g_50[4][0];
                g_61 = g_2[2];
                l_83 = (l_82 = (safe_lshift_func_uint16_t_u_s(p_15, 14)));
            }
            if ((l_84 , (l_84.f0.f1 >= (safe_div_func_int16_t_s_s((g_55.f0.f1 <= ((safe_mul_func_int8_t_s_s(l_83, g_49)) , l_53)), l_53)))))
            { 
                int32_t l_98[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_98[i][j] = 0x5EE06F66L;
                }
                l_100 |= ((!(safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(l_84.f0.f1, ((((0x89AB98CFL == (safe_div_func_uint8_t_u_u((0x641D31ABL <= (((((safe_lshift_func_uint8_t_u_s((l_98[0][0] > l_53), g_99)) <= g_55.f0.f0) < p_17.f0.f0) && l_74) , g_18[1][0].f0)), l_74))) , p_15) < g_50[4][0]) || 0x0F56L))), 0x2BL))) <= p_17.f0.f1);
                return l_98[0][0];
            }
            else
            { 
                --g_102;
                ++g_105;
                --g_109;
            }
        }
        else
        { 
            uint16_t l_112[4][2] = {{65532UL,4UL},{65532UL,4UL},{65532UL,4UL},{65532UL,4UL}};
            int i, j;
            l_112[2][0]++;
        }
    }
    else
    { 
        uint64_t l_130 = 18446744073709551607UL;
        int32_t l_138[3][4][2] = {{{0xE184C744L,1L},{0x8338C196L,0L},{0L,0x8338C196L},{1L,0xE184C744L}},{{1L,0x8338C196L},{0L,0L},{0x8338C196L,1L},{0xE184C744L,1L}},{{0x8338C196L,0L},{0L,0x8338C196L},{1L,0xE184C744L},{1L,0x8338C196L}}};
        const int16_t l_173 = 1L;
        int i, j, k;
        if ((safe_mod_func_uint64_t_u_u((!(safe_rshift_func_uint8_t_u_u(0xA8L, (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(4UL, 12)) , (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u((l_128 , g_129), 12)) >= 0x28206E4EE9DAE1B4LL), 12))), l_130))))), (-4L))))
        { 
            uint32_t l_139 = 1UL;
            for (p_16.f0 = 21; (p_16.f0 >= (-18)); p_16.f0--)
            { 
                union U5 l_137 = {{0x99L,2L}};
                l_101[0][0] = (safe_add_func_int64_t_s_s((g_18[1][0] , (((g_55.f0.f1 < g_109) >= (safe_lshift_func_int16_t_s_s((l_138[0][3][0] = (l_137 , g_75)), 9))) && g_129)), l_139));
            }
        }
        else
        { 
            for (g_105 = 16; (g_105 > 43); ++g_105)
            { 
                g_61 |= g_30;
                if (g_99)
                    continue;
            }
            g_61 = l_101[3][1];
        }
        g_149++;
        if ((safe_mul_func_int8_t_s_s(((g_149 = g_41) >= ((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((l_128.f0.f1 != ((g_164 = (safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(0x0EL, ((l_128 , g_142) , g_41))), 7)) ^ g_55.f0.f1), l_101[3][1]))) ^ l_138[0][1][0])) <= g_144), (-6L))) >= 0L), p_17.f0.f1)) == 65532UL)), (-9L))))
        { 
            union U5 l_167 = {{250UL,0x61D1B06CL}};
            int32_t l_175 = 1L;
            for (l_130 = (-15); (l_130 <= 12); l_130 = safe_add_func_uint8_t_u_u(l_130, 7))
            { 
                l_101[1][1] = p_17.f0.f0;
                l_138[0][3][0] = (l_167 , ((safe_unary_minus_func_int64_t_s((safe_mul_func_int16_t_s_s((p_16.f0 = ((safe_lshift_func_int8_t_s_s(((((0x4225D93BL == ((l_138[2][1][1] > (l_173 <= g_2[2])) == 249UL)) != l_167.f0.f1) <= 0L) && g_143), 5)) < p_15)), g_50[3][1])))) ^ 0xFE129BBF80E55F7ELL));
            }
            l_175 = (l_174 | 0x3D67E142B96BFC59LL);
        }
        else
        { 
            uint64_t l_184 = 0UL;
            int32_t l_185 = 0L;
            int32_t l_186 = 0xA55BADF4L;
            g_61 = (safe_mod_func_int64_t_s_s((g_188 = ((((safe_mod_func_uint64_t_u_u((+((l_186 |= (0xC4E8C282L < (l_53 < ((l_185 = (((+(-2L)) | (((safe_rshift_func_uint16_t_u_s(l_101[2][1], l_184)) < p_15) | l_184)) >= g_129)) > l_101[0][1])))) || l_185)), g_164)) > l_184) & l_187) < g_149)), l_184));
            for (p_17.f0.f1 = (-4); (p_17.f0.f1 > (-21)); p_17.f0.f1 = safe_sub_func_int64_t_s_s(p_17.f0.f1, 9))
            { 
                l_101[4][0] |= (g_188 || ((g_199 = (((safe_div_func_int8_t_s_s((-10L), (((safe_div_func_int32_t_s_s(l_138[0][3][0], (safe_sub_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u(g_102, 0x32L)) != 0L) >= g_143), 1L)))) | p_17.f0.f0) , l_138[0][1][0]))) & g_75) > g_50[2][0])) < l_184));
            }
        }
    }
    for (g_41 = 0; g_41 < 5; g_41 += 1)
    {
        for (g_148 = 0; g_148 < 3; g_148 += 1)
        {
            g_50[g_41][g_148] = 1UL;
        }
    }
    for (g_102 = 0; (g_102 >= 41); g_102++)
    { 
        uint32_t l_225 = 18446744073709551608UL;
        int32_t l_227[2][2] = {{0x7661964DL,0x7661964DL},{0x7661964DL,0x7661964DL}};
        int32_t l_230 = 0xCC681FB4L;
        int i, j;
        for (l_128.f1.f1 = 10; (l_128.f1.f1 > (-13)); l_128.f1.f1 = safe_sub_func_int32_t_s_s(l_128.f1.f1, 3))
        { 
            for (g_30 = 0; (g_30 <= 0); g_30 += 1)
            { 
                int i;
                return g_147[(g_30 + 1)];
            }
        }
        for (g_148 = 0; (g_148 == 6); g_148 = safe_add_func_uint16_t_u_u(g_148, 9))
        { 
            uint32_t l_229 = 1UL;
            int32_t l_232[1][5][3] = {{{0xBF858BC3L,(-8L),0xBF858BC3L},{(-6L),(-6L),(-6L)},{0xBF858BC3L,(-8L),0xBF858BC3L},{(-6L),(-6L),(-6L)},{0xBF858BC3L,(-8L),0xBF858BC3L}}};
            int i, j, k;
            l_232[0][2][2] &= (l_128.f0.f1 , ((safe_div_func_int16_t_s_s(5L, (((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((~(0x5489L ^ (((l_230 = (safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u((((l_228 = (l_227[1][1] = (l_226 = (l_101[3][1] ^= (safe_div_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_16.f0, l_174)), l_225)), 0x1308BAC569388203LL)), g_2[2])))))) , p_17) , g_50[4][0]), l_229)), g_50[3][0]))) <= 1L) | g_199))), l_231)), 1)) ^ l_225) | 3L))) < l_128.f0.f1));
            l_230 &= (l_226 != (safe_mul_func_int16_t_s_s((+(safe_add_func_int64_t_s_s(((~(-10L)) && (((safe_div_func_uint64_t_u_u(g_145, (safe_mod_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((((((safe_add_func_uint8_t_u_u(((((safe_mul_func_uint16_t_u_u(0x3963L, l_249[1][1][3])) & l_225) || p_16.f0) , 246UL), g_52)) != g_2[2]) & l_101[2][1]) ^ l_232[0][2][2]) | 0xAA4AL), p_15)) | p_15), l_227[1][0])))) != l_187) | g_50[4][0])), g_148))), g_149)));
            l_101[3][1] = (safe_rshift_func_uint16_t_u_s((g_52 , l_249[1][1][3]), 6));
        }
    }
    return l_101[2][0];
}



static int16_t  func_22(int32_t  p_23, uint32_t  p_24)
{ 
    uint64_t l_54 = 0x4174AA7FCF62392ELL;
    int32_t l_58 = 0xD407B094L;
    int32_t l_62[3];
    int i;
    for (i = 0; i < 3; i++)
        l_62[i] = 0xC7A8F60FL;
    l_58 = ((l_54 &= 0xD28A2181L) , ((g_55 , 0xBF2FEA27L) != (safe_div_func_uint64_t_u_u(p_24, g_2[0]))));
    g_61 = (safe_rshift_func_uint16_t_u_u(p_24, l_58));
    return l_62[1];
}



static uint8_t  func_27(union U6  p_28)
{ 
    union U2 l_29 = {{0x60L,0x491D0B6BL}};
    int32_t l_43 = 0L;
    int32_t l_44 = 0L;
    int8_t l_45 = (-1L);
    uint64_t l_51 = 1UL;
    g_30 = (l_29 , (-1L));
    for (p_28.f0 = 0; (p_28.f0 == 17); p_28.f0 = safe_add_func_int64_t_s_s(p_28.f0, 9))
    { 
        int8_t l_35 = 0L;
        int32_t l_42[1];
        int i;
        for (i = 0; i < 1; i++)
            l_42[i] = 0xBEFC7127L;
        l_42[0] &= (0L != ((g_52 = ((safe_div_func_int32_t_s_s((l_35 = p_28.f0), ((~(safe_div_func_int32_t_s_s(((g_50[4][0] = (g_49 = (g_46--))) == (g_41 = (p_28.f0 <= p_28.f0))), g_2[0]))) & l_51))) <= p_28.f0)) || g_50[4][0]));
    }
    return p_28.f0;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_18[i][j].f0, "g_18[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_50[i][j], "g_50[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_55.f0.f0, "g_55.f0.f0", print_hash_value);
    transparent_crc(g_55.f0.f1, "g_55.f0.f1", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_147[i], "g_147[i]", print_hash_value);

    }
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_257[i].f0.f0, "g_257[i].f0.f0", print_hash_value);
        transparent_crc(g_257[i].f0.f1, "g_257[i].f0.f1", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
