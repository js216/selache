// SPDX-License-Identifier: MIT
// cctest_csmith_b54fe4f7.c --- cctest case csmith_b54fe4f7 (csmith seed 3041912055)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd0615e94 */
/* @exp_ticks 0x4094 */

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

// Options:   -s 3041912055 -o /tmp/csmith_gen_t3c4a1sv/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
};

union U1 {
   int32_t  f0;
};


static int64_t g_12 = 0x4456E348CC3837ACLL;
static int64_t g_16 = 1L;
static int32_t g_41[4][5] = {{0x97B69E0DL,0x6B3257B0L,(-1L),(-1L),0x6B3257B0L},{0x97B69E0DL,0x6B3257B0L,(-1L),(-1L),0x6B3257B0L},{0x97B69E0DL,0x6B3257B0L,(-1L),(-1L),0x6B3257B0L},{0x97B69E0DL,0x6B3257B0L,(-1L),(-1L),0x6B3257B0L}};
static int64_t g_49 = 0xA1E05BF5EF7B6068LL;
static int8_t g_58 = 0xAAL;
static int32_t g_82 = 0x627841B2L;
static int32_t g_83 = 0x0CD1CB45L;
static int32_t g_95[2] = {0xDC093C88L,0xDC093C88L};
static int32_t g_99 = 0xB94DD076L;
static int32_t g_111 = (-1L);
static uint8_t g_177 = 3UL;
static struct S0 g_197[4][2][4] = {{{{-9L},{0xD867FBE6L},{-9L},{-1L}},{{0xA687BA43L},{0xFC118C14L},{-1L},{-1L}}},{{{0xD867FBE6L},{0xD867FBE6L},{-1L},{0xFC118C14L}},{{0xFC118C14L},{0xA687BA43L},{-1L},{0xA687BA43L}}},{{{0xD867FBE6L},{-9L},{-1L},{-1L}},{{0xA687BA43L},{-9L},{-9L},{0xA687BA43L}}},{{{0xFC118C14L},{-9L},{0x3BFDC2BFL},{-1L}},{{0xFC118C14L},{0x3BFDC2BFL},{0xFC118C14L},{-1L}}}};
static int8_t g_242 = 0L;



static const uint16_t  func_1(void);
static uint32_t  func_5(const uint32_t  p_6);
static const struct S0  func_20(uint16_t  p_21, uint32_t  p_22, uint8_t  p_23, int16_t  p_24, uint32_t  p_25);
static uint32_t  func_26(uint8_t  p_27, uint8_t  p_28, uint64_t  p_29);




static const uint16_t  func_1(void)
{ 
    uint8_t l_2 = 255UL;
    uint32_t l_15 = 0x41A80D1CL;
    int32_t l_17[1][2][1];
    int32_t l_243[3];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_17[i][j][k] = (-6L);
        }
    }
    for (i = 0; i < 3; i++)
        l_243[i] = 0xF746A580L;
    l_243[1] ^= (l_2 < (safe_div_func_uint32_t_u_u(func_5((l_17[0][0][0] ^= ((safe_div_func_uint64_t_u_u((g_16 ^= (safe_mod_func_int32_t_s_s((((((+(((0x00868BB4AAD9DDCELL | g_12) ^ (((((safe_sub_func_uint16_t_u_u(65535UL, (-9L))) != 0x378470EDL) >= 0xEA7EB8E136DC9922LL) & g_12) ^ l_2)) && g_12)) <= l_15) | g_12) != l_2) != 0x05F5L), 0x2A19820BL))), 0xBAF9EB11DE2A9078LL)) >= g_12))), l_2)));
    return g_111;
}



static uint32_t  func_5(const uint32_t  p_6)
{ 
    uint64_t l_32[4][3][1] = {{{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL}}};
    int32_t l_50 = 0x52C43DA4L;
    int i, j, k;
    for (g_12 = 0; (g_12 == (-22)); g_12 = safe_sub_func_uint8_t_u_u(g_12, 1))
    { 
        int32_t l_37 = 1L;
        int32_t l_40 = 0x18A84D23L;
        int32_t l_51 = 0x916DC91EL;
        struct S0 l_241 = {0L};
        l_241 = func_20(p_6, func_26(((safe_mul_func_int16_t_s_s((l_40 = ((l_32[2][1][0]--) < ((((safe_rshift_func_uint8_t_u_u(((l_37 = p_6) , p_6), 4)) <= (g_16 = (safe_rshift_func_int8_t_s_u(((-1L) || p_6), g_12)))) > 0UL) || 0x53L))), g_12)) && l_32[2][1][0]), g_12, p_6), l_50, p_6, l_51);
        return g_82;
    }
    return g_242;
}



static const struct S0  func_20(uint16_t  p_21, uint32_t  p_22, uint8_t  p_23, int16_t  p_24, uint32_t  p_25)
{ 
    uint64_t l_52[3][5];
    uint8_t l_55 = 255UL;
    const int32_t l_56 = 0xD44262C4L;
    int32_t l_57 = 0x6FA87DC7L;
    struct S0 l_60[2] = {{0x3AB57C19L},{0x3AB57C19L}};
    union U1 l_80 = {0x8E9B07D9L};
    int32_t l_121 = (-1L);
    int32_t l_219 = 0x184DBDFBL;
    int32_t l_220[1];
    uint8_t l_238 = 5UL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_52[i][j] = 0x15ACA64A9B53ABF6LL;
    }
    for (i = 0; i < 1; i++)
        l_220[i] = 6L;
    ++l_52[1][1];
    if ((l_52[1][2] ^ ((g_58 = (l_57 |= (l_55 & ((l_55 , (((((l_56 | 0x31L) > g_41[2][3]) == 1UL) , 0xF2C4EE0C605F7783LL) <= l_52[1][1])) >= g_41[0][4])))) || g_41[2][3])))
    { 
        struct S0 l_59 = {-1L};
        union U1 l_63 = {1L};
        l_59 = (l_59 , l_60[0]);
        if (((safe_lshift_func_int8_t_s_u(1L, (l_60[0].f0 = (0x1548EB87L | (l_59.f0 = ((l_63 , (safe_sub_func_uint64_t_u_u((g_58 != p_25), g_12))) , 4294967291UL)))))) && 0x87B6L))
        { 
            int64_t l_71[2];
            uint32_t l_81 = 9UL;
            int i;
            for (i = 0; i < 2; i++)
                l_71[i] = (-1L);
            g_83 = (g_82 |= (safe_sub_func_uint32_t_u_u((~(l_57 &= (((safe_lshift_func_uint8_t_u_u(l_55, l_71[1])) ^ (safe_lshift_func_int16_t_s_u(l_60[0].f0, 14))) != (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((l_80 , l_81), 7)) < l_71[0]), g_49)), p_23))))), 0x3749941BL)));
            if (g_12)
                goto lbl_88;
lbl_88:
            l_60[0].f0 &= (safe_mul_func_uint8_t_u_u(0x81L, (p_23 && ((safe_mod_func_int8_t_s_s((g_41[0][4] <= (((((l_56 >= 0x153E23B9L) , 0x33C15289768AFA15LL) & p_25) | 0x7B2AL) > 1L)), g_12)) , g_16))));
            if ((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_63.f0, ((g_95[0] = g_41[2][4]) || 18446744073709551615UL))), g_49)) & l_71[1]), 3)))
            { 
                int64_t l_98 = 0L;
                l_57 ^= ((g_99 &= ((((l_80.f0 == (safe_lshift_func_uint8_t_u_s(0x1BL, l_98))) | (g_16 = (0xF118E409L <= 0xF0715EADL))) | g_83) , p_21)) , g_95[0]);
                return l_59;
            }
            else
            { 
                uint64_t l_110 = 1UL;
                g_95[0] &= g_12;
                l_57 |= (safe_mod_func_uint32_t_u_u(((l_110 ^= (safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((((g_82 &= p_21) & (((safe_lshift_func_uint16_t_u_s((((g_58 , g_99) != 0x9DL) , p_23), g_49)) && 0x1584D3EBC0214765LL) || g_99)) != 4294967292UL) > g_95[0]), g_99)), p_24)), 0x0A9DL))) | l_59.f0), g_111));
            }
        }
        else
        { 
            return l_60[0];
        }
    }
    else
    { 
        l_57 = g_95[0];
    }
    if ((safe_mod_func_uint32_t_u_u((((l_57 = 0UL) > ((l_60[0].f0 >= (safe_mod_func_int32_t_s_s(((p_23--) && (l_55 <= ((safe_mul_func_uint8_t_u_u((!((l_121 = p_25) , g_41[2][3])), g_41[2][3])) ^ 0x0BL))), l_80.f0))) <= 1L)) < g_99), l_60[0].f0)))
    { 
        int64_t l_132 = 5L;
        int32_t l_134 = 0x48E638A3L;
        for (p_24 = 0; (p_24 <= (-4)); p_24 = safe_sub_func_uint16_t_u_u(p_24, 9))
        { 
            int32_t l_130 = 0xF2713C04L;
            const int32_t l_131 = 0x6BD8D7B0L;
            int32_t l_133 = 0xE66CDF1DL;
            l_134 ^= (l_133 &= (safe_lshift_func_uint16_t_u_s(((((l_121 , (l_130 = ((safe_rshift_func_int8_t_s_u(g_83, ((safe_sub_func_int16_t_s_s(0L, p_24)) <= g_95[1]))) > l_52[0][3]))) ^ l_131) == 251UL) >= p_21), l_132)));
        }
        for (g_99 = 0; (g_99 < (-14)); g_99 = safe_sub_func_int64_t_s_s(g_99, 2))
        { 
            const int32_t l_149 = 0xE48B9422L;
            uint32_t l_151 = 18446744073709551615UL;
            int32_t l_152 = (-1L);
            for (l_132 = (-11); (l_132 < (-11)); l_132 = safe_add_func_uint64_t_u_u(l_132, 6))
            { 
                const uint8_t l_150 = 0x82L;
                l_152 = (safe_div_func_int16_t_s_s((-2L), ((((((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(g_95[0], (0xA91CL >= ((g_111 ^= (((safe_div_func_int8_t_s_s(g_95[1], l_149)) >= l_150) > g_99)) <= l_150)))), 3)), 3)) <= 0xFCFEL) , (-3L)) || p_25) | l_151) , 0xAF64L)));
            }
        }
    }
    else
    { 
        uint16_t l_153[3];
        int32_t l_183 = (-1L);
        struct S0 l_185 = {0x9A33AE13L};
        int64_t l_217 = 0x9DA225ADD202CB91LL;
        int32_t l_218[2];
        int8_t l_226 = 2L;
        int i;
        for (i = 0; i < 3; i++)
            l_153[i] = 0x18DDL;
        for (i = 0; i < 2; i++)
            l_218[i] = 0xBB27ABABL;
        l_153[1] = g_12;
lbl_186:
        if ((safe_div_func_uint16_t_u_u((p_23 , (((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_24, (((safe_sub_func_int32_t_s_s((l_121 ^= g_83), ((((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_div_func_int16_t_s_s((((g_177 |= (~3L)) && 0x9428L) & g_95[0]), 0x38FEL)), 0x6C406D13B53BB8E8LL)), g_16)) && 0x4FDFL) <= l_153[2]) <= g_95[0]))) <= l_153[1]) & l_57))), g_111)), g_95[0])) || 18446744073709551611UL), g_41[2][3])), 2)) | 0xA764D50860F980C7LL), 0xF41E0092A32DB51ALL)) | 0x471CL) < g_49)), l_153[1])))
        { 
lbl_180:
            for (g_82 = 0; (g_82 != 28); g_82 = safe_add_func_uint16_t_u_u(g_82, 7))
            { 
                l_57 ^= (1UL < 0xF5L);
                if (l_80.f0)
                    goto lbl_180;
            }
            l_183 &= (safe_lshift_func_int16_t_s_s((p_21 | p_22), 9));
            if (g_83)
                goto lbl_184;
        }
        else
        { 
lbl_184:
            l_121 ^= p_24;
            l_185 = l_60[1];
            if (l_80.f0)
                goto lbl_186;
        }
        if ((g_111 = (safe_sub_func_uint8_t_u_u((g_12 == 1UL), (((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((p_21 , (l_183 , l_52[1][1])), l_185.f0)), l_183)), l_52[2][4])) >= g_83), l_55)) && g_83) == 0L)))))
        { 
            g_95[0] = (g_95[0] & ((g_197[1][0][0] = g_197[1][0][0]) , (l_80.f0 && (((0x3122096FE6C662CDLL ^ 6UL) | 4294967290UL) < l_185.f0))));
        }
        else
        { 
            struct S0 l_198 = {0xCDDDCD2AL};
            const struct S0 l_208 = {-1L};
            uint64_t l_209[1][5][5];
            int32_t l_215 = 0x659617E1L;
            int32_t l_216 = 0x73E08976L;
            int32_t l_223 = 1L;
            int32_t l_224 = 0xD3EC5925L;
            int32_t l_227 = 4L;
            int32_t l_230 = 3L;
            int32_t l_231[2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_209[i][j][k] = 18446744073709551615UL;
                }
            }
            for (i = 0; i < 2; i++)
                l_231[i] = 0x8BB71FC3L;
            l_198 = g_197[0][0][1];
            if ((safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s((0xAB531733L > (l_183 = (((((safe_sub_func_uint16_t_u_u(0x6B59L, ((!(safe_mul_func_int16_t_s_s(((g_197[1][0][0] = l_198) , ((l_198.f0 == 0x12BAL) , p_21)), g_12))) | g_41[3][1]))) && p_25) || (-10L)) ^ l_52[1][4]) | 0xE56EL))), p_21)), l_60[0].f0)))
            { 
                return l_208;
            }
            else
            { 
                int8_t l_212 = (-5L);
                int32_t l_213 = 0xA8696E9BL;
                int32_t l_214 = 5L;
                int32_t l_221 = 0xEF2EF93DL;
                int32_t l_222 = 1L;
                int32_t l_225 = 0x747864A0L;
                int32_t l_228 = 0L;
                int32_t l_229 = 0x652FCFA5L;
                int32_t l_232 = 0xE4B54E12L;
                int32_t l_233 = 0L;
                int32_t l_234 = 0x29C2D647L;
                int32_t l_235 = 0x59F90F6DL;
                int32_t l_236 = 0xBA823D4BL;
                int32_t l_237[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_237[i] = (-5L);
                l_209[0][1][3]--;
                l_238++;
            }
        }
    }
    return g_197[0][1][3];
}



static uint32_t  func_26(uint8_t  p_27, uint8_t  p_28, uint64_t  p_29)
{ 
    uint32_t l_42 = 0xA9320AF4L;
    int32_t l_47 = (-1L);
    int32_t l_48 = 1L;
    g_41[2][3] = p_28;
    l_48 = ((l_42 && (safe_sub_func_int16_t_s_s(g_16, (safe_sub_func_uint16_t_u_u(l_42, (l_47 = (0x57D884BBL > g_12))))))) < 0xFA8187147D86C3CELL);
    g_49 = l_42;
    return p_28;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_41[i][j], "g_41[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);

    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_197[i][j][k].f0, "g_197[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_242, "g_242", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
