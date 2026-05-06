// SPDX-License-Identifier: MIT
// cctest_csmith_20eca0eb.c --- cctest case csmith_20eca0eb (csmith seed 552378603)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8cde492e */

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

// Options:   -s 552378603 -o /tmp/csmith_gen_sgh5_03a/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint16_t g_14[1][3] = {{0x443AL,0x443AL,0x443AL}};
static uint8_t g_17 = 0xDAL;
static uint8_t g_55 = 0x92L;
static int32_t g_74 = 0L;
static uint64_t g_75 = 18446744073709551606UL;
static int64_t g_87[1][2] = {{8L,8L}};
static int8_t g_108 = 0xCCL;
static uint32_t g_119 = 0xDD9CFB06L;
static int32_t g_129 = 0x30B00257L;
static uint16_t g_145 = 1UL;
static uint64_t g_150 = 18446744073709551615UL;
static int32_t g_163 = 1L;
static uint16_t g_165[2][2] = {{1UL,1UL},{1UL,1UL}};
static uint32_t g_168[4] = {0xB6653C33L,0xB6653C33L,0xB6653C33L,0xB6653C33L};
static uint64_t g_172[2][1] = {{0UL},{0UL}};
static int32_t g_173 = 0xC9B9BB54L;



static int64_t  func_1(void);
static int16_t  func_7(uint64_t  p_8, int16_t  p_9, int64_t  p_10, int8_t  p_11, uint32_t  p_12);
static uint64_t  func_28(uint16_t  p_29, uint8_t  p_30);




static int64_t  func_1(void)
{ 
    uint32_t l_2[2][4] = {{0x27689351L,3UL,0x27689351L,0x27689351L},{3UL,3UL,0xE2236432L,3UL}};
    int32_t l_13 = 0L;
    int32_t l_135 = 0xB6E0F727L;
    int i, j;
lbl_132:
    if ((l_2[1][2] , (l_13 = ((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(func_7((g_14[0][0]--), l_2[1][2], ((0x282DL >= 1UL) != 0xF609B2B534DE6F88LL), g_17, g_17), g_119)), l_2[1][1])) <= g_119))))
    { 
        uint32_t l_127 = 4294967295UL;
        for (g_74 = 0; (g_74 >= 0); g_74 -= 1)
        { 
            uint32_t l_128[1];
            int i;
            for (i = 0; i < 1; i++)
                l_128[i] = 1UL;
            for (g_119 = 0; (g_119 <= 1); g_119 += 1)
            { 
                int i, j;
                g_129 = (safe_lshift_func_int8_t_s_u((((((g_87[g_74][g_119] > l_2[g_74][(g_74 + 3)]) > (safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u((safe_add_func_int16_t_s_s((g_14[0][0] | l_127), g_14[0][0])))) , l_128[0]), 65528UL))) ^ 0x79L) , g_87[g_74][g_119]) && l_2[1][1]), 4));
                g_129 = 1L;
            }
            for (g_55 = 0; (g_55 <= 0); g_55 += 1)
            { 
                uint8_t l_130[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_130[i] = 0UL;
                l_130[1] |= (g_129 &= 0x6E3A478EL);
                if (l_127)
                    goto lbl_132;
            }
        }
        g_129 = (~0x05EA4B61L);
    }
    else
    { 
        g_129 = g_14[0][2];
    }
    l_135 &= (l_13 = (((((5L ^ (((safe_rshift_func_uint16_t_u_s(g_74, 14)) , 6L) , 8L)) == l_2[1][1]) == g_87[0][0]) , 0x5E4FDE8EL) , g_14[0][0]));
    for (g_129 = 1; (g_129 >= 0); g_129 -= 1)
    { 
        int8_t l_136 = 0x10L;
        int32_t l_137 = 7L;
        for (g_74 = 0; (g_74 <= 0); g_74 += 1)
        { 
            int i, j;
            l_136 = l_2[g_74][(g_74 + 3)];
            for (l_13 = 1; (l_13 >= 0); l_13 -= 1)
            { 
                int i, j;
                l_137 = l_2[g_74][(g_74 + 2)];
                g_145 = ((!(safe_mod_func_int16_t_s_s((l_135 = 0xE917L), (l_2[l_13][(g_129 + 2)] , (safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s((l_2[l_13][l_13] | g_14[0][0]), g_108)), 0xA0L)))))) >= g_119);
                return g_87[0][1];
            }
        }
        for (g_75 = 0; (g_75 <= 0); g_75 += 1)
        { 
            int8_t l_156 = 0x07L;
            int32_t l_157 = 0x62525F0BL;
            for (g_17 = 0; (g_17 <= 1); g_17 += 1)
            { 
                int i, j;
                l_137 &= (l_2[g_129][(g_17 + 2)] >= ((g_55 , (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((g_150 &= l_13), g_87[0][0])), 9))) , 0UL));
                l_157 = (+(g_108 & ((((safe_mod_func_uint64_t_u_u(g_14[0][1], (safe_sub_func_uint64_t_u_u(g_17, 0x411D375A9F46BED5LL)))) == g_17) <= l_156) > 0x027467C1911BFE60LL)));
            }
            for (l_136 = 0; (l_136 <= 1); l_136 += 1)
            { 
                int16_t l_162 = (-1L);
                int32_t l_164 = 0x75658741L;
                l_13 = (safe_mod_func_int64_t_s_s((0xDE25L == (l_137 ^= (0x2DL >= ((g_14[0][2]--) <= g_87[0][1])))), 0x796892AB80D1030ELL));
                if (g_14[0][0])
                    break;
                ++g_165[1][1];
            }
            for (l_135 = 1; (l_135 >= 0); l_135 -= 1)
            { 
                int32_t l_171 = 1L;
                g_168[2] = 0x5E2A794EL;
                g_173 = ((safe_lshift_func_uint16_t_u_s(0x3C64L, g_165[1][1])) && (g_172[1][0] = l_171));
            }
        }
    }
    return l_2[1][2];
}



static int16_t  func_7(uint64_t  p_8, int16_t  p_9, int64_t  p_10, int8_t  p_11, uint32_t  p_12)
{ 
    int64_t l_20 = 0x2EF51AE9A07B3049LL;
    int32_t l_21 = 0xCD3BED16L;
    uint16_t l_36 = 6UL;
    uint8_t l_116 = 249UL;
    if ((l_21 = (18446744073709551614UL & ((safe_mod_func_int8_t_s_s((l_20 > (-1L)), 0x34L)) > p_11))))
    { 
        uint32_t l_64 = 4294967290UL;
        int32_t l_65 = (-1L);
        for (p_12 = 15; (p_12 <= 12); p_12 = safe_sub_func_uint8_t_u_u(p_12, 4))
        { 
            int32_t l_41[2][2];
            int32_t l_56 = 0xEAF0AB59L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_41[i][j] = (-1L);
            }
            for (p_8 = (-16); (p_8 <= 59); p_8 = safe_add_func_uint16_t_u_u(p_8, 6))
            { 
                uint16_t l_31 = 0xBB24L;
                l_21 = (safe_div_func_uint64_t_u_u(l_20, func_28((l_31++), (safe_rshift_func_int16_t_s_u((0x8DL >= l_36), p_8)))));
            }
            if ((5L > ((safe_add_func_int16_t_s_s(0x0F95L, (0x83FB18BA70A1EE31LL >= 6UL))) | 0x524BE18AL)))
            { 
                return p_12;
            }
            else
            { 
                uint8_t l_44[3][3] = {{0xEAL,1UL,0xEAL},{1UL,1UL,1UL},{0xEAL,1UL,0xEAL}};
                int32_t l_45 = 1L;
                int i, j;
                if (l_41[1][0])
                    break;
                l_45 = (safe_lshift_func_uint16_t_u_s((l_44[1][0] = p_12), 2));
            }
            for (l_36 = 0; (l_36 >= 58); l_36 = safe_add_func_uint32_t_u_u(l_36, 8))
            { 
                int32_t l_48[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_48[i] = (-3L);
                g_55 = ((l_48[0] = 6L) > ((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((p_8 > ((safe_add_func_uint8_t_u_u(g_14[0][0], 0x91L)) , 1L)) , p_9), g_14[0][0])), 1UL)) == (-1L)));
                l_56 = (-1L);
            }
        }
        l_65 = ((safe_unary_minus_func_uint8_t_u((p_10 , (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(p_8, (p_8 , g_14[0][0]))), l_64)), 0L))))) <= l_36);
        for (l_36 = 21; (l_36 == 23); l_36 = safe_add_func_uint32_t_u_u(l_36, 9))
        { 
            return p_12;
        }
    }
    else
    { 
        uint8_t l_85[4][3] = {{0xAAL,0xAAL,0xAAL},{2UL,2UL,2UL},{0xAAL,0xAAL,0xAAL},{2UL,2UL,2UL}};
        int32_t l_96[2];
        int32_t l_115 = 4L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_96[i] = 6L;
lbl_111:
        if ((safe_div_func_uint64_t_u_u(p_12, (safe_lshift_func_uint8_t_u_u(g_14[0][0], (g_17 , 0x4DL))))))
        { 
            for (l_21 = (-26); (l_21 <= (-12)); l_21 = safe_add_func_uint32_t_u_u(l_21, 5))
            { 
                ++g_75;
            }
        }
        else
        { 
            int32_t l_86 = 0L;
            g_87[0][1] = (safe_add_func_int8_t_s_s(((-7L) == l_21), ((((((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_mod_func_int64_t_s_s((p_10 &= (((((p_11 & l_85[0][2]) >= 250UL) & g_74) & l_85[1][1]) , l_86)), g_17)) || g_17))), l_85[0][2])) , g_17) | g_17) ^ p_9) & 0x54L) >= g_14[0][0])));
            l_96[0] = (safe_rshift_func_int8_t_s_u((+(safe_lshift_func_uint16_t_u_u((!g_14[0][0]), 8))), (safe_lshift_func_int16_t_s_u((p_9 = (-1L)), 14))));
        }
        l_96[1] = p_9;
        for (g_74 = 2; (g_74 >= 0); g_74 -= 1)
        { 
            int32_t l_101 = 0x75B29072L;
            int64_t l_107 = 0x1BE81B992811E285LL;
            int32_t l_109 = 0x7CA884A1L;
            int32_t l_110 = 5L;
            if ((safe_lshift_func_uint16_t_u_s(g_74, 2)))
            { 
                int32_t l_106 = 0x203DA97BL;
                g_108 = ((safe_mul_func_uint16_t_u_u(((((((l_101 = 0xD12977B08CCF5D46LL) >= (((safe_mul_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(p_10, g_75)) ^ 0xC681L), l_106)) | g_14[0][0]) < g_14[0][1])) < l_107) && 1UL) , 18446744073709551615UL) | l_20), p_12)) & l_106);
                l_110 ^= (l_109 = 0xC2D20EAEL);
            }
            else
            { 
                l_21 = (-5L);
                if (l_107)
                    goto lbl_111;
            }
            l_109 = (l_96[0] = ((p_8 &= ((((!65531UL) || (((g_108 != (safe_div_func_uint8_t_u_u((l_115 , l_21), 248UL))) ^ (-1L)) && g_55)) , 0L) , l_101)) > l_96[0]));
            for (g_55 = 0; (g_55 <= 0); g_55 += 1)
            { 
                int i, j;
                return g_14[g_55][(g_55 + 2)];
            }
        }
    }
    l_116--;
    l_21 = 0x6A21748CL;
    return p_10;
}



static uint64_t  func_28(uint16_t  p_29, uint8_t  p_30)
{ 
    for (g_17 = 0; (g_17 > 41); ++g_17)
    { 
        return p_30;
    }
    return g_14[0][0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_14[i][j], "g_14[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_87[i][j], "g_87[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_165[i][j], "g_165[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_168[i], "g_168[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_172[i][j], "g_172[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_173, "g_173", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
