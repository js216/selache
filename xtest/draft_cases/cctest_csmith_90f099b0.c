// SPDX-License-Identifier: MIT
// cctest_csmith_90f099b0.c --- cctest case csmith_90f099b0 (csmith seed 2431687088)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xff1efab3 */

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

// Options:   -s 2431687088 -o /tmp/csmith_gen_6cc266wy/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint64_t g_11 = 0UL;
static uint32_t g_36 = 1UL;
static int32_t g_51[2][3] = {{0xDAE1DC63L,0xDAE1DC63L,0xDAE1DC63L},{0xDAE1DC63L,0xDAE1DC63L,0xDAE1DC63L}};
static int8_t g_58 = 0x95L;
static uint8_t g_59 = 7UL;
static int32_t g_78[4] = {0xAF535935L,0xAF535935L,0xAF535935L,0xAF535935L};
static int16_t g_94 = 0L;
static int32_t g_95 = 0x64CC4390L;
static int64_t g_96 = 6L;
static int32_t g_98 = 0xA889E4E2L;
static uint32_t g_99 = 4UL;
static uint32_t g_131 = 0x7B59BB01L;



static int32_t  func_1(void);
static uint16_t  func_13(int64_t  p_14);
static int64_t  func_18(uint32_t  p_19, int64_t  p_20, uint16_t  p_21, int32_t  p_22);




static int32_t  func_1(void)
{ 
    uint64_t l_6 = 0x54C3C69AED23B618LL;
    uint64_t l_23 = 0xB722BA7B7E80D68FLL;
    int32_t l_79[3][2];
    uint64_t l_174 = 0UL;
    int32_t l_184 = 1L;
    int16_t l_206 = 0xAE0EL;
    uint16_t l_223 = 1UL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_79[i][j] = 0x47DE68BDL;
    }
lbl_219:
    if ((safe_rshift_func_uint8_t_u_s(255UL, (safe_div_func_int32_t_s_s(l_6, (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_11, g_11)), l_6)))))))
    { 
        uint8_t l_12 = 1UL;
        int32_t l_69 = (-4L);
        g_59 |= ((l_12 <= func_13(((safe_div_func_int8_t_s_s((+func_18(g_11, (7L >= (-2L)), l_23, l_12)), g_11)) , g_11))) || g_11);
        for (l_12 = 27; (l_12 <= 5); l_12 = safe_sub_func_int32_t_s_s(l_12, 4))
        { 
            int8_t l_64 = 9L;
            uint8_t l_71 = 253UL;
            for (g_36 = (-10); (g_36 < 5); g_36++)
            { 
                int32_t l_68 = 0L;
                int32_t l_70 = (-9L);
                l_68 = ((l_64 <= g_36) == (safe_sub_func_uint32_t_u_u(((!0xC0429090L) ^ l_23), 0x2283564FL)));
                l_71--;
            }
        }
    }
    else
    { 
        uint64_t l_80 = 0x07A12536DE7EBAC3LL;
        int32_t l_89 = 0x8679DD5AL;
        if ((safe_add_func_int32_t_s_s(g_51[0][2], ((safe_mod_func_uint64_t_u_u(((l_80 = (l_79[1][1] = (g_78[1] = g_58))) || ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((l_89 = (safe_sub_func_uint64_t_u_u(((l_6 & l_6) || g_59), g_51[1][0]))), g_36)), g_78[2])) , 0xE1B4L), l_80)) < g_78[3])), 2UL)) & g_36))))
        { 
            return g_51[1][0];
        }
        else
        { 
            return g_59;
        }
    }
    for (l_23 = (-17); (l_23 != 24); l_23++)
    { 
        uint8_t l_128[3][2] = {{0xCDL,0xCDL},{0xCDL,0xCDL},{0xCDL,0xCDL}};
        int32_t l_130[4] = {7L,7L,7L,7L};
        uint32_t l_136 = 0xDFC5AECEL;
        uint32_t l_197[4];
        int8_t l_213 = 0x02L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_197[i] = 0x7B8E489EL;
        if ((l_79[1][1] ^= g_59))
        { 
            int8_t l_97 = 8L;
            int32_t l_129[2][4];
            int64_t l_143 = 0xED510FED72739EBELL;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_129[i][j] = 0x9FCC30D4L;
            }
            for (g_58 = 14; (g_58 != 0); g_58 = safe_sub_func_int32_t_s_s(g_58, 1))
            { 
                uint16_t l_127[2][4] = {{0xD0F3L,9UL,9UL,0xD0F3L},{9UL,0xD0F3L,9UL,9UL}};
                int i, j;
                ++g_99;
                g_131 |= (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((((((((safe_mul_func_uint8_t_u_u((l_130[1] = (!((((l_97 & (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((g_78[1] ^ ((safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_uint64_t_u(((safe_unary_minus_func_int16_t_s((((l_127[0][1] > g_51[1][0]) && l_127[0][3]) >= l_97))) | g_95))) < (-8L)), l_97)) , l_128[2][1])) >= 0x1C73263BB6FCE132LL), l_129[1][1])), g_99))) , l_79[1][1]) || g_58) <= g_96))), 0xCDL)) == 0x82L) != g_96) > 0x7FL) && 0x20E74272ABD0CEA3LL) || l_79[1][1]) || g_98) >= l_128[2][1]), 0x6490L)), g_78[1])), l_127[0][1])), l_129[1][1])), l_97)), 7)), g_78[2]));
                g_95 = (safe_mod_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(0x35L, l_136)) & (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((((safe_mod_func_uint8_t_u_u(((l_143 = l_130[1]) == l_6), l_130[1])) , 0x7166L) < 0xD379L) == g_78[1]) <= 18446744073709551615UL), g_98)), 15))) , g_99), g_96));
            }
        }
        else
        { 
            int16_t l_172 = (-1L);
            int32_t l_173 = 0x1966E863L;
            g_95 = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((l_79[1][1] , (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s(l_23, (safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_172 &= ((safe_rshift_func_uint16_t_u_s((~(~l_128[2][1])), l_128[2][1])) | g_59)), g_98)), l_173)) && 0x33A6L), 2)), l_173)), l_23)))), l_173)), g_78[1])) != 0xBBC6L), 0xAB548CD5L)), l_173))) > g_51[1][0]), 15)), g_36));
            if (l_174)
                break;
            if (g_96)
                break;
        }
        if ((~((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((8UL <= (1UL != ((+(((+((l_128[2][1] == 0x2A82L) , g_36)) == g_96) == 0xADA64CFDF4E952D1LL)) | g_131))) ^ 0x17L), g_131)), 7)) < g_94)))
        { 
            uint32_t l_195[1][4];
            uint32_t l_196[1][1];
            int32_t l_198 = 0xFBD2F48CL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_195[i][j] = 0x041155C2L;
            }
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_196[i][j] = 4294967293UL;
            }
            if ((safe_add_func_uint32_t_u_u((l_184 , (((safe_mod_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((l_79[1][1] |= l_130[1]), (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(((((l_195[0][2] > g_51[1][0]) , g_36) < l_184) | l_196[0][0]), l_196[0][0])), l_128[1][0])), l_6)))) < 0UL) & l_197[2]), g_51[1][0])) <= g_131) , g_78[0])), l_196[0][0])))
            { 
                g_95 &= l_195[0][3];
                g_95 &= ((-9L) < (l_198 = (-1L)));
                g_95 = (g_58 , ((~((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(g_11, ((safe_rshift_func_int16_t_s_s(((g_94 = l_206) || l_196[0][0]), g_99)) && 3L))), l_128[1][1])) , g_99)) == g_99));
            }
            else
            { 
                if (l_195[0][2])
                    break;
                g_95 = (l_136 & (((((g_59 = (3L > (safe_mod_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((safe_add_func_int32_t_s_s((-1L), (-8L))) || g_59), g_99)), g_94)))) , l_195[0][2]) < g_78[1]) && l_79[0][1]) || l_213));
            }
        }
        else
        { 
            uint32_t l_218 = 0xAF15EAAFL;
            if ((safe_sub_func_int8_t_s_s(g_99, ((safe_sub_func_uint64_t_u_u((l_79[0][0] < (l_23 | g_131)), 0x7DDD3BA113A2588FLL)) , l_23))))
            { 
                return g_51[0][2];
            }
            else
            { 
                uint16_t l_220 = 0x1D09L;
                l_218 |= (-1L);
                if (g_58)
                    goto lbl_219;
                l_223 |= ((l_220 , ((((safe_rshift_func_int16_t_s_u(0L, 14)) > 0xDDF55BC5L) & l_218) & g_11)) ^ 3L);
            }
        }
    }
    return l_6;
}



static uint16_t  func_13(int64_t  p_14)
{ 
    int64_t l_50 = (-6L);
    int32_t l_52[3][1];
    int32_t l_55 = 0xDD68647DL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_52[i][j] = 1L;
    }
    l_55 = ((safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((l_52[2][0] = (g_51[1][0] = (safe_sub_func_uint16_t_u_u(l_50, 1L)))), (safe_mul_func_uint16_t_u_u((l_50 , 65533UL), l_50)))), 0xD5EBL)) < g_11);
    g_58 = ((p_14 || (l_55 = p_14)) > (safe_add_func_int8_t_s_s(l_50, l_52[1][0])));
    return g_51[0][1];
}



static int64_t  func_18(uint32_t  p_19, int64_t  p_20, uint16_t  p_21, int32_t  p_22)
{ 
    int32_t l_32 = 0x2C4DF8E3L;
    int32_t l_33 = 0x4B7B8319L;
    int32_t l_34 = (-1L);
    uint8_t l_35 = 0x04L;
    int32_t l_43[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_43[i][j] = 1L;
    }
    l_32 = (safe_mod_func_int64_t_s_s(((((0x4129B857L <= (p_19++)) >= ((((safe_add_func_uint8_t_u_u((l_33 ^= (safe_sub_func_uint64_t_u_u(l_32, g_11))), p_20)) , l_34) > g_11) > p_21)) | l_35) && g_11), g_11));
    --g_36;
    l_33 = (safe_add_func_uint32_t_u_u((((g_36 > (p_20 = ((safe_mod_func_int16_t_s_s(p_22, (l_32 , 0xEBB1L))) < l_43[0][0]))) >= g_11) | p_22), l_43[0][0]));
    return p_20;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_51[i][j], "g_51[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);

    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
