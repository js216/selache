// SPDX-License-Identifier: MIT
// cctest_csmith_c1de2e01.c --- cctest case csmith_c1de2e01 (csmith seed 3252563457)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfd2c2f9e */

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

// Options:   -s 3252563457 -o /tmp/csmith_gen_8so29tok/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_6 = (-1L);
static uint32_t g_58 = 0x74C19FD8L;
static int8_t g_59 = 8L;
static int8_t g_66 = 5L;
static uint32_t g_89 = 0x66BE38A8L;
static uint8_t g_111 = 252UL;
static uint16_t g_143 = 1UL;
static int32_t g_147[3] = {0x8D446D23L,0x8D446D23L,0x8D446D23L};
static int32_t g_149 = 1L;
static int8_t g_152[4][1] = {{(-4L)},{(-4L)},{(-4L)},{(-4L)}};
static uint32_t g_153 = 0xB0BCF91AL;
static int8_t g_203 = 0x5AL;
static uint32_t g_204 = 0UL;
static uint8_t g_246 = 0x04L;
static uint64_t g_255[1] = {0x1F5278872D5F37E4LL};



static int64_t  func_1(void);
static uint32_t  func_4(uint64_t  p_5);
static uint64_t  func_17(uint16_t  p_18);




static int64_t  func_1(void)
{ 
    int16_t l_293 = (-7L);
    int32_t l_294 = (-1L);
    l_294 = (safe_rshift_func_int16_t_s_s((func_4(g_6) < l_293), 4));
    return g_255[0];
}



static uint32_t  func_4(uint64_t  p_5)
{ 
    uint8_t l_7 = 0x39L;
    int32_t l_138 = 0xD6DE73C7L;
    int32_t l_148[2][2] = {{0x8505D4F8L,0x8505D4F8L},{0x8505D4F8L,0x8505D4F8L}};
    int16_t l_172[4] = {0x06A8L,0x06A8L,0x06A8L,0x06A8L};
    int32_t l_195 = 0x97688CC6L;
    int16_t l_225 = 1L;
    uint16_t l_232 = 0x89D0L;
    int32_t l_267 = 0xCB5E7A75L;
    int i, j;
lbl_284:
    if (((g_6 , g_6) && ((((l_7 , 0xD2L) & g_6) == p_5) & p_5)))
    { 
        int16_t l_11[2][3] = {{0x8AFCL,0x8AFCL,0x8AFCL},{7L,7L,7L}};
        int32_t l_115 = 0L;
        uint8_t l_119 = 0xB2L;
        int32_t l_150 = 0xD5B22E30L;
        int32_t l_151 = 1L;
        uint32_t l_185 = 0UL;
        int i, j;
lbl_233:
        if ((((((!((safe_mul_func_uint32_t_u_u(l_11[1][1], (((((((((l_7 < 4L) , p_5) , g_6) , 0xF8B4L) , l_7) > g_6) | 0x0FAEL) && g_6) != p_5))) | g_6)) != g_6) || 0x4257L) , 0xEE56L) == p_5))
        { 
            int32_t l_23[2][1];
            int64_t l_135 = 0x4C663587EC08A347LL;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_23[i][j] = 0L;
            }
            if (((safe_rshift_func_uint16_t_u_s(65535UL, ((safe_mod_func_uint32_t_u_u(((~func_17((l_23[0][0] = (safe_div_func_uint8_t_u_u(0xBCL, (safe_add_func_int64_t_s_s((g_6 > 0x0B6FB96F37D437F1LL), p_5))))))) >= g_59), 0x583FDF71L)) , 8L))) , p_5))
            { 
                uint32_t l_114 = 4294967290UL;
                int32_t l_116 = 1L;
                l_116 ^= ((((g_111 = (p_5 != (((l_115 ^= ((((p_5 <= (p_5 || g_111)) == l_114) <= 6L) , l_11[0][0])) < 8L) , l_114))) <= 0xD0L) & 0xFEA2219E070DDB65LL) && 0x3225053E2D80D5DALL);
                return g_59;
            }
            else
            { 
                uint32_t l_122[4][2];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_122[i][j] = 0UL;
                }
                g_6 = ((safe_mul_func_uint16_t_u_u(((l_115 ^= ((((l_119 <= (safe_mod_func_uint8_t_u_u(2UL, (((l_122[2][0] , 0x6BF143A6L) , g_89) | g_6)))) , g_89) != p_5) > l_23[0][0])) != l_122[0][0]), 1UL)) ^ 0xC049AA43L);
                g_6 = ((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((g_89 > (0x0A5B80262EE7B9A5LL && g_6)) == 5UL), 1L)), 0xC42DAAAAF263C58ALL)), l_11[0][2])), l_23[1][0])) != l_122[2][0]), p_5)), l_135)) >= 0UL) , 0x6986L) == l_122[2][0]);
            }
        }
        else
        { 
            int64_t l_140 = (-10L);
            int32_t l_146 = 0xE29BDB73L;
            int32_t l_162 = 0xE0A404EEL;
            for (p_5 = 0; (p_5 >= 59); ++p_5)
            { 
                int32_t l_139[1][3];
                int32_t l_141 = 0x01E9BB60L;
                int32_t l_142 = 0x037D67D2L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_139[i][j] = (-2L);
                }
                --g_143;
                --g_153;
                g_6 |= (((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((g_111--), 7)) || (l_146 = (safe_add_func_uint16_t_u_u(p_5, (l_146 && (((safe_unary_minus_func_uint64_t_u((safe_mod_func_uint64_t_u_u((((safe_add_func_int64_t_s_s((((g_111--) >= g_152[3][0]) <= g_58), 0x38440B9AA1BD0BA1LL)) | l_148[0][1]) > 0x1705L), 0xA484DF502F1E5DE6LL)))) <= 0xC55C7163L) ^ g_152[2][0])))))), g_89)), g_147[1])) >= p_5) & p_5);
            }
            for (g_149 = 0; (g_149 <= 1); g_149 += 1)
            { 
                uint8_t l_176 = 0x39L;
                g_6 = ((+(((((((((p_5 == (((l_11[1][0] , (p_5 ^ 0x42D7022298E17D4CLL)) < g_147[2]) & g_66)) < l_176) >= l_176) & 0UL) && 0x742AFDE751A909BFLL) != g_153) , 0UL) > l_176) == p_5)) != p_5);
            }
            for (l_138 = (-23); (l_138 > (-28)); l_138 = safe_sub_func_uint32_t_u_u(l_138, 7))
            { 
                return g_153;
            }
        }
        for (g_66 = (-15); (g_66 == 3); ++g_66)
        { 
            int8_t l_196 = 0x2EL;
            uint16_t l_221 = 0x0FEEL;
            int32_t l_222 = 0L;
            l_148[1][1] = ((g_143 |= (safe_sub_func_uint8_t_u_u(p_5, p_5))) , ((safe_rshift_func_uint8_t_u_u(l_185, 0)) > l_185));
            if ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((!(((p_5 = g_89) && (((safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s((l_115 = l_172[2]), p_5)), 0xF79A1B8C437238D2LL)) | g_66) == l_195)) , l_196)), 6)) >= l_185), 0xDDL)))
            { 
                uint32_t l_197[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_197[i][j] = 0xE7FD8839L;
                }
                l_197[2][0]--;
            }
            else
            { 
                int64_t l_200[1][1];
                int32_t l_201 = 0xE08C720AL;
                int32_t l_202 = 9L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_200[i][j] = 0x1DE3E92144345D73LL;
                }
                --g_204;
                if (p_5)
                    break;
                if (l_119)
                    goto lbl_284;
                l_195 = (((l_138 = (g_149 & (safe_mod_func_uint64_t_u_u(((l_222 |= ((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((9L <= (l_201 = (safe_mul_func_uint16_t_u_u((((((safe_add_func_int8_t_s_s((l_148[1][1] = (safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s(1L, p_5)), l_221))), l_11[1][1])) < l_196) <= p_5) < p_5) >= 0x4A33C6001B998DD8LL), g_147[2])))), p_5)), p_5)) && 0UL)) | g_66), g_58)))) , 0x2B969A7EL) && 9UL);
            }
            if ((l_138 = ((((((safe_rshift_func_int8_t_s_u((-1L), p_5)) == (l_148[0][1] = (l_151 = l_172[0]))) <= l_225) && g_152[0][0]) || l_225) <= 1UL)))
            { 
                int64_t l_231 = 0x9160EC46614FEFD1LL;
                l_151 = (((safe_unary_minus_func_uint32_t_u(p_5)) , (safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((l_232 = (p_5 != (l_231 <= p_5))) , g_111), l_231)), 0x2636EEB13F110F92LL))) <= l_231);
                if (l_222)
                    goto lbl_233;
            }
            else
            { 
                uint32_t l_236 = 0UL;
                l_150 ^= (safe_lshift_func_uint8_t_u_s(0x7AL, 0));
                l_236 = p_5;
                l_222 ^= (safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((p_5 ^ ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(p_5)), ((safe_add_func_int64_t_s_s(((((-2L) > 7UL) < g_246) || g_111), g_203)) >= l_119))) >= p_5)) != l_221), g_152[2][0])), 0x3657E3DCAB47AAE7LL));
            }
        }
    }
    else
    { 
        uint16_t l_264 = 0UL;
        int32_t l_268 = (-8L);
        int32_t l_277 = 0x3DAFCC2CL;
        for (l_195 = 0; (l_195 <= 2); l_195 += 1)
        { 
            int32_t l_263 = 0x3D015D56L;
            const int8_t l_282 = 5L;
            int i;
            if ((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(65535UL, g_147[l_195])), (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((((((g_147[l_195] || p_5) == p_5) > g_255[0]) >= g_147[l_195]) <= g_153), p_5)), 0x1EL)))))
            { 
                uint32_t l_262 = 0x0C3EE06EL;
                g_6 = ((((-10L) != (safe_mod_func_uint64_t_u_u(((g_153 = (l_148[0][1] = 0x2FE7324FL)) != (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((l_262 , g_255[0]), 0xF0A8L)), p_5))), g_152[3][0]))) != 0x7C3D4A47L) || g_203);
                return g_147[l_195];
            }
            else
            { 
                --l_264;
                l_268 = l_267;
            }
            l_277 = (safe_mod_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((0xB29AFF89D8E522D6LL & (safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((0L & ((l_148[1][1] &= (((p_5 <= l_268) <= p_5) | l_232)) , 0xA239L)), g_204)), 0xDCDCL))), 0xEE0DL)) && (-6L)) <= g_149), g_147[2]));
            for (g_153 = 0; (g_153 <= 0); g_153 += 1)
            { 
                uint32_t l_283 = 3UL;
                l_283 |= (((g_204 < (safe_mod_func_uint16_t_u_u((l_268 && ((((((((((((safe_rshift_func_int8_t_s_s(p_5, 4)) | p_5) <= l_282) , g_89) , g_255[0]) , l_264) || g_89) && l_172[2]) == g_66) ^ 0xECL) , p_5) ^ 0xF0L)), 1UL))) <= p_5) < 1UL);
            }
        }
    }
    for (g_59 = 1; (g_59 >= 0); g_59 -= 1)
    { 
        int32_t l_292 = (-1L);
        int i;
        l_138 |= (((safe_add_func_int64_t_s_s((safe_unary_minus_func_int8_t_s((g_203 ^= ((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_147[(g_59 + 1)], (l_292 = (l_267 = 0x8AL)))), (g_66 >= l_172[2]))) <= p_5)))), g_147[(g_59 + 1)])) > g_66) | 4294967291UL);
        return l_195;
    }
    l_195 ^= 0x5DAC8414L;
    return p_5;
}



static uint64_t  func_17(uint16_t  p_18)
{ 
    int64_t l_44[2][3] = {{0L,0L,0x55A5481F04FECCDFLL},{0L,0L,0x55A5481F04FECCDFLL}};
    int32_t l_45 = 0xB5841EC3L;
    int32_t l_60 = 0L;
    int i, j;
    for (p_18 = (-16); (p_18 == 53); p_18++)
    { 
        int32_t l_28 = (-1L);
        l_28 = ((safe_mod_func_int32_t_s_s(l_28, ((g_6 < (safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(251UL, p_18)), l_28))) , g_6))) | 253UL);
    }
    if ((safe_mul_func_int8_t_s_s(6L, g_6)))
    { 
        int16_t l_35[2];
        int32_t l_43 = 0x4D1CD050L;
        int32_t l_47 = 0x6914F091L;
        uint64_t l_49 = 0UL;
        int i;
        for (i = 0; i < 2; i++)
            l_35[i] = (-7L);
        for (p_18 = 0; (p_18 <= 1); p_18 += 1)
        { 
            int32_t l_46 = 1L;
            int32_t l_48 = 0xFF2B9ACCL;
            int i;
            l_45 = ((safe_lshift_func_int8_t_s_s(l_35[p_18], ((((((safe_div_func_int32_t_s_s((!(((((safe_lshift_func_uint8_t_u_u((l_43 = (l_35[p_18] && 0xE525B78CL)), 4)) | p_18) == l_44[0][2]) & p_18) <= g_6)), g_6)) || l_35[p_18]) < 1UL) < 253UL) , p_18) > g_6))) & 0x3070B7B20295D0C5LL);
            l_49++;
        }
        if ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((0xA474477D717F6C07LL ^ 8UL), ((g_6 || 0x2F0819D5A33B115ELL) < g_6))) >= g_58), p_18)) > p_18), g_58)))
        { 
            uint16_t l_61 = 1UL;
            ++l_61;
        }
        else
        { 
            l_45 = ((((safe_add_func_int64_t_s_s((g_66 |= p_18), (l_43 ^= ((p_18 , (0x02A83C5EL | 0UL)) & g_59)))) >= g_58) > 0UL) >= 0xBBD03C5CEC10C1A6LL);
            for (p_18 = 0; (p_18 < 26); ++p_18)
            { 
                int8_t l_73 = 0L;
                int32_t l_88 = 0x884FD301L;
                int32_t l_90 = (-7L);
                int32_t l_91 = (-1L);
                l_91 = (safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_73, 8)), (safe_add_func_int16_t_s_s(g_6, ((((l_90 |= (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((g_89 = (safe_add_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((((l_88 = ((safe_mod_func_int16_t_s_s(0xCF7AL, g_66)) || g_66)) != p_18) <= 0x3CL) | l_35[0]), l_45)), p_18)) != 9UL) ^ g_66), 4L))), 1UL)), 6))) ^ 1UL) != (-9L)) | p_18)))));
            }
        }
        return l_43;
    }
    else
    { 
        uint8_t l_96[1];
        int32_t l_107 = 0x284EEC12L;
        int i;
        for (i = 0; i < 1; i++)
            l_96[i] = 0xFCL;
        l_45 |= 0L;
        for (g_89 = 0; (g_89 <= 34); g_89 = safe_add_func_uint8_t_u_u(g_89, 4))
        { 
            int8_t l_106[1];
            int16_t l_109[4] = {0L,0L,0L,0L};
            int i;
            for (i = 0; i < 1; i++)
                l_106[i] = 7L;
            for (l_60 = (-15); (l_60 != 23); ++l_60)
            { 
                ++l_96[0];
            }
            for (g_66 = 0; (g_66 != 20); ++g_66)
            { 
                int16_t l_105 = 3L;
                int32_t l_108 = (-10L);
                int32_t l_110 = 0x227FEFF1L;
                l_107 = (((safe_sub_func_uint8_t_u_u(p_18, ((((safe_rshift_func_uint8_t_u_u(((g_66 ^ (((l_45 , 249UL) && g_59) & 0xB780A7C5L)) | l_96[0]), l_105)) > p_18) || 0x660488F6L) ^ 0x91L))) != l_105) == l_106[0]);
                --g_111;
            }
        }
    }
    return g_66;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_147[i], "g_147[i]", print_hash_value);

    }
    transparent_crc(g_149, "g_149", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_152[i][j], "g_152[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_255[i], "g_255[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
