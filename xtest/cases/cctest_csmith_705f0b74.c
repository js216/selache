// SPDX-License-Identifier: MIT
// cctest_csmith_705f0b74.c --- cctest case csmith_705f0b74 (csmith seed 1885277044)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4608e0c0 */
/* @exp_ticks 0x5de */

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

// Options:   -s 1885277044 -o /home/agent1/fast_data/tmp/csmith_gen_4v9rkgib/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
};

union U1 {
   uint64_t  f0;
   int32_t  f1;
   uint8_t  f2;
};


static uint32_t g_13 = 0UL;
static struct S0 g_48 = {5UL};
static union U1 g_79 = {0x0CE775B4C718FE3BLL};
static uint32_t g_152 = 1UL;
static int32_t g_155 = 0L;
static int32_t g_161 = 0xF1804477L;
static int16_t g_163[1] = {0x9D0DL};
static uint64_t g_164 = 18446744073709551615UL;
static uint32_t g_173 = 0UL;
static uint32_t g_197[5][3] = {{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL}};
static int32_t g_234 = 0xBB8DE72FL;
static int8_t g_235 = 0xD4L;
static int64_t g_236 = (-3L);
static int32_t g_237 = 0x8A1C93EEL;
static int32_t g_238 = 0x12841510L;
static uint64_t g_239 = 0xA5C68B7B37179735LL;



static uint16_t  func_1(void);
static int32_t  func_2(struct S0  p_3, uint8_t  p_4);
static struct S0  func_5(uint8_t  p_6, uint32_t  p_7, uint8_t  p_8, const uint64_t  p_9);
static int8_t  func_10(int16_t  p_11, int32_t  p_12);




static uint16_t  func_1(void)
{ 
    uint16_t l_14 = 0UL;
    int32_t l_228 = 1L;
    int32_t l_229 = 0x2AAD6875L;
    int32_t l_230 = 0x2E25FB50L;
    int32_t l_231 = 0xAA406F6BL;
    int32_t l_232 = 1L;
    int32_t l_233[5];
    int i;
    for (i = 0; i < 5; i++)
        l_233[i] = (-7L);
    l_228 &= func_2(func_5((func_10(g_13, l_14) < 5L), l_14, g_13, l_14), l_14);
    g_239++;
    return g_163[0];
}



static int32_t  func_2(struct S0  p_3, uint8_t  p_4)
{ 
    uint32_t l_198 = 0x73A9DBB0L;
    int32_t l_223 = 0x80A4BD07L;
    int32_t l_225 = (-1L);
    uint64_t l_227 = 0xFFC6FEF38C781C0ELL;
    for (p_3.f0 = 0; (p_3.f0 <= 0); p_3.f0 += 1)
    { 
        struct S0 l_196 = {0x93L};
        int64_t l_203 = (-1L);
        for (g_152 = 0; (g_152 <= 0); g_152 += 1)
        { 
            int32_t l_224 = 0L;
            int32_t l_226 = 0x7CAA2243L;
            int i;
            for (g_13 = 0; (g_13 <= 0); g_13 += 1)
            { 
                l_196 = p_3;
            }
            l_198 = ((g_163[p_3.f0] >= 7UL) | ((18446744073709551614UL == p_4) < g_197[2][0]));
            if ((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((l_203 ^ ((((((safe_sub_func_uint32_t_u_u((((safe_div_func_int32_t_s_s((((p_4 != (safe_div_func_uint64_t_u_u((((safe_sub_func_uint32_t_u_u(((g_163[0] == p_4) ^ 0xAE54L), g_173)) != l_196.f0) , g_173), g_163[p_3.f0]))) == 0x3569B4585397BB59LL) <= g_163[0]), 0xBD6EBF7BL)) ^ 0x1CA70F6CL) & l_198), 0x1C7B1A2CL)) || g_161) , 0x03DFL) | 0x0440L) , 4294967291UL) >= g_163[p_3.f0])), 0x16L)), 2)))
            { 
                int32_t l_222 = 0xAA8155E1L;
                l_226 ^= (l_203 <= (l_225 = (g_161 &= (l_224 = (safe_sub_func_int32_t_s_s((0x1F8A238CL == (safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((((l_223 = (g_155 > ((safe_add_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(((l_222 , 8L) >= l_196.f0), g_152)) && g_152) > p_3.f0) != l_198), g_173)) >= p_4))) < g_164) && g_48.f0) | 0x38E0F7AC18CAC262LL), 0x6D7AE1D0L)), g_163[p_3.f0]))), g_48.f0))))));
                if (l_227)
                    break;
            }
            else
            { 
                return l_196.f0;
            }
        }
    }
    return p_4;
}



static struct S0  func_5(uint8_t  p_6, uint32_t  p_7, uint8_t  p_8, const uint64_t  p_9)
{ 
    uint32_t l_35[3][5][3] = {{{0x99643747L,4UL,0xA8FAD749L},{0x99643747L,0x99643747L,3UL},{0x4FA72D50L,4UL,3UL},{4UL,0xCA8C98AAL,0xA8FAD749L},{0x4FA72D50L,0xCA8C98AAL,1UL}},{{0x99643747L,4UL,0xA8FAD749L},{0x99643747L,0x99643747L,3UL},{0x4FA72D50L,4UL,3UL},{4UL,0xCA8C98AAL,0xA8FAD749L},{0x4FA72D50L,0xCA8C98AAL,1UL}},{{18446744073709551608UL,18446744073709551613UL,0xCA8C98AAL},{18446744073709551608UL,18446744073709551608UL,0x4FA72D50L},{18446744073709551615UL,18446744073709551613UL,0x4FA72D50L},{18446744073709551613UL,18446744073709551615UL,0xCA8C98AAL},{18446744073709551615UL,18446744073709551615UL,0x6D7D0454L}}};
    int32_t l_36[3][5] = {{7L,(-1L),7L,(-1L),7L},{0x352601C8L,0x352601C8L,0x352601C8L,0x352601C8L,0x352601C8L},{7L,(-1L),7L,(-1L),7L}};
    int64_t l_46 = (-7L);
    uint8_t l_57 = 0xB0L;
    struct S0 l_63 = {247UL};
    uint16_t l_69 = 0x2BEBL;
    const int8_t l_99 = 0x36L;
    uint32_t l_123 = 0xA1D3BC2FL;
    int32_t l_156 = 0x55739FF1L;
    int8_t l_158[1];
    int64_t l_162 = 0xE078D04C5E4B6027LL;
    struct S0 l_195[2] = {{0xA8L},{0xA8L}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_158[i] = 0x23L;
    l_36[2][1] = (l_35[1][1][2] ^= 0L);
    for (g_13 = 0; (g_13 <= 2); g_13 += 1)
    { 
        uint32_t l_45 = 0x68D270C1L;
        struct S0 l_62[2] = {{1UL},{1UL}};
        union U1 l_80 = {0xEACC2001377BC7A9LL};
        int32_t l_115 = 0x4D78B1D6L;
        int64_t l_122 = 0xAEA95DD02E5D8015LL;
        uint32_t l_167[1][4][5] = {{{0x37BB743FL,4294967294UL,4294967294UL,0x37BB743FL,4294967294UL},{0x95E8C976L,0x95E8C976L,0UL,0x95E8C976L,0x95E8C976L},{4294967294UL,0x37BB743FL,4294967294UL,4294967294UL,0x37BB743FL},{0x95E8C976L,0xBEBE6BB7L,0xBEBE6BB7L,0x95E8C976L,0xBEBE6BB7L}}};
        int i, j, k;
    }
    g_155 |= ((g_79.f2 & (safe_lshift_func_int8_t_s_u(((safe_sub_func_int64_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(0x9DL, 3)), (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((18446744073709551613UL == (+(safe_rshift_func_uint8_t_u_u(((safe_mul_func_int64_t_s_s(0xDD64F9C2C93F04C9LL, 0UL)) < 1L), l_63.f0)))), g_79.f2)) <= g_79.f2), g_161)), l_35[1][1][2])))), p_7)) > 1L), p_9))) != l_35[2][1][1]);
    return l_195[0];
}



static int8_t  func_10(int16_t  p_11, int32_t  p_12)
{ 
    int32_t l_31 = 0x7F191253L;
    int32_t l_32 = 0xA7B5CF1CL;
    int64_t l_33 = (-2L);
    int8_t l_34 = 1L;
    l_31 = (safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint64_t_u(((g_13 <= (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((g_13 , (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((-1L), ((((l_32 ^= l_31) >= l_33) >= p_12) , p_12))), g_13))), p_11)), g_13))) && l_34))))), l_31)), 0x67120DD9L)), 3));
    return p_12;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_163[i], "g_163[i]", print_hash_value);

    }
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_197[i][j], "g_197[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
