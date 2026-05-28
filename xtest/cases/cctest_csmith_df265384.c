// SPDX-License-Identifier: MIT
// cctest_csmith_df265384.c --- cctest case csmith_df265384 (csmith seed 3743830916)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x45908ce3 */
/* @exp_ticks 0x3493 */

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

// Options:   -s 3743830916 -o /tmp/csmith_gen_4oj37fxi/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   uint64_t  f1;
   uint8_t  f2;
};

union U1 {
   int64_t  f0;
};

union U2 {
   uint32_t  f0;
};

union U3 {
   int8_t  f0;
};

union U4 {
   const uint64_t  f0;
   uint32_t  f1;
};


static const union U2 g_19 = {1UL};
static struct S0 g_29 = {0L,1UL,0x22L};
static struct S0 g_30 = {0x1C57L,0UL,0xCBL};
static union U3 g_42 = {-1L};
static int64_t g_78 = 0x6AE9E85C28EE66DBLL;
static uint64_t g_90 = 18446744073709551615UL;
static union U4 g_93 = {3UL};
static int64_t g_112 = (-5L);
static int8_t g_113 = 0x29L;
static uint32_t g_114 = 0xCAD787CCL;
static int32_t g_125[4] = {1L,1L,1L,1L};



static const uint32_t  func_1(void);
static int64_t  func_7(union U3  p_8, union U4  p_9, int32_t  p_10, int32_t  p_11, struct S0  p_12);
static union U3  func_13(struct S0  p_14, const union U2  p_15, union U1  p_16, int32_t  p_17);
static int32_t  func_23(int32_t  p_24, union U3  p_25, struct S0  p_26, struct S0  p_27);




static const uint32_t  func_1(void)
{ 
    uint16_t l_6[1];
    struct S0 l_18 = {0x13AFL,18446744073709551615UL,0x72L};
    union U1 l_20 = {0xF9F7C8B166C1932ELL};
    int16_t l_21 = 0xC23EL;
    int i;
    for (i = 0; i < 1; i++)
        l_6[i] = 65535UL;
    g_125[1] = (((safe_lshift_func_uint16_t_u_s(0x3707L, ((safe_mul_func_int16_t_s_s(l_6[0], l_6[0])) <= (((func_7(func_13(l_18, g_19, l_20, l_21), g_93, g_30.f0, l_18.f0, g_30) == l_20.f0) < l_21) , g_90)))) || l_6[0]) & 1UL);
    return l_18.f1;
}



static int64_t  func_7(union U3  p_8, union U4  p_9, int32_t  p_10, int32_t  p_11, struct S0  p_12)
{ 
    int8_t l_130[2];
    int32_t l_131 = 0x179B141CL;
    uint32_t l_132 = 1UL;
    int32_t l_139 = 5L;
    int32_t l_141 = 1L;
    int32_t l_142[2];
    uint8_t l_143 = 0xC2L;
    uint32_t l_166 = 1UL;
    int i;
    for (i = 0; i < 2; i++)
        l_130[i] = 0x95L;
    for (i = 0; i < 2; i++)
        l_142[i] = 0x6B8F8F02L;
lbl_148:
    l_132--;
    for (p_11 = 0; p_11 < 4; p_11 += 1)
    {
        g_125[p_11] = 0x495786F5L;
    }
    for (p_11 = 0; (p_11 >= 15); p_11 = safe_add_func_uint8_t_u_u(p_11, 5))
    { 
        int8_t l_137 = 0x71L;
        int32_t l_138 = 0x147413A7L;
        int32_t l_140[2][1];
        int16_t l_153 = (-1L);
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_140[i][j] = 0x3B7E8F33L;
        }
        l_143++;
        for (g_30.f1 = 26; (g_30.f1 > 34); ++g_30.f1)
        { 
            uint32_t l_158 = 5UL;
            int32_t l_161 = 0xDFB17796L;
            struct S0 l_165 = {0xC188L,0xF3FE561D20EA3011LL,1UL};
            if (g_30.f1)
                goto lbl_148;
            for (g_30.f2 = 1; (g_30.f2 < 32); g_30.f2 = safe_add_func_uint16_t_u_u(g_30.f2, 9))
            { 
                uint64_t l_162 = 0xB1F273F2F4379D8BLL;
                l_138 = ((safe_add_func_int64_t_s_s(l_153, (safe_lshift_func_int8_t_s_s(g_112, 3)))) < (((safe_div_func_uint32_t_u_u(l_158, p_9.f1)) >= l_140[0][0]) <= 18446744073709551615UL));
                p_10 = (g_125[0] = ((l_158 & 0x7E74L) < (safe_div_func_int16_t_s_s(0x703AL, (g_30.f0 = g_93.f1)))));
                l_162++;
            }
            l_165 = p_12;
        }
        --l_166;
    }
    return p_8.f0;
}



static union U3  func_13(struct S0  p_14, const union U2  p_15, union U1  p_16, int32_t  p_17)
{ 
    uint16_t l_22 = 0UL;
    union U3 l_28 = {0L};
    p_17 &= (1L > l_22);
    p_17 = func_23(p_14.f0, l_28, (g_29 = p_14), g_30);
    return g_42;
}



static int32_t  func_23(int32_t  p_24, union U3  p_25, struct S0  p_26, struct S0  p_27)
{ 
    struct S0 l_31[2][1] = {{{0x8940L,18446744073709551613UL,255UL}},{{0x8940L,18446744073709551613UL,255UL}}};
    int32_t l_68 = 0x23AA3630L;
    int32_t l_89 = (-7L);
    union U3 l_124 = {0x5BL};
    int i, j;
    if ((l_31[1][0] , ((safe_add_func_int64_t_s_s(g_29.f0, l_31[1][0].f2)) , (safe_unary_minus_func_uint64_t_u((safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(0UL, 0x37B78F18B01197BALL)), p_27.f1)))))))
    { 
        int8_t l_39[4];
        int8_t l_63 = (-1L);
        int32_t l_64 = 0x6215A4C4L;
        int i;
        for (i = 0; i < 4; i++)
            l_39[i] = 0xC8L;
        l_39[0] &= g_30.f1;
        for (g_29.f0 = 3; (g_29.f0 >= 0); g_29.f0 -= 1)
        { 
            int16_t l_40 = 0xD540L;
            struct S0 l_62 = {0L,0x2F506A54EE8E20E6LL,255UL};
            for (p_27.f1 = 0; (p_27.f1 <= 3); p_27.f1 += 1)
            { 
                struct S0 l_41 = {0x828EL,18446744073709551612UL,0UL};
                int i;
                l_40 = l_39[p_27.f1];
                l_41 = p_27;
            }
            for (p_26.f1 = 0; (p_26.f1 <= 3); p_26.f1 += 1)
            { 
                int8_t l_56 = 0x15L;
                l_64 &= (((g_42 , (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((((+(safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_56, ((safe_lshift_func_int16_t_s_s((!((safe_unary_minus_func_int64_t_s((!g_30.f0))) <= (((l_62 , 0UL) | 0xC0DD78FDL) > l_31[1][0].f2))), 15)) <= l_56))), 0xBB77L))) <= g_29.f2) >= l_31[1][0].f1), 5)) || l_56) | 0x94L), g_30.f0)), l_63)), l_31[1][0].f0))) ^ 0UL) ^ (-1L));
            }
        }
    }
    else
    { 
        uint8_t l_65 = 253UL;
        l_68 = ((p_26.f2 != l_65) , (safe_div_func_int16_t_s_s(2L, g_42.f0)));
        l_68 ^= ((~g_42.f0) >= (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(l_65, (p_26.f2 , ((safe_rshift_func_int16_t_s_u(g_29.f1, p_26.f2)) || 0L)))), p_27.f2)));
        g_90 = ((safe_rshift_func_uint16_t_u_s((g_78 = l_65), 12)) | (((safe_add_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((((g_29.f1 = ((p_25.f0 = ((safe_mod_func_int8_t_s_s((g_30.f0 ^ (p_26.f0 = ((l_65 | (safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u(g_30.f0, 1UL)), p_27.f0))) || l_31[1][0].f1))), p_26.f2)) > l_89)) != g_42.f0)) <= l_68) | g_19.f0), 6L)) || l_65), p_24)) & 0xD3E8DF325EC3E4F7LL) && g_29.f0));
    }
    l_68 = (safe_div_func_uint8_t_u_u(l_31[1][0].f0, (g_93 , ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((+(safe_mod_func_int16_t_s_s((((((!(((safe_div_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((++g_114) > 9L), (safe_lshift_func_int16_t_s_u(((l_31[1][0].f0 | 0x52CE29BEL) >= p_24), l_68)))) , g_29.f2), 0x1E3CL)) | l_31[1][0].f2) | (-1L))) | 0x45FF6818L) >= p_24) , g_93.f1) == p_26.f1), 1L))), p_24)) ^ g_113) , l_31[1][0].f1), l_68)), 0x8DEBL)) , 0x00A9L), 8)), p_27.f1)) || l_31[1][0].f1))));
    if ((g_125[3] &= (((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((g_112 != 0xDA9CL), (((((((g_29.f0 | ((+(l_124 , 0UL)) < 1UL)) && l_68) >= p_24) ^ p_27.f1) || p_27.f0) < l_124.f0) == g_93.f0))), 5)) && p_27.f0) == 0x4A07L)))
    { 
        struct S0 l_126 = {0L,0xDE8C290DB8D7F9BALL,255UL};
        l_126 = p_27;
    }
    else
    { 
        uint32_t l_127 = 0x8F413EFAL;
        ++l_127;
    }
    return l_31[1][0].f2;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
    transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
    transparent_crc(g_29.f2, "g_29.f2", print_hash_value);
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
    transparent_crc(g_30.f2, "g_30.f2", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    transparent_crc(g_93.f1, "g_93.f1", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_125[i], "g_125[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
